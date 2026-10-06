"""
generate_weights_pytorch.py — Extracts AlexNet weights directly from PyTorch/torchvision
and writes C header files for all 5 conv layers, matching the cnn5 PE split layout.

Usage:
    python3 generate_weights_pytorch.py

Outputs (written to same directory as this script):
    p1_0_weights.h, p1_1_weights.h, p1_2_weights.h        (Conv1, 3 PEs, 1 in-ch each)
    p2_bias.h                                               (Conv1 bias, 64 values)
    p3_0_weights.h .. p3_7_weights.h                       (Conv2, 8 PEs, 8 in-ch each)
    p4_bias.h                                               (Conv2 bias, 192 values)
    p5_0_weights.h .. p5_3_weights.h                       (Conv3, 4 PEs, 48 in-ch each)
    p6_bias.h                                               (Conv3 bias, 384 values)
    p7_0_weights.h .. p7_5_weights.h                       (Conv4, 6 PEs, 64 in-ch each)
    p8_bias.h                                               (Conv4 bias, 256 values)
    p9_0_weights.h .. p9_3_weights.h                       (Conv5, 4 PEs, 64 in-ch each)
    p10_bias.h                                              (Conv5 bias, 256 values)

AlexNet torchvision feature indices:
    features[0]  : Conv2d(3,   64, 11, stride=4, padding=2)  → Layer 1
    features[3]  : Conv2d(64,  192, 5,  padding=2)           → Layer 2
    features[6]  : Conv2d(192, 384, 3,  padding=1)           → Layer 3
    features[8]  : Conv2d(384, 256, 3,  padding=1)           → Layer 4
    features[10] : Conv2d(256, 256, 3,  padding=1)           → Layer 5

Weights are scaled by SCALE=1024 and rounded to int to match the fixed-point
arithmetic in cnn_common.h (conv_sum_bias divides by 1024).
"""

import os
import sys

SCALE = 1024
OUT_DIR = os.path.dirname(os.path.abspath(__file__))

LAYER_CONFIGS = [
    # per_pe=True → write one file per PE; each file has only that PE's input channels
    dict(feat=0,  out_d=64,  in_d=3,   kh=11, kw=11, n_pes=3,
         b_var="bias_1", b_file="p2_bias.h",
         per_pe=True,
         pe_files=[(f"p1_{i}_weights.h", "weights_1") for i in range(3)]),
    dict(feat=3,  out_d=192, in_d=64,  kh=5,  kw=5,  n_pes=8,
         b_var="bias_2", b_file="p4_bias.h",
         per_pe=True,
         pe_files=[(f"p3_{i}_weights.h", "weights_2") for i in range(8)]),
    dict(feat=6,  out_d=384, in_d=192, kh=3,  kw=3,  n_pes=4,
         b_var="bias_3", b_file="p6_bias.h",
         per_pe=True,
         pe_files=[(f"p5_{i}_weights.h", "weights_3") for i in range(4)]),
    dict(feat=8,  out_d=256, in_d=384, kh=3,  kw=3,  n_pes=6,
         b_var="bias_4", b_file="p8_bias.h",
         per_pe=True,
         pe_files=[(f"p7_{i}_weights.h", "weights_4") for i in range(6)]),
    dict(feat=10, out_d=256, in_d=256, kh=3,  kw=3,  n_pes=4,
         b_var="bias_5", b_file="p10_bias.h",
         per_pe=True,
         pe_files=[(f"p9_{i}_weights.h", "weights_5") for i in range(4)]),
]


def write_header(path, var_name, values):
    with open(path, 'w') as f:
        f.write(f'extern const int {var_name}[{len(values)}] = {{\n')
        for i, v in enumerate(values):
            f.write(str(v))
            if i < len(values) - 1:
                f.write(', ')
            if (i + 1) % 10 == 0:
                f.write('\n')
        f.write('\n};\n')
    print(f"  Written {len(values):>8,} values → {os.path.basename(path)}")


def write_bias_header(path, var_name, values):
    with open(path, 'w') as f:
        f.write(f'extern const int {var_name}[{len(values)}] = {{ \\\n')
        for v in values:
            f.write(f'{v}, \\\n')
        f.write('};\n')
    print(f"  Written {len(values):>8,} values → {os.path.basename(path)}")


def extract_weights_shared(w_tensor, out_d, in_d, kh, kw, local_d):
    """Extract first local_d input channels for each output channel."""
    ksz = kh * kw
    extracted = []
    for oc in range(out_d):
        for ic in range(local_d):
            kernel = w_tensor[oc, ic].flatten().tolist()
            extracted.extend([round(v * SCALE) for v in kernel])
    return extracted


def extract_weights_per_pe(w_tensor, out_d, in_d, kh, kw, local_d, pe_idx):
    """Extract local_d input channels for PE pe_idx."""
    pe_start = pe_idx * local_d
    extracted = []
    for oc in range(out_d):
        for ic in range(local_d):
            kernel = w_tensor[oc, pe_start + ic].flatten().tolist()
            extracted.extend([round(v * SCALE) for v in kernel])
    return extracted


def main():
    try:
        import torch
        import torchvision
        from torchvision.models import alexnet, AlexNet_Weights
    except ImportError:
        print("ERROR: PyTorch/torchvision not found. Install with:")
        print("  pip3 install torch torchvision --index-url https://download.pytorch.org/whl/cpu")
        sys.exit(1)

    print("Loading AlexNet pretrained weights from torchvision...")
    model = alexnet(weights=AlexNet_Weights.DEFAULT)
    model.eval()
    features = model.features
    print(f"Loaded AlexNet. Processing {len(LAYER_CONFIGS)} conv layers.\n")

    for i, cfg in enumerate(LAYER_CONFIGS):
        layer_num = i + 1
        feat_idx = cfg['feat']
        out_d = cfg['out_d']
        in_d = cfg['in_d']
        kh, kw = cfg['kh'], cfg['kw']
        n_pes = cfg['n_pes']
        local_d = in_d // n_pes
        ksz = kh * kw

        conv = features[feat_idx]
        w = conv.weight.data  # shape: [out_d, in_d, kh, kw]
        b = conv.bias.data    # shape: [out_d]

        print(f"Layer {layer_num} (features[{feat_idx}]): {out_d} out, {kh}x{kw}, {in_d} in → {n_pes} PEs ({local_d} in-ch/PE)")

        # Weights
        if cfg['per_pe']:
            for pe_idx, (pe_file, pe_var) in enumerate(cfg['pe_files']):
                values = extract_weights_per_pe(w, out_d, in_d, kh, kw, local_d, pe_idx)
                write_header(os.path.join(OUT_DIR, pe_file), pe_var, values)
        else:
            values = extract_weights_shared(w, out_d, in_d, kh, kw, local_d)
            write_header(os.path.join(OUT_DIR, cfg['w_file']), cfg['w_var'], values)

        # Bias
        bias_values = [round(v.item() * SCALE) for v in b]
        write_bias_header(os.path.join(OUT_DIR, cfg['b_file']), cfg['b_var'], bias_values)
        print()

    print("Done. All weight headers generated.")


if __name__ == '__main__':
    main()
