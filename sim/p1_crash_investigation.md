# p1 (stemBlock+MFBlock1) crash investigation

## Problem

In the `lmfrnet_merge` 9-task pipeline (`applications/lmfrnet_merge/`), task `p1`
(merged `stemBlock` + `MMCBlock1_mmLayer1` / MFBlock1) crashes during the NoC
simulation shortly after completing its own computation and printing its stats.
The original single-core RS5 port (`Phivers/RS5/app/lmfrnet/src/lmfrnet.c`),
which runs the *same* `.h` math (confirmed byte-for-byte identical via `diff`
against `lmfrnet_common.h`, `cnn_common.h`, `cnn_common_scalar.h`), never
crashes — even though it exercises `stemBlock`/`MFBlock` far more (18 `MFBlock`
calls vs. 1, ~73 `calloc`/`free` pairs vs. 5).

### Symptom

```
$$$_0x1_1_0_[p1] starting application
$$$_0x1_1_0_[p1] finishing application
$$$_0x1_1_0_--- STATS ---
$$$_0x1_1_0_13798701
$$$_0x1_1_0_43260516
ERROR: Load access fault at virtual address 36323438
Task id 256 aborted with cause 5
```

The fault address and several dumped registers decode (little-endian, byte by
byte) to plausible ASCII digit fragments of the STATS numbers just printed —
a signature of reading stale/corrupted memory rather than a random wild
pointer.

## ROOT CAUSE — FOUND

**The kernel computes a task's heap start with a formula that ignores linker
alignment padding, causing the first-ever heap allocation to write a few
bytes too early — directly into the still-in-use tail of `.bss`.**

`MAestro/src/task_control.c:87`:
```c
tcb->heap_end = (void*)(MMR_DATA_BASE + data_size + bss_size);
```
`data_size`/`bss_size` come from `riscv64-elf-size` at build time
(`modules/application.py`'s `check_size()`). This formula assumes `.bss`
begins immediately where `.data` ends, with zero gap.

That assumption is false. `.bss` requires 16-byte alignment (see its section
header's alignment column). Whenever `.data`'s total size isn't itself a
multiple of 16 — which shifts every time code, string literals, or globals
change size — the linker inserts padding before `.bss` actually starts.
Verified directly on the crashing build (`testcase_debug/.../p1.elf`):

```
.data   @ 0x40000000, size 0x6af4  ->  naive end = 0x40006af4
.bss    @ 0x40006b00  (actual, from section header)
                                       gap = 0x40006b00 - 0x40006af4 = 12 bytes
```

The kernel's `MMR_DATA_BASE + data_size + bss_size` computes `0x4005eda8`;
the linker's real `_end` is `0x4005edb4` — the same 12 bytes, propagated all
the way to the end of `.bss`. Confirmed this isn't a one-off: a clean
(non-crashing) build (`testcase_v128`'s non-`static` `p1.elf`) has a gap of
exactly **0** (its `.data` size happened to already land on a 16-byte
boundary), while a crashing build's `p2.elf` independently shows the same
**12**-byte gap as `p1.elf`.

**The mechanism, start to finish:**
1. App calls `_sbrk(0)` (query heap start) on its first `malloc` ever — which
   happens on the *first* `puts()`/`printf()` call, when newlib lazily
   allocates a 1024-byte buffer for stdout (`__swsetup_r` ->
   `__smakebuf_r` -> `__swhatbuf_r` -> `_malloc_r` -> `sbrk_aligned` ->
   `_sbrk_r` -> `_sbrk`).
2. The kernel answers with `tcb->heap_end`, computed via the flawed formula
   above — 12 bytes *before* the real end of `.bss`.
3. `_malloc_r` writes its very first chunk header at that (wrong) address —
   landing inside the last 12 bytes of `.bss`, not in free heap space.
4. Whatever object the linker happens to place last in `.bss` absorbs the
   hit. In this binary, that's `__atexit0`'s tail (`_on_exit_args_ptr`,
   which should always be `NULL`) — because `.bss`'s size (and thus which
   object ends up last, and how the 12-byte gap lines up against it) depends
   on the exact static buffers this task declares.
5. Later, `exit()` -> `__call_exitprocs` dereferences that now-corrupted
   `_on_exit_args_ptr`, and the CPU faults.

This explains every experimental result gathered tonight without exception:
why it depends on exact buffer sizes/storage class (changes whether a gap
exists and what it overlaps), why corruption first appears exactly on the
first `puts()` (first real heap write), why `stemBlock`/`MFBlock`/
`memphis_send` are provably uninvolved (checkpoints before/after each show
no change), why NoC mesh shape/size never mattered (purely a per-binary,
per-task layout computation), and why `_exit(0)` "fixes" it (it never
reaches the code that reads the corrupted field — the corruption is still
there either way).

**The real fix**: make the kernel's heap-start computation account for
inter-section alignment padding — either by rounding `data_size + bss_size`
up to the same alignment `.bss` actually uses before adding `MMR_DATA_BASE`,
or (more robustly) by having the build step capture the linked ELF's real
`_end`/`__BSS_END__` symbol directly instead of recomputing it from raw
section sizes.

## Root cause, precisely located (original trace, superseded by the above)

Added a one-line print of the faulting `pc` (the real `mepc` CSR, captured in
`MAestro/hal/halc.c`'s `hal_exception_handler`, already passed in but never
printed) and cross-referenced it against the auto-generated `p1.lst`
(`objdump -S` listing). The fault is at:

```
lw a4, 260(s4)          # inside __call_exitprocs
```

`s4` was loaded a few instructions earlier from `__atexit0 + 136` — the
`_on_exit_args_ptr` field of newlib's static `struct _atexit` (the
`_REENT_SMALL` layout: `_next`(4) + `_ind`(4) + `_fns[32]`(128) +
`_on_exit_args_ptr`(4) = 140 bytes total, confirmed via `readelf -s` showing
`__atexit0` as a 140-byte object). This field should always be `NULL` — nothing
in this program calls `on_exit()` — but it was found holding non-null garbage,
and `__call_exitprocs` unconditionally dereferences it once `_ind != 0`
(something *did* legitimately register one `atexit` handler, likely newlib's
own lazy stdio-flush-on-exit registration).

**So the crash is not in the ported CNN code.** It's newlib's own exit-time
`atexit`-handler walk, dereferencing a corrupted field in its own static
runtime structure.

Note also (from the same disassembly): `__call_exitprocs` *does* guard this
field — `beqz s4,f54` skips the dangerous dereference entirely if
`_on_exit_args_ptr` is `NULL`, which is what it should always be here (nothing
calls `on_exit()`). So the entire bug reduces to this one field, specifically,
not being `NULL` when it should be.

## Decisive update: corruption predates any CNN code execution

Instrumented `p1.c` with a `DUMP_ATEXIT(label)` macro snapshotting all 35
words of `__atexit0` at four checkpoints: before `stemBlock()`, after
`stemBlock()`, after `MFBlock()`, after the `memphis_send` loop. Kept
`static` buffers and `return 0;` intact throughout (the exact config that
crashes), per instruction not to route around the bug while investigating.

**Result: `atexit[34]` (`_on_exit_args_ptr`) is already `5d31705b` at the very
first checkpoint — before `stemBlock()` ever runs.** The only thing that
happened before that checkpoint is one `puts("[p1] starting application")`
call. All four checkpoints show byte-for-byte identical `__atexit0` contents
throughout the entire run — the corruption doesn't change or grow as
`stemBlock`/`MFBlock`/`memphis_send` execute; it's simply already there from
the start and never touched again.

This is proof, not inference: **`stemBlock`/`MFBlock`/`memphis_send` are
conclusively not the source.** Whatever writes into `__atexit0`'s tail must
happen during program startup (`crt0`/`_start`, before `main()`) or during the
first stdio call's lazy initialization (`__sinit`, which is almost certainly
what set `_ind` from `0` to `1` in the first place — nothing else in this
program calls `atexit()`).

The specific bytes affected are also telling: `atexit[3]` through `atexit[31]`
(29 words — all the legitimately-unused `_fns[]` slots) are correctly `0`.
Only the *last two* `_fns[]` slots (`atexit[32]`, `atexit[33]`) and
`_on_exit_args_ptr` (`atexit[34]`) are non-zero. That's not scattered
corruption — it's isolated to exactly the last 12 bytes of `.bss` (`__atexit0`
is the final object in `.bss`, ending exactly at `_end`/`__BSS_END__`, which is
also where the heap begins). This happens before any `calloc` call, so it
isn't heap-growth related either.

### Additional mesh-shape data points

Both `testcase_64mb` (5×2 mesh, 64 MB/page) and `testcase_4x3` (4×3 mesh,
non-square, 4 MB/page) reproduced the identical crash (`pc=0xf04`, fault
address `0x36323438`) — same as the original 5×2/4 MB run. Larger page size
doesn't help (rules out space exhaustion further), and yet another mesh shape
doesn't change anything (further reinforcing this is purely PE-local).
`testcase_4x4` (square, 4 MB) still running at time of writing.

### `.bss` adjacency (from `readelf -s` on the actual built `p1.elf`)

```
out_mf1.0        @ 0x40006aa0   size 0x38000 (224 KB)
out_stemBlock.1  @ 0x4003eaa0   size 0x20000 (128 KB)   <- ends at 0x4005eaa0
__sf             @ 0x4005eaa0   size 312 bytes           <- newlib's stdio FILE structs
__atexit0        @ 0x4005ebd8   size 140 bytes
_end/__BSS_END__ @ 0x4005ec64
```

`out_stemBlock` is immediately followed by `__sf` (the FILE structs `printf`/
`puts` mutate on every call), which is immediately followed by `__atexit0`.
This chain is the most plausible path for corruption to reach `__atexit0`
without a single, huge, direct overflow.

## What's been ruled out

- **`PRINT_STATS` macro**: expands correctly (`data` is a real array in scope,
  `sizeof` math is right); every other task (`p2`-`p9`) uses the same macro
  without incident (they show normal cascade `"aborted by application"`, not
  independent faults).
- **`memphis_send`**: chunked-send was tried by the user, didn't change
  anything; the crash also happens *after* the send completes.
- **Kernel-level heap/stack collision guards**: `sys_brk`'s sp-vs-break check
  and `sys_syscall`'s per-syscall stack check (`MAestro/src/syscall.c`) never
  fire — grepped for both messages across every log in the run, no matches.
- **`_sbrk`'s `NULL`-vs-`(void*)-1` sentinel bug**: initially suspected in
  `Phivers/RS5/app/common/newlib.c`, but that file isn't even linked into
  Memphis NoC app tasks. The actual linked `_sbrk` (disassembled directly from
  `p1.elf`) is syscall-based (`ecall` #214), correctly checks for `-1`, and
  correctly sets `errno`.
- **`-flto`**: rebuilt `p1` with `-flto` stripped from `common.mk`'s
  `CFLAGS`/`LDFLAGS` — crash persisted identically (different STATS values
  confirmed a genuinely different binary ran). LTO cleared.
- **NoC mesh shape/squareness**: reproduced the identical crash (same `pc`,
  same faulting instruction) on both a 5×2 mesh and (once actually verified) a
  genuinely different topology. This crash is PE-local (a single task's own
  `.bss`/heap/stack/newlib runtime state) and has no architectural connection
  to NoC routing or mapper placement — a separate, already-diagnosed mapper
  bug (`window.c`, saved to memory as `mapper_window_growth_bug`) explains the
  earlier 2×5-fails/5×2-works asymmetry and is unrelated to this crash.
- **Weight/bias array sizes**: every weight/bias array used by `stemBlock` and
  `MMCBlock1_mmLayer1`'s four branches matches its expected element count
  exactly (`864`, `32`, `384`, `12`, `1296`, `648`, `324` — verified against
  `C_in×C_out×K×K`/`C_out`). No OOB reads.
- **`stemBlock`/`MFBlock`'s own writes, at the C level**: hand-traced every
  buffer access (`in_pd`, `out_stemBlock`, `y0_pd`, `y1_pd`, `y2_pd`, `y3`,
  `out_mf1`) for the exact shapes p1 uses. Every access is in-bounds; several
  land exactly on the last valid index with zero slack, consistent with
  deliberately (if tightly) hand-sized buffers, not a bug.
- **`stemBlock`/`MFBlock`'s own writes, at the machine-code level**: disassembled
  the actual compiled loops (GCC produced `stemBlock.constprop.0` /
  `MFBlock.constprop.0` specializations). `stemBlock`'s loop writing into
  `out_stemBlock` (the buffer directly bordering `__sf`) terminates its outer
  loop exactly when the row pointer reaches the buffer's declared end address
  (`s6 == s7`), no unrolling, no overshoot. `MFBlock`'s inlined `concat4_chunk`
  loops (writing into `out_mf1`) are similarly simple, single-`bne`,
  non-unrolled loops with fixed trip counts matching the C code exactly. No
  evidence of overflow at either level.
- **Saved return address (`ra`) corruption**: checked disassembly of `main`'s
  prologue in both buffer-storage-class variants. In the **non-static** (stack)
  build, an overflow past `out_mf1`'s end would reach `main`'s saved `s3` after
  only 12 bytes and saved `ra` after 28 bytes — a real, structurally-confirmed
  risk — **but that build runs clean** (no crash). In the **static** (`.bss`)
  build that actually crashes, `ra` lives in `main`'s ordinary stack frame,
  nowhere near `.bss` — so `ra` was never actually in the corruption's blast
  radius for the crashes we've observed.

## Experimental results (buffer storage class × exit path)

| buffers (`out_stemBlock`/`out_mf1`/`data`) | exit path       | result |
|---|---|---|
| `static` (`.bss`)                          | `return 0;`     | **crashes** (repeatedly, cause 5, always in `__call_exitprocs`) |
| non-`static` (stack)                       | `return 0;`     | clean (`terminated with status 0`) |
| `static` (`.bss`)                          | `_exit(0);`     | clean (`terminated with status 0`) |

Both changes independently avoid the crash by breaking one side of the same
interaction: moving the buffers off `.bss` removes whatever adjacency is
causing harm, and skipping `__call_exitprocs` (via `_exit(0)`) removes the only
code path that ever reads the corrupted field. Neither pinpoints the actual
write that introduces the corruption — that's the open question.

## Practical fix vs. root cause fix

`_exit(0)` (instead of `return 0;`) is a clean, low-risk workaround that keeps
the original `static`/`.bss` buffer architecture intact — it avoids the crash
by never running the code path (`__call_exitprocs`) that reads the corrupted
field. It does **not** fix the underlying bug: the kernel still hands out a
wrong heap-start address to every task whose `.bss` needs alignment padding,
silently corrupting whatever sits last in `.bss` on the first heap
allocation. That corruption just happens to go unread in most tasks (only
`__call_exitprocs`, run at normal `exit()`, ever touches
`_on_exit_args_ptr`).

The real fix is the one-line-conceptually (if not one-line-in-practice) patch
to `MAestro/src/task_control.c`'s heap-start computation described above —
this affects every task on the platform whose `.data` size isn't a multiple
of 16, not just this one.

## Debugging methodology used (for future reference)

No live debugger is attached to the Verilator RTL sim, so debugging proceeds
by:

1. Reading the symbol table (`readelf -s`) to get exact addresses/sizes of
   globals — establishes the "map" of `.bss` adjacency.
2. Adding a one-line print of the real faulting `pc` (`mepc`, already captured
   in `MAestro/hal/halc.c`'s exception handler but not printed) and
   cross-referencing it against the auto-generated `.lst` file
   (`objdump -S`) to get the exact source line of a fault.
3. Approximating single-stepping by inserting raw-memory-dump checkpoints
   (`DUMP_ATEXIT`-style macros) at multiple points during execution, to
   bisect *when* corruption first appears rather than only observing it at
   the end.
4. Disassembling the actual compiled functions (not just reading the C source)
   to rule out compiler-introduced artifacts (loop unrolling, LTO cross-TU
   inlining interacting with function-level `optimize()` attributes) as
   distinct from genuine logic bugs.

## Status: root cause found and confirmed

Chased the corruption's exact trigger by adding a checkpoint *before* the
first `puts()` call (captured silently, without printing, to avoid the
checkpoint itself triggering the very stdio init being tested) alongside the
existing four checkpoints. Result: `__atexit0` was completely clean
(`atexit[32..34]` all `0`) at that pre-`puts()` checkpoint, and already
corrupted by the very next checkpoint (right after `puts()` returns) — every
checkpoint afterward stayed byte-for-byte identical. That pinned the trigger
to "something in that first `puts()` call," which led to fully tracing
newlib's lazy stdio-init chain (`__sinit` -> `global_stdio_init` -> `<std>`
-> `__swsetup_r` -> `__smakebuf_r` -> `__swhatbuf_r` -> `_malloc_r` ->
`sbrk_aligned` -> `_sbrk_r` -> `_sbrk`) instruction by instruction — all
correct — which in turn led to checking the *kernel's* side of the first
`_sbrk` call, where the actual bug was found (see "ROOT CAUSE — FOUND"
above).

Nothing left open on this investigation. `_exit(0)` remains the practical
per-task workaround; the platform-level fix is in `task_control.c`'s
heap-start computation.
