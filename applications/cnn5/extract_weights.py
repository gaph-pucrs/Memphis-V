"""
extract_weights.py — Converts float AlexNet weight headers to integer and splits
per PE, matching the cnn5 layout (all 5 conv layers).

Usage:
    python3 extract_weights.py <layer> <float_weight_file.h>

Examples:
    # Generate p3_weights.h from layer 2 integer weights:
    python3 extract_weights.py 2 ../alexnet/int/params/2_weight.h

    # Generate p5_weights.h from layer 3 float weights:
    python3 extract_weights.py 3 ../alexnet/float/params/3_weight.h

    # Generate p7_weights.h from layer 4 float weights:
    python3 extract_weights.py 4 ../alexnet/float/params/4_weight.h

    # Generate p9_weights.h from layer 5 float weights:
    python3 extract_weights.py 5 ../alexnet/float/params/5_weight.h

Layer configs (matching cnn5/cnn_std.h):
    Layer 1 (p1 workers):  64 out, 11x11 kernel,  3 in total, 3 PEs →  1 in-ch/PE
    Layer 2 (p3 workers): 192 out,  5x5  kernel, 64 in total, 4 PEs → 16 in-ch/PE
    Layer 3 (p5 workers): 384 out,  3x3  kernel, 192 in total, 6 PEs → 32 in-ch/PE
    Layer 4 (p7 workers): 256 out,  3x3  kernel, 384 in total, 6 PEs → 64 in-ch/PE
    Layer 5 (p9 workers): 256 out,  3x3  kernel, 256 in total, 4 PEs → 64 in-ch/PE
"""

import sys
import os
import re

LAYER_CONFIGS = {
    1: dict(
        out_depth=64, kernel_h=11, kernel_w=11, in_depth=3,
        num_pes=3, var_name="weights_1", out_file="p1_weights.h",
        is_float=True,
        per_pe_files=[
            ("p1_0_weights.h", "weights_1", 0),
            ("p1_1_weights.h", "weights_1", 1),
            ("p1_2_weights.h", "weights_1", 2),
        ],
    ),
    2: dict(
        out_depth=192, kernel_h=5, kernel_w=5, in_depth=64,
        num_pes=4, var_name="weights_2", out_file="p3_weights.h",
        is_float=False,
    ),
    3: dict(
        out_depth=384, kernel_h=3, kernel_w=3, in_depth=192,
        num_pes=6, var_name="weights_3", out_file="p5_weights.h",
        is_float=True,
    ),
    4: dict(
        out_depth=256, kernel_h=3, kernel_w=3, in_depth=384,
        num_pes=6, var_name="weights_4", out_file="p7_weights.h",
        is_float=True,
    ),
    5: dict(
        out_depth=256, kernel_h=3, kernel_w=3, in_depth=256,
        num_pes=4, var_name="weights_5", out_file="p9_weights.h",
        is_float=True,
    ),
}

SCALE = 1024  # float → int scaling factor


def parse_numbers(filename, is_float):
    values = []
    in_array = False
    with open(filename) as f:
        for line in f:
            if '{' in line:
                in_array = True
                after = line.split('{', 1)[1]
            elif '}' in line and in_array:
                after = line.split('}', 1)[0]
                in_array = False
            elif in_array:
                after = line
            else:
                continue
            after = after.replace('\\', '').replace('\n', '')
            for tok in after.split(','):
                tok = tok.strip()
                if not tok:
                    continue
                try:
                    if is_float:
                        values.append(round(float(tok) * SCALE))
                    else:
                        values.append(int(tok))
                except ValueError:
                    pass
            if not in_array:
                break
    return values


def write_header(out_path, var_name, extracted):
    with open(out_path, 'w') as f:
        f.write(f'extern const int {var_name}[{len(extracted)}] = {{\n')
        for i, v in enumerate(extracted):
            f.write(str(v))
            if i < len(extracted) - 1:
                f.write(', ')
            if (i + 1) % 10 == 0:
                f.write('\n')
        f.write('\n};\n')
    print(f"Written {len(extracted)} values → {out_path}")


def extract_and_write(layer, src_file):
    cfg = LAYER_CONFIGS[layer]
    out_d = cfg['out_depth']
    kh, kw = cfg['kernel_h'], cfg['kernel_w']
    in_d = cfg['in_depth']
    n_pes = cfg['num_pes']
    local_d = in_d // n_pes
    ksz = kh * kw
    is_float = cfg['is_float']

    print(f"Layer {layer}: {out_d} out, {kh}x{kw} kernel, {in_d} in → {n_pes} PEs ({local_d} in-ch each)")

    weights = parse_numbers(src_file, is_float)
    expected = out_d * ksz * in_d
    print(f"Read {len(weights)} values (expected {expected})")
    if len(weights) != expected:
        print("ERROR: count mismatch — wrong file or config?")
        sys.exit(1)

    # Layer 1 is special: each PE gets exactly 1 input channel, written to separate files
    if layer == 1 and 'per_pe_files' in cfg:
        for out_file, var_name, pe_idx in cfg['per_pe_files']:
            pe_start = pe_idx * local_d
            pe_end = pe_start + local_d
            extracted = []
            for oc in range(out_d):
                for ic in range(local_d):
                    global_ic = pe_start + ic
                    start = oc * ksz * in_d + global_ic * ksz
                    extracted.extend(weights[start:start + ksz])
            out_path = os.path.join(os.path.dirname(__file__), out_file)
            write_header(out_path, var_name, extracted)
        return

    # For layers 2-5: extract first local_d input channels for all output channels
    extracted = []
    for oc in range(out_d):
        for ic in range(local_d):
            start = oc * ksz * in_d + ic * ksz
            extracted.extend(weights[start:start + ksz])

    out_path = os.path.join(os.path.dirname(__file__), cfg['out_file'])
    write_header(out_path, cfg['var_name'], extracted)


if __name__ == '__main__':
    if len(sys.argv) != 3:
        print("Usage: python3 extract_weights.py <layer_number> <weight_file.h>")
        sys.exit(1)
    layer = int(sys.argv[1])
    if layer not in LAYER_CONFIGS:
        print(f"Unknown layer {layer}. Supported: {list(LAYER_CONFIGS.keys())}")
        sys.exit(1)
    extract_and_write(layer, sys.argv[2])
