# OSZ: secure region, zones and teardown in Memphis-V

Design record of the OSZ (secure region) implementation on the `osz` branches
of Memphis-V and its submodules (mint, Phivers, Phivers/DMNI,
Phivers/TaskInjector, MAestro, libmemphis).

## 1. Concept

A testcase can reserve a rectangle of PEs, the **region**, for secure
applications. A secure application owns whole **rows** of the region. While it
runs, its rows form a **closed zone**: every link on the zone's edge is blocked
except one, the **entrance**, whose port is an **access point**. All traffic into
or out of the application passes through that port. When the application ends,
its memory is **cleared** on every PE of the zone before the rows are given to
another application.

```
y=4    .     .    | 2,4 |  3,4  [4,4] mapper, MA_INJ (N), APP_INJ (E)
y=3    .     .    | 2,3 |  3,3   4,3
y=2    .     .    | 2,2 |  3,2   4,2
y=1  [0,1  (1,1)]=> 2,1 |  3,1   4,1     row 1: entrance PE 1,1, turn point 2,1
y=0  [0,0   1,0 ]   2,0 |  3,0   4,0     row 0
      region       free    non-secure
                  column
```
Example: 5x5 mesh, `osz_window: [2,2]`, one secure application on rows 0..1.

## 2. Configuration (mint)

| Where | Key | Meaning |
|---|---|---|
| testcase `hw` | `osz_window: [X, Y]` | Region x in `[0, X-1]`, y in `[0, Y-1]`, anchored at PE 0,0. Absent: no region. |
| testcase `hw.parameters` | `OSZ_ATTACK: yes` | Simulation-only attack test (section 9). |
| scenario `apps[]` | `secure: yes` | Per instance: the same application can run secure and non-secure. |

Checks at generation (`mint/src/mint/testcase.py`, `scenario.py`):

* `X <= N_X - 2`: column X stays free and at least one column remains for
  non-secure tasks; `Y <= N_Y`.
* No peripheral inside the region.
* Management tasks and pinned tasks of non-secure applications at `x >= X+1`.
* Pinned tasks of secure applications inside the region, spanning no more rows
  than the application claims.
* Capacity: a secure application needs `ceil(tasks / (X * tasks_per_PE)) <= Y`
  rows; a non-secure one at most the slots at `x >= X+1`.
* A secure application on a testcase without a region: warning, runs as
  non-secure.

Recommended layout: mapper task and both injectors at the top-right PE.

## 3. Platform surface

| Layer | What | Where |
|---|---|---|
| Generated package | `OSZ_WINDOW = 16'hXXYY` (0 = none), `OSZ_ATTACK` | `mint/src/mint/hardware.py` |
| DMNI register `DMNI_OSZ_WINDOW` (0x60, read-only) | region size | `Phivers/DMNI/rtl/NI.sv` |
| DMNI register `DMNI_OSZ_BLOCK` (0x64, kernel-written) | `[3:0]` blocked ports {S,N,W,E}, `[4]` E is the access point, `[5]` source valid, `[31:16]` accepted source (mapper PE) | `Phivers/DMNI/rtl/DMNIPkg.sv`, `NI.sv` |
| Kernel context | `OSZ_X`, `OSZ_Y` | `MAestro/src/syscall.c`, `libmemphis` `memphis_get_osz_window()` |
| NEW_APP | `pad16` bit 0 = secure (`MEMPHIS_NEW_APP_SECURE`) | TaskParser, TaskInjector, mapper |
| Debug register `MMR_DBG_OSZ` (0x70 of the debug area) | `osz_dbg(event, data)`: one store per kernel OSZ event, for the simulation monitor | `MAestro/src/include/osz.h`, `mmr.h` |
| Wrapper status `ev_drop`, `ev_hold`, `ev_accept`, `ev_refuse_*` | plain signals for the simulation monitor; unused by the RTL | `Phivers/rtl/PhiversOszFilter.sv` |

## 4. Mapping (mapper)

`management/mapper_task/src/mapper.c`, `osz.c`.

* **Eligibility**: secure tasks only inside the region; non-secure tasks only at
  `x >= X+1`. Window search and `task_map` skip ineligible PEs.
* **Rows**: a secure application claims the lowest contiguous block of free rows
  that fits all its tasks and covers its pinned rows. Rows are never shared; the
  slots it leaves free in them are reserved idle until it terminates. Without a
  free block it waits (`mapper->pending`).
* **Broadcast**: `OSZ_ROWS {claim, lo, hi}` on claim and release.
* Secure tasks are not migrated.

## 5. Routing: one entrance per application

An application on rows `lo..hi` is entered and left only through the east port of
PE `(X-1, hi)`. Packets use the DMNI source-routing flag (header bit 27): the PE a
flagged flit addresses drops that flit and loops the rest of the packet back into
its router.

| Traffic | Route | Turn |
|---|---|---|
| outside -> secure task `(tx, r)` | down the free column to `(X, hi)`, west along row `hi`, south to `r` | `(X, hi)`, in the free column |
| secure task in row `hi` -> outside | east along row `hi` | none |
| secure task in row `r < hi` -> outside | north in its own column to `hi`, then east | `(tx, hi)`, inside the application |
| inside one application, between non-secure PEs | plain XY | none |

The kernel adds the flit in `dmni_send()` (`MAestro/src/dmni.c`, `osz.c
osz_turn()`), from a per-row entrance table kept up to date by `OSZ_ROWS`. The
application injector adds it to task binaries itself (`TaskInjector.sv`), taking
`hi` as the largest row among the application's task PEs.

## 6. Zone closing

`MAestro/src/osz.c`, `Phivers/rtl/PhiversOszFilter.sv`, `PhiversPE.sv`.

* **Always bounded**: every region row is inside a closed zone at all times. At
  boot each row is its own one-row zone; a claim merges rows `lo..hi` into the
  application's zone; a release splits them back.
* **Mask** of a region PE `(x, y)` in a zone `lo..hi`: E blocked if `x = X-1` and
  `y != hi`, access point if `x = X-1` and `y = hi`; N blocked if `y = hi`; S
  blocked if `y = lo` (never on a mesh edge); W never (x = 0 is the mesh edge).
* **Wrapper**: one filter per direction of each external link. The port mode is
  taken at a packet's header, so a mode change never cuts a packet.
  * OPEN: a wire.
  * BLOCKED: the whole packet is accepted and discarded.
  * ACCESS: the header is held; `TASK_ALLOCATION` passes; `DATA_AV`,
    `MESSAGE_REQUEST`, `MESSAGE_DELIVERY` pass only if flit 1 (the source) is an
    injector or the mapper PE; anything else is dropped. Stand-in for a
    shared-key check.
  * One log line per dropped packet.
* **Release**: `TASK_RELEASE` of a task on a region PE is held until the PE is in
  a claimed zone.
* **Mapper PE**: learned once, from the first `RELEASE_PERIPHERAL` (sent when the
  management application is mapped, before the application injector is
  released). Only it may send `OSZ_ROWS` and `OSZ_ZONE_CLEAR`; it is the access
  point's accepted source.

Because legitimate traffic follows section 5, it never meets a blocked port, and
no packet ever passes through a zone on its way elsewhere.

## 7. Teardown

```
secure task ends (exit, abort)
  kernel: clear what the task leaves, free it
  kernel --BrLite--> OSZ_TASK_DONE (appid<<8 | task)        (exit only)
                     the kernel hosting the mapper forwards it locally
  mapper: when the application has no task left
  mapper --BrLite--> OSZ_ZONE_CLEAR (rows lo..hi)
  every zone PE: remove and clear anything of the application still there,
                 clear the last DMNI send buffers
  zone PE --BrLite--> OSZ_ZONE_CLEARED (rows lo..hi)
  mapper: after one reply per zone PE: release the rows (OSZ_ROWS release)
```

* **Cleared per task** (`MAestro/src/task_control.c`, on region PEs only): the
  whole data page (data, bss, heap, stack, input pipe buffer and `.rodata`), the
  saved registers and PC, an output pipe message not yet handed to the DMNI, the
  message request and data available records, the TCB.
* **Cleared per PE**: the application's location table; kernel buffers handed to
  the DMNI (zeroed before they are freed); kernel messages received.
* **Mapper checks**: `OSZ_TASK_DONE` only from the PE the task was mapped to and
  only for a running task; `OSZ_ZONE_CLEARED` only from a PE of the rows, once
  per PE.
* **Not cleared**: the text page. Instruction memory is written only by the DMNI
  (the CPU data port reaches data memory only), and tasks cannot read it as
  data.
* A broadcast that cannot be sent leaves the application open and its rows
  owned: the safe side.

## 8. Services

| Service | Value | Network | From -> to | Payload |
|---|---|---|---|---|
| `OSZ_ROWS` | 0x84 | BrLite | mapper -> all | `{claim[15], lo[14:8], hi[6:0]}` |
| `OSZ_TASK_DONE` | 0x85 | BrLite | zone kernel -> mapper | `(appid << 8) \| task` |
| `OSZ_ZONE_CLEAR` | 0x86 | BrLite | mapper -> zone PEs | rows `lo..hi` |
| `OSZ_ZONE_CLEARED` | 0x87 | BrLite | zone PE -> mapper | rows `lo..hi` |

Reports reach the mapper task as `memphis_osz_report_t {payload, service,
src_addr}` through the kernel pipe of its PE.

## 9. Verification

`regression/run_osz.sh` builds and simulates every case and checks it with
`regression/osz_check.py`:

* the simulation ends and every application terminates;
* no kernel ERROR/FATAL, no WARNING;
* the number of packets the wrapper dropped;
* placement: every task on its side of the region;
* entrance: every packet hop into or out of a secure application's rows crosses
  the east port of its `(X-1, hi)`; no hop between rows of different
  applications (from the router traffic log);
* residue (`osz_mark` / `osz_probe`).

| Case | Testcase + scenario | Expected |
|---|---|---|
| basic | `tc_osz` + `sc_osz` | 0 drops |
| entrance | `tc_osz` + `sc_osz_entrance` | 0 drops; two-row zone, 4 replies |
| noosz | `tc_noosz` + `sc_osz` | 0 drops; no region |
| attack | `tc_osz_attack` + `sc_osz_entrance` | 4 drops at the planned ports |
| clear | `tc_osz` + `sc_osz_clear` | `PAGE CLEAN` (0/4096 words) |
| dirty | `tc_noosz` + `sc_osz_clear` | `PAGE DIRTY` (4096/4096), the control |
| abort | `tc_osz` + `sc_osz_abort` | teardown after an abort, row reused |
| rows (`--long`) | `tc_osz` + `sc_osz_rows` | rows claimed, waited for, reused |

Results: see section 11.

The attack test (`Phivers/sim/OszAttacker.sv`, enabled by `OSZ_ATTACK`) injects
four packets from unused mesh-edge ports: towards a blocked east port below the
entrance row, a wrong source and a forbidden service at the access point, and
towards a zone's blocked north edge.

### Observing a run

Two simulation-only monitors write `debug/osz_trace.txt`. mint emits
`` `define OSZ_TRACE `` into `PhiversPkg.sv` (it follows `TRAFFIC_DEBUG` unless
the testcase sets `OSZ_TRACE`), and `PhiversTB.sv` attaches them with `bind`
under `` `ifdef OSZ_TRACE ``; no RTL file instantiates them:

* `OszFilterTrace`, in every zone wrapper: `HOLD` and `ACCEPT` at the access
  point, and one `DROP` per dropped packet with its reason (`blocked`,
  `service`, `source`, `single`) and identity (header, source, IDs);
* `OszPeTrace`, in every PE: `BLOCK` on every change of `DMNI_OSZ_BLOCK`, and
  `KERNEL` for each `osz_dbg()` store (`MAPPER`, `TASK_HELD`, `TASK_RELEASED`,
  `TASK_CLEARED`, `TASK_DONE`, `ZONE_CLEAR`, `ZONE_CLEARED`, `BCAST_IGNORED`).

`osz_check.py` counts the drops from the `DROP` lines when the file exists (the
console lines otherwise). `SR_TRACE` adds `debug/sr_trace.txt` (every packet,
hop by hop, from the RX side of each link, before the wrapper). The mapper
prints the cycle in its OSZ lines (waiting, claimed, teardown, cleared,
released). `tools/meshviz` replays all of it:
[MESHVIZ.md](../tools/meshviz/MESHVIZ.md).

## 10. Limitations and open items

* The access point is a stand-in: a spoofed mapper or injector source passes.
  The shared-key check is the next design step; the wrapper's hold-then-decide
  slot is where it goes. Packets leaving a zone are not checked.
* The text page is not cleared; a DMNI zero-fill mode would be needed.
* BrLite carries no keys. Kernels accept zone changes only from the mapper PE,
  but any kernel could forge a teardown report; the mapper checks the sender's
  PE.
* No timeout on a lost teardown report: the application stays open.
* A local abort is still reported with `TASK_ABORTED` over Hermes.
* Only the mapper reaches secure tasks through the access point; other
  management tasks (monitors, QoS) are refused.
* The mapper holds one waiting application, which blocks the ones behind it.
* Tested only on a 5x5 mesh with `osz_window: [2,2]`; a zone PE that is on no
  edge (needs a 3x3 zone) and the held-release path were not exercised. mint
  reads peripheral coordinates as single digits.

## 11. Results

`regression/run_osz.sh -j 4`, 5x5 mesh, `osz_window: [2,2]`, mapper and
injectors at PE 4,4, with the simulation monitors on (`SR_TRACE`,
`OSZ_TRACE`; the kernel's `osz_dbg()` stores and the mapper's cycle in its
OSZ lines are in these builds). All cases pass; in every case all applications
terminate, with no kernel ERROR/FATAL and no WARNING. `tools/meshviz` opens
every case and finds the same drops as `osz_check.py`.

| Case | Simulated | Dropped | Entrance hops checked | Other |
|---|---|---|---|---|
| basic | 16.930 ms | 0 | 714 | |
| entrance | 38.254 ms | 0 | 1142 | two-row zone: 4 `OSZ_ZONE_CLEARED` before release |
| noosz | 14.911 ms | 0 | n/a | no region |
| attack | 38.284 ms | 4 | 1154 | same mapping and checks as `entrance`; the two runs already differ at the first packet (cycle 7, the mapper binary), a million cycles before the first attack packet, so the 0.03 ms is not caused by the attack |
| clear | 15.208 ms | 0 | 533 | probe and psink: `RESIDUE 0/4096`, `PAGE CLEAN` |
| dirty | 9.599 ms | 0 | n/a | probe and psink: `RESIDUE 4096/4096`, `PAGE DIRTY` |
| abort | 23.246 ms | 0 | 675 | aborted application torn down, its row reused by app 2 |
| rows | 160.683 ms | 0 | 2729 | earlier run (`--long`, before the monitors): rows claimed, waited for and reused; one zone torn down while another runs |

Every kernel learned the mapper as PE 4,4 from `RELEASE_PERIPHERAL`.

Attack drops (`attack`):

| Packet | Dropped at | Why |
|---|---|---|
| east edge of 4,0 -> 0,0 | PE 1,0 RX E | blocked port (below the entrance row) |
| east edge of 4,1 -> 0,1, source 4,1 | PE 1,1 RX E | refused at the access point (source) |
| east edge of 4,1 -> 1,1, service 0x50 | PE 1,1 RX E | refused at the access point (service) |
| north edge of 0,4 -> 0,1 | PE 0,1 RX N | blocked port (zone's top edge) |

Cost: secure applications end later than without clearing (e.g. `entrance`
33.5 ms before the teardown, 38.1 ms after), mostly from clearing a 64 KiB data
page per task with word stores; the zone clear handshake itself takes about
40-70k cycles from order to last reply. Packing a secure application's tasks two
per PE in its rows can also lengthen it (synthetic: 95 ms packed against 64 ms
spread, with or without OSZ).
