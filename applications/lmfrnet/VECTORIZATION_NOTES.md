# Keeping scalar tasks scalar and vector tasks vector

## Why this matters

The heterogeneous MFBlock_tran split puts backbone/stem/fc tasks (using
`cnn_common_scalar.h`) and tail tasks (using `cnn_common_vector.h` via
`#define VECTOR` before `#include "cnn_common.h"`) in the *same* app build.
Task files are numbered in actual pipeline execution order (`p1`...`p24`,
renumbered from the original split-first/renumber-later layout so tails sit
right after their backbone, e.g. `p4`(backbone)→`p5`(tail)→`p6`). The 6
vector tasks are `p1` (stemBlock), `p5`/`p10`/`p19` (`MFBlock_tran_tail`,
tails of `p4`/`p9`/`p18`), `p23` (`MFBlock_gap_tail`, tail of `p22`), and
`p24` (fc, the classifier). The other 18 (`p2,p3,p4,p6,p7,p8,p9,p11-p18,
p20,p21,p22`) stay scalar.

All tasks in one app share one `CFLAGS`/`ARCH` (see `applications/lmfrnet/Makefile`
and `sim/Makefile`'s `run-lmfrnet-v%` target) — including the vector-capable
`-march=rv32imc_zicsr_zve32x_zvl*b` needed by the tail tasks. That means the
scalar/vector split is enforced purely by *which kernels a task's source calls*
(explicit inline `__asm__` in `cnn_common_vector.h` vs. plain C in
`cnn_common_scalar.h`), not by any build flag. Nothing stops the same
vector-capable compiler from opportunistically emitting RVV instructions inside
`cnn_common_scalar.h` too, unless we say otherwise.

Verification method: `common.mk` already generates a `<task>.lst` disassembly
(`objdump -S`) for every task. Grep it for RVV mnemonics
(`vsetvli|vle8|vse8|vle32|vse32|vmacc|vadd\.vv|vmslt|vmerge|vsra\.vi|vsetivli`):
zero matches expected for the 18 scalar tasks, nonzero expected for
`p1`/`p5`/`p10`/`p19`/`p23`/`p24`.

## Three separate GCC mechanisms can inject vector instructions, not one

Assuming `-O2` alone (no `-O3`) keeps a vector-capable target scalar is not
correct. In practice we hit three distinct opt-in-by-default mechanisms, one
after another:

1. **Loop auto-vectorization.** `-ftree-vectorize` (whole-loop vectorization)
   is an `-O3` feature, but `-ftree-slp-vectorize` (straight-line-code /
   superword-level vectorization) has been enabled by default at `-O2` since
   GCC 12. `conv_chunk`'s MAC loop is exactly the shape it targets.
   - Mitigation: `__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize")))`
     per function.

2. **`memcpy`/`memset` builtin recognition + "move by pieces" expansion.**
   `concat4_chunk` originally used `memcpy` for constant-size copies (channel
   counts like `12`/`6` are compile-time literals, and even the "runtime"
   `C_in` argument becomes constant post-inlining/constant-propagation under
   `-flto`, since every call site passes a `#define`d literal). GCC's
   `-fbuiltin` recognizes these `memcpy`/`memset` calls and can expand them
   directly into RVV `vle8.v`/`vse8.v`/`vle32.v`/`vse32.v` sequences via its
   "move by pieces" block-copy logic — a decision made independent of
   `-ftree-vectorize`/`-ftree-slp-vectorize`.
   - Attempted mitigation: `__attribute__((no_builtin))` per function — this
     alone was **not sufficient** (see #3).
   - Actual fix: replace `memcpy`/`memset` calls with explicit element-wise
     `for` loops in `cnn_common_scalar.h` (`concat4_chunk`, `stemBlock`'s pad
     fallback, `MFBlock_gap`'s GAP-accumulator reset).

3. **`-ftree-loop-distribute-patterns` (loop idiom recognition).** Also
   default-on at `-O2`+. It recognizes simple copy/set loops — including the
   exact loops written as the fix for #2 — and rewrites them back into
   `memcpy`/`memset` calls internally, which then go through the same "move by
   pieces" vector expansion as #2. This is a *separate* flag from
   `-ftree-vectorize`/`-ftree-slp-vectorize` and was not covered by the
   mitigation for #1.
   - Mitigation: add `"no-tree-loop-distribute-patterns"` to the `optimize`
     attribute list.

## Final per-function attribute

Applied to every function in `cnn_common_scalar.h` (required) and, for
consistency/documentation of intent, every non-asm function in
`cnn_common_vector.h` (not strictly required there, since that file is
supposed to produce vector code):

```c
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns")))
__attribute__((no_builtin))
void some_kernel(...) { ... }
```

Plus: no `memcpy`/`memset` calls left anywhere in `cnn_common_scalar.h` —
replaced with explicit element-wise loops, which the attribute above keeps
scalar.

## Correctness validation, not just measurement purity

This wasn't only about keeping cycle counts clean for the comparison plot — unintended
autovectorization actually broke correctness. Before the `no-tree-vectorize`/
`no-tree-slp-vectorize`/`no-tree-loop-distribute-patterns`/`no_builtin` attributes and
the `memcpy`/`memset`-to-loop rewrite (see above), the auto-vectorized backbone build
produced a **wrong** final classification. After the fix, the VLEN=128 run
(`sim/testcase_lmfrnet_v128`) produced `p24` (the classifier, renumbered from the
original `p20`) predicted class 5 (val = 107198) — the known-correct result. Confirms
the fix is load-bearing for correctness, not just for keeping the "backbone stays
scalar" experiment honest.

## What we deliberately did *not* change

- `cnn_common_vector.h`'s `concat4_chunk` is **not called by any current task**
  (`stemBlock`/`fc` are now used by `p1`/`p24`; `MFBlock`/`MFBlock_tran`/
  `MFBlock_gap` are still unused since no additional MMCBlock layer runs vector
  today — but their `id`-param/instrumentation mismatch with the scalar twins
  was fixed anyway, since a latent landmine is worse than a small amount of
  dead-code upkeep once someone notices it). `concat4_chunk`'s dead-code
  `memcpy` was deliberately left alone — editing unreferenced code is
  unnecessary churn.
- `MFBlock_gap_tail`'s own `memset` reset (`cnn_common_vector.h`, used by
  `p23`, the tail of `p22`'s GAP backbone) was left as `memset` — `p23` is a
  *vector* tail task, so a compiler-inserted vector store there doesn't violate the actual requirement
  (backbone tasks must be scalar; tail tasks are supposed to be vector
  regardless of whether every last instruction came from our own inline asm).
- Global build flags (`common.mk` CFLAGS, `-fno-tree-vectorize` etc.) were
  deliberately avoided in favor of per-function attributes, so the guarantee
  is visible and scoped at the point of definition rather than hidden in the
  build system, and can't accidentally affect other applications sharing
  `common.mk`.

## RS5's RVV implementation is missing widening multiply-accumulate
## (relevant to any future int8-quantization work)

Checked directly in `Phivers/RS5/rtl/{RS5_pkg,decode,vectorUnit}.sv` while scoping
what an 8-bit-precision version of lmfrnet (int8 storage, int32 accumulator — the
standard scheme, since the MAC loop can't accumulate into the same narrow type it
stores without overflowing almost immediately) would actually cost on this core.

**Implemented** (`RS5_pkg.sv` opcode enum, `decode.sv` funct6 decode table):
- `VMACC`, `VNMSAC`, `VMADD`, `VNMSUB` — regular (non-widening) multiply-accumulate,
  same width in and out. This is what `conv_chunk`'s vector kernel already uses today
  (`vmacc.vx`).
- `VWMUL`, `VWMULU`, `VWMULSU` — widening **multiply only** (narrow×narrow →
  double-width product, no accumulation).

**Not implemented** — these funct6 encodings fall through to `decode.sv`'s
`default: decode_vector_opm = VNOP` (silently decoded as a no-op/invalid instruction,
triggering the `$display("... INVALID VECTOR INST!!!")` check in `vectorUnit.sv` if
ever emitted):
- `VWMACC`/`VWMACCU`/`VWMACCSU`/`VWMACCUS` — the widening multiply-**accumulate**
  family. This is the single instruction an efficient int8×int8→int32 MAC loop would
  want (narrow product added directly into a wide accumulator in one op).
- `VWADD`/`VWSUB` — widening add/subtract, also absent, so there's no way to manually
  chain a `VWMUL` product into a wider accumulator either.

**Two more constraints on the `VWMUL` that does exist** (`vectorUnit.sv`'s
`vsew_effective`/`vlmul_effective` logic):
- No `SEW=32→64` widening — only `8→16` and `16→32` are handled; a `32`-bit input
  falls to a `default` case with a commented-out, never-enforced `$error` (silently
  wrong, not a hard failure).
- No `LMUL=8` input for widening — `m1→m2`, `m2→m4`, `m4→m8` work, but `m8→m8` (which
  would need a nonexistent `m16` destination) silently produces wrong results rather
  than erroring. **All current kernels use `m8`.**

**Implication:** there's no single-instruction path to "int8 × int8 → accumulate into
int32" on this core. The best available route is `VWMUL` (int8×int8→int16, one
widening step, `m8` input not allowed so max `m4`) followed by a *separate*
non-widening `VMACC`/`VADD` — more instructions than the RVV spec's intended
single-`vwmacc` idiom, and it forces giving up `m8` (i.e. some of the "more elements
per instruction" benefit int8 would otherwise buy) for the narrow inputs. Still
workable, just less efficient than the ideal int8-quantized-conv pattern — worth
knowing before committing to that design.

## Hypothetical: would 8-bit precision keep the four tails' speedup flat
## (like Finding 4 in HETEROGENEOUS_SPLIT_RESULTS.md), or not?

**No — 8-bit would break that flatness, not preserve it.** Finding 4's flat ~22%
VLEN=128→256 speedup across all four tails (`p5`/`p10`/`p19`/`p23`, `C_out` =
104/200/392/464) held because every one of them had `C_out ≫ VLMAX` (32, at VLEN=128,
`m8`, `SEW=32`) — all needed multiple full register-group iterations, so doubling
VLEN/BW only shaved fixed per-iteration overhead, proportionally the same amount for
all four.

At `SEW=8` (fixed VLEN=128, `m8`), `VLMAX` quadruples to 128 — and that changes each
tail's situation *differently*, since `C_out` is fixed per stage:

| Tail | C_out | Iterations @ SEW=32 (VLMAX=32) | Iterations @ SEW=8 (VLMAX=128) | Reduction |
|---|---:|---:|---:|---:|
| p5  | 104 | 4  | **1** (104 < 128 — fits in a single group) | 4x |
| p10 | 200 | 7  | 2 | 3.5x |
| p19 | 392 | 13 | 4 | 3.25x |
| p23 | 464 | 15 | 4 | 3.75x |

`p5` is the only one that crosses *below* `VLMAX` entirely and collapses to a single
iteration — qualitatively different from the other three, which still need multiple
groups even at 8-bit. So the four tails would diverge instead of moving together —
closer to the *original* intuition that deeper/bigger-`C_out` stages should behave
differently, just inverted: the biggest *relative* mechanical win lands on the
**shallowest** tail (`p5`), not the deepest, because it's the only one small enough to
fit `VLMAX` in one shot.

Two reasons this can't be turned into a confident number the way the BW=128/256
estimates were:

1. **No real int8 benchmark to calibrate against.** The BW=128/256 estimates were
   grounded in an actual measured single-core ratio (`conv_chunk_summary.md`). For
   `SEW=8` there's only the mechanism above, not a measured ratio — and real speedups
   already run *sub-linear* to the naive math (doubling `BUS_WIDTH` only bought 0.632x,
   not the naive 0.25x, because of fixed FSM overhead per iteration that doesn't scale
   away).
2. **The missing `VWMACC` (previous section) makes it worse, and unevenly.** A real
   int8×int8→int32 kernel needs `VWMUL` + a separate add *per iteration* — overhead
   paid once for `p5` (1 iteration) but 2-4x for `p10`/`p19`/`p23`. That erodes exactly
   the deeper tails' already-smaller relative gains, likely widening the divergence
   between `p5` and the rest rather than narrowing it.

Net expectation: `p5` would pull noticeably ahead of `p10`/`p19`/`p23` in relative
speedup if lmfrnet were ever moved to 8-bit — but the exact magnitude is a reasoned
guess, not an estimate, absent either a real int8 single-core benchmark or an actual
implementation of the `VWMUL`-based workaround kernel.
