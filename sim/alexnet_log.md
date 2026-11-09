# alexnet_log.py

Reads the measurements the AlexNet tasks print (`applications/alexnet/debug.h`) from a run's logs, saves them as one table, and builds tables from it: checksums, cycles per layer and their breakdown.

Run it from `sim/` with `~/lmfrnet/bin/python` (it needs pandas).

## What the tasks print

Every task buffers one row per measurement and prints them after the run. After MAestro's `$$$_<pe>_<app>_<task id>_` prefix:

```
hdr,task,inf,kind,step,peer,bytes,to,tf,cycles,mul,vmac,value
row,c2_5,1,recv,,26,23328,66523911,169255207,102731296,0,0,
```

`debug.h`'s header comment documents the columns. There are four kinds of rows:

| kind | from | step | filled in |
|---|---|---|---|
| `compute` | `TIMED(step, ...)` | e.g. `conv`, `psum`, `bias`, `relu`, `pool`, `fc6`, `bias6`, `relu6` | `to`, `tf`, `cycles`, `mul`, `vmac` |
| `send`, `recv` | `SEND`, `RECEIVE` | | `peer`, `bytes`, `to`, `tf`, `cycles`, `mul`, `vmac` |
| `check` | `CHECK(step, value)` | `conv1`..`pool5`, `fc6`..`fc8`, `class`, `val` | `value` |

- `to`/`tf` are global ticks, so a send can be matched with its receive on another PE.
- `mul`/`vmac` count per core, so they include the other task on the same PE and the kernel.

## Runs

A run is a scenario, given by its path relative to `sim/`:

```
testcase_4x4_alexnet_v128/alexnet_v128_scenario
```

Its name in the tables is the testcase without `testcase_`, e.g. `4x4_alexnet_v128`.

## Usage

```console
cd sim
~/lmfrnet/bin/python alexnet_log.py [options] <run> [<run> ...]
```

| option | what it does |
|---|---|
| (none) | build or read each run's table |
| `--rebuild` | rebuild the tables from the logs, even if they are up to date |
| `--print` | print the tables |
| `--checksums` | save each run's checksums |
| `--compare` | check that every run has the same checksums; exits with 1 if one differs (implies `--checksums`) |
| `--layers` | add the runs to the cycles-per-layer tables |
| `--comm` | add the runs to the communication-per-link table |
| `--sim <dir>` | read the runs from another `sim/`-like dir and save the tables there |

Examples:

```console
# compare the checksums of every config
~/lmfrnet/bin/python alexnet_log.py --compare testcase_4x4_alexnet_*/alexnet_*_scenario

# cycles per layer of the four configs, printed
~/lmfrnet/bin/python alexnet_log.py --layers --print testcase_4x4_alexnet_{scalar,v64,v128,v256}/alexnet_*_scenario
```

The shell expands the globs, so run from the dir that holds the runs (`sim/`, or the `--sim` dir).

## Output

Everything is saved in `experiments/`:

```
experiments/
├── layer_cycles.csv                         --layers
├── layer_breakdown.csv                      --layers
├── comm.csv                                 --comm
└── <run name>/
    ├── <scenario>.csv                       every row of every task
    └── <scenario>_checksums.csv             --checksums, --compare
```

### `<scenario>.csv`

Every task's rows in one table, with the PE and task id from the log prefix in front. `peer` holds task names instead of ids, and `val` is converted back to signed, since `debug.h` prints it with `%u`.

```
pe,id,task,inf,kind,step,peer,bytes,to,tf,cycles,mul,vmac,value
0x0,25,classifier,1,recv,,j5,36864,62233194,689507035,627273841,29,0,
0x0,25,classifier,1,compute,fc6,,,689507035,847397726,157890691,1,1831936,
```

The table is the cache the other tables are built from. It is rebuilt when a log is newer than it, or with `--rebuild`; otherwise it is read back.

### `<scenario>_checksums.csv`

One row per inference, one column per checksum, in network order:

```
inf,conv1,pool1,conv2,pool2,conv3,conv4,conv5,pool5,fc6,fc7,fc8,class,val
```

A conv-only run has no `fc6`..`val` columns. `--compare` prints `match` or `DIFFER` for each checksum and compares a checksum only among the runs that have it:

```
conv1  match
conv3  DIFFER  inference 1:   4x4_alexnet_scalar 10518399   4x4_alexnet_v128 10518400
```

### `layer_cycles.csv`

Compute cycles of each layer (×10⁶), one column per run:

- `conv1`..`conv5`: the slowest conv PE of the layer plus its join.
- `fc6-8`: the classifier. It is empty for conv-only runs.
- `total`: the whole run, communication and idle time included, from the mapper's "App 1 started" to "App 1 terminated".

### `layer_breakdown.csv`

The same layers, one row per layer and run, split into parts by step:

| part | steps |
|---|---|
| `conv_fc` | `conv`, `psum`, `bias`; `fc6`..`fc8`, `bias6`..`bias8` |
| `relu` | `relu`, `relu6`, `relu7` |
| `maxpool` | `pool` |

Each part, and `total`, also has a speedup over the run's scalar run: the run name with the VLEN replaced by `scalar` (`4x4_alexnet_v128` → `4x4_alexnet_scalar`). If that run is not in the table, the speedups are empty.

### `comm.csv`

One row per link and run. A link groups a layer's conv PEs (`c2_* -> j2`, `j1 -> c2_*`), and the links are in pipeline order. Each send is matched with the receive of the same sender, receiver and inference.

| column | |
|---|---|
| `messages`, `bytes_per_msg`, `total_bytes` | the link's messages and their size |
| `send_cycles_per_msg` | send `tf - to`: how long `memphis_send` blocks the sender |
| `transfer_cycles_per_msg` | recv `tf - max(recv to, send tf)`: the receive without the wait for the sender. Messages between tasks on the same PE (`j4 -> c5_2`) don't cross the NoC and are left out |
| `transfer_bytes_per_cycle` | `bytes_per_msg / transfer_cycles_per_msg` |
| `send_pct_compute` | each sender's send cycles on the link as a % of its compute cycles, averaged over the link's senders |

### Adding runs

`--layers` and `--comm` add the runs to their tables; they don't replace them. The runs already in a table stay, and the table is rebuilt from those runs' saved tables plus the new runs. A run passed again is not repeated. The runs are always in the order scalar, v64, v128, v256. To start over, delete the table (`layer_breakdown.csv` for `--layers`, `comm.csv` for `--comm`).

## Limitations

- `--layers` supports runs with one inference only; it exits otherwise. Every AlexNet applications YAML sets `NUM_INFERENCES: 1`.
- A testcase must have one scenario with a saved table in `experiments/<run name>/`. `--layers` and `--comm` use it to find the runs already in their tables.
