# matmul_k

Distributed integer matrix multiplication `C = A x B` (`int32_t`, `N x N`) with the **inner dimension (k)** split among `W` workers.

```
           A                       B                       C
  +---+---+---+---+         +-------------+         +-------------+
  |   |   |   |   |      w0 |     B0      |         |             |
  |A0 |A1 |A2 |A3 |    x w1 |     B1      |    =    | sum Ak x Bk |
  |   |   |   |   |      w2 |     B2      |         |             |
  |   |   |   |   |      w3 |     B3      |         |             |
  +---+---+---+---+         +-------------+         +-------------+
   w0  w1  w2  w3                          C = A0 x B0 + A1 x B1 + A2 x B2 + A3 x B3
```

1. **Scatter**: `master` sends to worker `w` the column block `A[:, k]` and the row block `B[k, :]`, with `k = [w*N/W, (w+1)*N/W)` (`2 N^2/W` words per worker).
2. **Compute**: each worker computes the full-size partial product `C'w = A[:, k] x B[k, :]` (`N x N`) with a scalar kernel.
3. **Gather + reduce**: each worker returns `C'w` (`N^2` words per worker), `master` adds the `W` partials and checks the result against a golden `C` computed with numpy.

The output is replicated: every worker returns `N^2` words, so the gather traffic and the master reduction grow with `W` while the computation per worker shrinks with `W`.
`W = 1` (master + 1 worker) is the sequential baseline.

## Files

| File | Origin | Content |
|---|---|---|
| `kernel.h` | hand-written | Scalar block multiplication kernel |
| `worker_impl.h` | hand-written | Worker logic, shared by all workers |
| `master_impl.h` | hand-written | Master logic (scatter, gather, reduce, verify) |
| `Makefile` | hand-written | Includes `common.mk` |
| `generator/generator.py` | hand-written | Generates the files below |
| `config.yaml` | generated | CTG: `master` <-> `worker0` .. `worker{W-1}` |
| `matmul_k.h` | generated | `MATMUL_N`, `MATMUL_W`, `MATMUL_KB = N/W` |
| `data.h` | generated | `A`, `B` and golden `C_ref` (master only) |
| `master.c` | generated | Worker task ID vector `P[]` + `master_impl.h` |
| `workerX.c` | generated | `#define WORKER_ID X` + `worker_impl.h` |

Every `.c` file becomes a task, so the shared worker code lives in `worker_impl.h` (there is no `worker_impl.c`).
Task IDs are assigned by mint in alphabetical order of the file names (`worker10` comes before `worker2`), so the master addresses the workers through `P[] = {worker0, worker1, ...}` instead of numeric IDs.

The repository ships the generated files for `N = 32`, `W = 4`, which fit the default 64 KB pages.

## Generating

The generator needs numpy:

```console
cd applications/matmul_k/generator
python3 generator.py --workers W --size N [--seed S] [--range R] [--out DIR]
```

* `N` must be divisible by `W`.
* Elements are drawn uniformly from `[-R, R]` (default `R = 100`); the generator refuses ranges where `N R^2` could overflow `int32`.
* Worker files left over from a previous generation with more workers are removed.
* The generator prints the static memory footprint of each task and the largest message.

## Memory limits

Each task has one data page (`page_size_data_KB`) for `.data`, `.bss`, heap and stack.
Besides that, `memphis_send` copies the message into the **kernel heap** (output pipe) before it is delivered, so the kernel page must also fit the largest message.

| Task | Static data (words) |
|---|---|
| master | `3 N^2` (`A`, `B`, `C_ref`) + `2 N^2` (accumulated `C`, received `C'w`) + `N^2/W` (packed column block of `A`) |
| worker | `N^2/W` (`A` block) + `N^2/W` (`B` block) + `N^2` (`C'w`) |
| largest message | `N^2` (`C'w`, from worker to master) |

| N | master (W = 1) | worker (W = 1) | largest message | suggested page size |
|---|---|---|---|---|
| 32 | 24 KB | 12 KB | 4 KB | 64 KB |
| 64 | 96 KB | 48 KB | 16 KB | 128 KB |
| 128 | 384 KB | 192 KB | 64 KB | 512 KB |
| 256 | 1536 KB | 768 KB | 256 KB | 2048 KB |

Keep `page_size_inst_KB` equal to `page_size_data_KB`: MAestro derives the page offset from the instruction page size.

## Running

With the generated files in place (example: 5x5 manycore, one task per PE):

```yaml
# applications.yaml
apps:
  - name: matmul_k
```

```yaml
# scenario.yaml
management:
  - task: mapper_task
    static_mapping: [0,0]
apps:
  - name: matmul_k
```

```console
mint testcase testcase.yaml
mint applications testcase applications.yaml
mint scenario testcase scenario.yaml
mint simulate testcase/scenario --nogui
```

The master prints `MATMUL_K PASS` (or `MATMUL_K FAIL` with the first mismatch).

## Measurements

All timestamps come from `memphis_get_tick()` and are printed after the measured region, so `printf` does not affect them:

```
MM worker w=<w> t_start=.. t_recv_a=.. t_recv_b=.. t_comp=.. t_send=..
MM gather w=<w> t_recv=.. t_acc=..
MM master N=.. W=.. t_start=.. t_scatter=.. t_end=.. t_verify=.. t_pack=.. errors=..
```

* Total time: `t_end - t_start` on the master (scatter + gather + reduce, without verification).
* Worker: receive `t_recv_b - t_start` (waiting + transfer), compute `t_comp - t_recv_b`, send `t_send - t_comp` (copy to the kernel pipe and, when the master already requested it, the transfer).
* Master: scatter `t_scatter - t_start` (of which `t_pack` is packing `A`), per-worker reception `t_recv` and accumulation `t_acc`.
