# MESHVIZ — Developer Guide

For whoever changes `meshviz.py` or the simulator files it reads. The user manual is [MESHVIZ.md](MESHVIZ.md).

## 1. Overview

MESHVIZ (`tools/meshviz/meshviz.py`) is a single-file Python/tkinter program that replays a finished Memphis-V
simulation: packets as worms with their source-routing turns, and the OSZ secure zones (region, zones, walls, access
point, drops, teardown). It only reads files the simulation wrote; it never changes them.

### Where everything lives (under `Memphis-V/`)

| Path | Role |
| --- | --- |
| `tools/meshviz/meshviz.py` | The tool: one file, standard library only |
| `tools/meshviz/MESHVIZ.md` | User manual: screen, OSZ layer, controls, decisions, limits |
| `tools/meshviz/MESHVIZ_DEV_GUIDE.md` | This guide |
| `tools/meshviz/viz_shot.sh` | Headless screenshot: Xvfb, meshviz, PNG |
| `tools/meshviz/xwd2png.py` | Xvfb framebuffer dump → PNG (no external modules) |
| `tools/meshviz/meshviz_shots/` | Screenshots used by MESHVIZ.md |
| `Phivers/sim/SRTrace.sv` | Monitor: every packet on a link, with its source-routing headers → `debug/sr_trace.txt` |
| `Phivers/sim/OszFilterTrace.sv` | Monitor: one zone wrapper's holds, accepts and drops → `debug/osz_trace.txt` |
| `Phivers/sim/OszPeTrace.sv` | Monitor: one PE's `DMNI_OSZ_BLOCK` and the kernel's OSZ events → `debug/osz_trace.txt` |
| `Phivers/sim/PhiversTB.sv` | Attaches the three monitors with `bind`, under `` `ifdef SR_TRACE `` / `` `ifdef OSZ_TRACE `` |
| `Phivers/sim/TrafficRouter.sv` | Writes `debug/traffic_router.txt`; skips leading source-routing headers |
| `Phivers/rtl/PhiversOszFilter.sv` | The zone wrapper; exposes `ev_*` status signals for `OszFilterTrace` |
| `mint/src/mint/hardware.py`, `simulation.py` | Write the `SR_TRACE` / `OSZ_TRACE` macros; truncate the trace files before a run |
| `MAestro/src/include/osz.h`, `mmr.h` | `osz_dbg()` and `MMR_DBG_OSZ`: the kernel's OSZ events |
| `management/mapper_task/src/mapper.c` | The mapper's OSZ log lines (with their cycle) |
| `regression/run_osz.sh`, `osz_check.py` | The OSZ regression; its runs are viewable scenarios |

### Running it

```sh
cd /sim/renato.sayyed/sandbox/STABLE/Memphis-V
python3 tools/meshviz/meshviz.py <testcase>/<scenario> [--journey N] [--time C] [--speed S] [--play]
```

Python 3 with tkinter and an X display. Options are listed in MESHVIZ.md. `viz_shot.sh <out.png> <seconds>
<meshviz args>` takes a screenshot without a display (Xvfb on `${VIZ_DISPLAY:-:79}`, 1600x1000); it works in
`tools/meshviz/.tmp` unless `TMPDIR` is set, never in `/tmp`.

## 2. Architecture

Data flows one way: the simulator writes text files, `Scenario` parses them once into plain Python objects, and
`App` turns the current cycle `T` into a picture every frame.

```
 Simulation writes                  Scenario parses once                App draws
 ┌──────────────────────────┐       ┌───────────────────────────┐       ┌──────────────────────────┐
 │ SRTrace.sv               │──────>│ _journeys()               │──┐    │ _rebuild()               │
 │ debug/sr_trace.txt       │       │ Journey + Hop (worms)     │  │    │ resize/Open: MeshView,   │
 └──────────────────────────┘       └───────────────────────────┘  │    │ paths, packet + OSZ      │
 ┌──────────────────────────┐       ┌───────────────────────────┐  │    │ events                   │
 │ OszFilterTrace.sv        │──────>│ _osz_trace()              │──┤    └────────────┬─────────────┘
 │ OszPeTrace.sv            │       │ blocks, drops, access,    │  │                 v
 │ debug/osz_trace.txt      │       │ kernel events             │  │    ╔══════════════════════════╗
 └──────────────────────────┘       └───────────────────────────┘  │    ║ redraw()  (every frame)  ║
 ┌──────────────────────────┐       ┌───────────────────────────┐  │    ║ lanes, OSZ state, fx,    ║
 │ TrafficRouter.sv         │──────>│ _traffic()                │──┼───>║ OSZ fx, worms, clock     ║
 │ traffic_router.txt       │       └───────────────────────────┘  │    ╚════════════╤═════════════╝
 └──────────────────────────┘       ┌───────────────────────────┐  │                 v
 ┌──────────────────────────┐       │ _platform, _services,     │  │    ┌──────────────────────────┐
 │ mint: cfg files,         │──────>│ _fallbacks, _periphs,     │──┤    │ Panels: list, hop detail,│
 │ PhiversPkg.sv            │       │ _osz (region, attackers)  │  │    │ Events box, timeline     │
 └──────────────────────────┘       └───────────────────────────┘  │    └──────────────────────────┘
 ┌──────────────────────────┐       ┌───────────────────────────┐  │
 │ kernel + mapper logs     │──────>│ _placement, _mapper_log   │──┤
 │ log/log<x>x<y>.txt       │       │ (zones), _match_drops     │──┘
 └──────────────────────────┘       └───────────────────────────┘
```

Both `_rebuild()` and `set_time()` end in `redraw()`, the only per-frame drawing path.

### Control flow

1. **Startup**: `main()` → `Scenario(path)` parses every file → `App` builds the widgets → `_rebuild()` → optional
   `select()` / `set_time()` / `toggle()` from the CLI → `_tick()` starts the loop.
2. **Every 1/fps s**: `_tick()` advances `T` by `speed / fps`, applies idle skip (waiting for packet and OSZ
   effects) and the Replay-packet stop, and calls `set_time()`, which calls `redraw()`.
3. **`redraw()`**: deletes tag `dyn`, recolours lanes, draws busy lanes, the selected path, then `_draw_osz(T)` (zones,
   walls, gates, labels, drop marks), `_draw_effects(T)`, `_draw_osz_effects(T)`, the worms and the clock, then the
   timeline, Events box, status bar and current-hop highlight.
4. **Resize or Open…**: `_rebuild()` makes a new `MeshView`, recomputes every journey path and lane, redraws the
   static mesh (region background first) and rebuilds both event lists.
5. **Selection**: `select()` fills the hop detail, rebuilds events, fits the timeline and jumps to just before the
   packet starts.

## 3. Module reference

`meshviz.py` has four layers, top to bottom: **Look** (constants), **Data** (`Hop`, `Journey`, `Drop`, `Zone`,
`Scenario`), **View** (`MeshView`) and **App** (the tkinter window), plus `main()`. Data never imports from View or
App, so the parser runs headless: `python3 -c "import meshviz; meshviz.Scenario(path)"`.

### 3.1 Look: constants

| Name | Role |
| --- | --- |
| `BG`, `PANEL`, `ROUTER`, `ROUTER_EDGE`, `CORE`, `LANE`, `TEXT`, `DIM`, `FAINT` | Dark theme (`#rrggbb` only: `blend()` parses them) |
| `GOLD` turns, `GATE` exit/entry, `SELECT` selection | Packet marks |
| `SERVICE_COLORS` | 0x40 DATA_AV, 0x41 MESSAGE_REQUEST, 0x42 TASK_ALLOCATION, 0x43 MESSAGE_DELIVERY, 0x44 MONITOR, 0x50 MIGRATION_TEXT (the attacker's refused service); others `OTHER_COLOR` |
| `HEAT` | Link-load ramp |
| `FX_START`, `FX_PASS`, `FX_GATE`, `FX_LOOP_TAIL`, `FX_ARRIVE`, `FX_RESET`, `FX_MAX` | Packet effect durations, **wall-clock seconds** |
| `REGION_FILL`, `FREECOL_FILL`, `WALL`, `ACCESS`, `ACCESS_OK`, `CLEARING`, `BCAST`, `ZONE_COLORS` | OSZ colours; a zone takes `ZONE_COLORS[app % 8]` |
| `FX_DROP`, `FX_ACCESS`, `FX_CLEAR`, `FX_BCAST`, `FX_WALL`, `FX_ZONE`, `OSZ_FX_MAX` | OSZ effect durations, wall-clock seconds |
| `BLOCK_BIT` | Port → bit of `DMNI_OSZ_BLOCK` (`E` 0, `W` 1, `N` 2, `S` 3) |
| `PORT_NAME`, `FROM`, `OPPOSITE`, `HERMES_PORT`, `SR_FLAG` | Port helpers; `SR_FLAG` (bit 27) for reference |

### 3.2 Data layer

**`Hop`**: one `sr_trace.txt` line: `t`, `x`, `y`, `port` (`E W N S L`), `dir` (`IN` router input, `DMNI` router to
DMNI), `nsr` (source-routing headers still in front), `sr0` (first flit), `flits`.

**`Journey`**: one packet from injection to delivery, drop or peripheral, possibly through several turns.

| Member | Meaning |
| --- | --- |
| `id` | Index in `Scenario.journeys`; list row id and `--journey` number |
| `hdr`, `src`, `ids` | Header / source / IDs after the source-routing headers: the identity key |
| `svc`, `hops`, `times`, `points` | Service; hops in time order; head trajectory (filled by `App._rebuild`) |
| `finalize()` | `start`, `end`, `flits`, `nsr0`, `origin`, `dest`, `waypoints` (turn PEs), `headers`, `to_periph`, `delivered`, `entry`, `exit` |
| `dropped` | The `Drop` that ended it, or None (set by `_match_drops`, which also extends `end` to the drop) |

**`Drop`**: one `DROP` line: `t`, `x`, `y`, `port`, `dir`, `reason` (`blocked`, `service`, `source`, `single`), `hdr`,
`src`, `ids`, `flits`, `journey`; `describe()` gives the text used on screen.

**`Zone`**: rows `lo..hi` of application `app`, from `t0` (claim) to `t1` (release, `inf` if never), `entrance`,
`clear_t` / `clear_n` (teardown start and number of PEs to confirm).

**`Scenario(path)`** loads every input once, in this order; a missing file is skipped (`OSError` → defaults).

| Method | Reads | Produces |
| --- | --- | --- |
| `_platform()` | `debug/platform.cfg` | `mx`, `my`; `tasks` and `apps` {id: name} |
| `_services()` | `debug/services.cfg` | `services` {code: name} (hex codes) |
| `_fallbacks()` | `../Phivers/sim/PhiversPkg.sv` (`N_PE_X/Y`), `../libmemphis/src/include/memphis/services.h` | mesh size and service names when the cfg files are missing (`--skipdebug`) |
| `_placement()` | `log/log<x>x<y>.txt`: `Task id N allocated` | `placement` {(x,y): [names]} |
| `_periphs()` | `PhiversPkg.sv`: `ADDR_*`, `PORT_*` | `periphs` [(name, x, y, port)] |
| `_osz()` | `PhiversPkg.sv`: `OSZ_WINDOW`, `OSZ_ATTACK` | `osz` (X, Y) or None; `osz_attack`; adds `ATTACK 1..3` to `periphs` at the places of `PhiversMC.sv` |
| `_journeys()` | `debug/sr_trace.txt` | `journeys` (§5.3) |
| `_traffic()` | `debug/traffic_router.txt` | `traffic` [(t0, t1, x, y, port, svc, flits)] sorted; BrLite lines skipped |
| `_osz_trace()` | `debug/osz_trace.txt` | `blocks` {(x,y): ([t], [value])}, `drops`, `access` [(t, "hold"/"accept", x, y, port, hdr, src)], `kernel` [(t, x, y, event, data)] |
| `_mapper_log()` | every PE log, the mapper's `App ...` lines (§5.1) | `secure_apps`, `zones`, `mapper` [(t, kind, data)] with kinds `wait claim zone_clear cleared release end` |
| `_match_drops()` | `journeys`, `drops` | `Journey.dropped`, `Drop.journey` (§5.3) |
| `block_at(x, y, T)`, `zones_at(T)`, `in_region(x, y)` | | OSZ state at a time |
| `periph_at`, `svc_name`, `task_name`, `app_name` | | display names |

After loading, `t_end` is the last moment anything happens and `event_times` the sorted set of every hop, traffic
start and OSZ event time (used by `<<`/`>>` and idle skip).

### 3.3 View layer: `MeshView(sc, w, h)`

Pure geometry, recomputed on every resize. Mesh y grows upwards, screen y downwards.

| Method | Returns |
| --- | --- |
| `center`, `core`, `entry`, `exit`, `outside`, `in_mesh` | Router centre, DMNI square, lane end points, peripheral box position, bounds |
| `cells(x0, y0, x1, y1, pad)` | Screen rectangle over a block of cells (region, zones, free column) |
| `path(j)` | (time, point) list of the head; a journey dropped on a TX side ends at that port |
| `at(times, points, t)`, `worm(times, points, head_t, length)` | Head position, body polyline (1 flit = 1 cycle) |

### 3.4 App layer: `App(root, sc, args)`

State: `T`, `playing`, `speed`, `fps`, `sel`, `view0/view1`, `follow_end`, `layers` (`worms traffic heat labels skip
fx focus zones`), `only_sr`, `only_drops`; OSZ: `oev` / `oev_times` (OSZ events), `mapper_pe`, `waits`, `helds`.

| Area | Methods |
| --- | --- |
| Widgets | `_style`, `_layout`, `_bind_keys` |
| Static drawing | `_rebuild`, `_prepare_traffic`, `_draw_static` (region background, free column, row labels, legend), `_round_rect` |
| Packet drawing | `redraw`, `active_journeys`, `_gate_marks`, `_outward`, `_draw_worm` (red cross for a dropped head) |
| Packet effects | `_build_events`, `_draw_effects`, `_draw_ticker`, `_cyc`, `_fx_reset_items`, `_paint_router`, `_paint_place`, `_place_xy`, `_ring`, `_label` |
| OSZ | `_build_osz_events` (events, waits, held tasks, mapper PE), `_draw_osz` (state at T), `_draw_osz_effects` (events near T), `_osz_ticker` (Events box lines), `_draw_gate`, `_wall_line`, `_port_mark`, `_port_label`, `_ripple`, `_mask_text`, `_zone_color`, `_draw_osz_timeline`, `_tl_height` |
| Timeline | `tx`, `tt`, `draw_timeline`, `_tl_click`, `_tl_zoom`, `_tl_pan_start`, `_tl_pan`, `fit_time` |
| List and details | `_fill_list` (end column, drops-only), `_tree_selected`, `select`, `_fill_detail` (apps, `DROPPED:` line), `_detail_now`, `step_journey`, `replay_selected` |
| Time control | `set_time`, `step_event`, `toggle`, `_speed_changed`, `_speed_mult`, `_goto`, `_tick`, `_traffic_active` |
| Misc | `_status`, `_canvas_click`, `open_dialog`, `load` |

### 3.5 Helper scripts

| Script | Interface | Notes |
| --- | --- | --- |
| `viz_shot.sh` | `<out.png> <seconds> <meshviz args…>` | Xvfb `${VIZ_DISPLAY:-:79}` 1600x1000x24, framebuffer in `$TMPDIR/viz_fb`, forces `--geometry 1600x1000+0+0`; prints the end of the meshviz log, so a traceback shows |
| `xwd2png.py` | `<Xvfb_screen0> <out.png> [x y w h]` | XWD → PNG with `struct` + `zlib`; 32 bpp only |

## 4. The simulator side

### 4.1 Monitors: simulation only

The RTL instantiates no monitor. mint writes the macros into the generated `PhiversPkg.sv`
(`hardware.py`: `SR_TRACE` and `OSZ_TRACE`, each following `TRAFFIC_DEBUG` unless set in the testcase's
`hw: parameters:`), and `PhiversTB.sv` binds:

| Under | Bind | Taps | Writes |
| --- | --- | --- | --- |
| `` `ifdef SR_TRACE `` | `SRTrace` into every `PhiversOszFilter`, `ENABLE = (DIR == "RX")` | the RX side of each mesh link, **before** the wrapper (`rx_i`, `eop_i`, `credit_o`, `data_i`) | `IN` lines for ports E W N S |
| | `SRTrace sr_trace_in` into every `PhiversPE` | the DMNI → router local link | `IN` lines for port L (injections) |
| | `SRTrace sr_trace_dmni` into every `PhiversPE` | the router → DMNI local link | `DMNI` lines (deliveries, turns) |
| `` `ifdef OSZ_TRACE `` | `OszFilterTrace` into every `PhiversOszFilter` | the wrapper's `ev_*` signals and held `header` | `HOLD`, `ACCEPT`, `DROP` lines; a console line per drop |
| | `OszPeTrace` into every `PhiversPE` | `osz_block`, `mtime`, the CPU's writes to the debug area | `BLOCK`, `KERNEL` lines |

Each monitor opens, appends to and closes its file per line (the `TrafficRouter` scheme), so all instances share one
file. mint truncates `sr_trace.txt` and `osz_trace.txt` before each run (`simulation.py`).

The wrapper's status signals (`PhiversOszFilter.sv`), one cycle each:

| Signal | When |
| --- | --- |
| `ev_drop` | a header is dropped at once (`ev_drop_blocked` if the port is blocked; otherwise a service the access point does not accept) |
| `ev_hold` | the access point takes a header into its hold register |
| `ev_accept` | the access point lets a packet in (after the source check, or a TASK_ALLOCATION passed straight) |
| `ev_refuse_src` | the held packet's flit 1 is not an accepted source |
| `ev_refuse_single` | the held packet was a single flit |

### 4.2 Kernel OSZ events

`osz_dbg(event, data)` (`MAestro/src/include/osz.h`) stores `{event[31:24], data[23:0]}` to `MMR_DBG_OSZ`
(`0xF0000070`, in the debug area the kernel already writes its log to). `OszPeTrace` names them:

| Code | Name | `data` | Emitted in |
| --- | --- | --- | --- |
| 1 | `MAPPER` | mapper PE `x<<8 | y` | `osz.c`, first `RELEASE_PERIPHERAL` latched |
| 2 | `TASK_HELD` | task id | `rpc.c`, `TASK_RELEASE` held until the zone is claimed |
| 3 | `TASK_RELEASED` | task id | `osz.c`, a held task released |
| 4 | `TASK_CLEARED` | task id | `task_control.c`, a secure task's memory cleared on removal |
| 5 | `TASK_DONE` | task id | `osz.c`, `OSZ_TASK_DONE` broadcast sent |
| 6 | `ZONE_CLEAR` | payload (`lo<<8 | hi`) | `osz.c`, `OSZ_ZONE_CLEAR` handled |
| 7 | `ZONE_CLEARED` | payload | `osz.c`, `OSZ_ZONE_CLEARED` broadcast sent |
| 8 | `BCAST_IGNORED` | `service<<16 | source` | `osz.c`, a zone broadcast not from the mapper |

## 5. What must not change (invariants)

The tool breaks silently: a parser that skips a malformed line just draws less. Every rule below is a contract
between two pieces of code; change both sides together and re-run §6.3.

### 5.1 Input file formats

**`debug/sr_trace.txt`** (`SRTrace.sv` → `_journeys`):

```
<cycle> <x> <y> <port> <dir> nsr=<n> sr0=<8 hex> hdr=<8 hex> src=<8 hex> ids=<8 hex> flits=<n>
1000001 4 0 E IN nsr=0 sr0=00430100 hdr=00430100 src=00000400 ids=01020103 flits=9
```

Five positional fields, then `key=value`; new keys may be **appended**. `hdr/src/ids` are the flits after the
source-routing headers, the same before and after every turn. `cycle` is the first flit's tick.

**`debug/osz_trace.txt`** (`OszFilterTrace.sv`, `OszPeTrace.sv` → `_osz_trace`):

```
<cycle> <x> <y> BLOCK  block=<8 hex>
<cycle> <x> <y> HOLD   port=<E|W|N|S> dir=<RX|TX> hdr=<8 hex>
<cycle> <x> <y> ACCEPT port=<P> dir=<D> hdr=<8 hex> src=<8 hex|->
<cycle> <x> <y> DROP   port=<P> dir=<D> reason=<blocked|service|source|single> hdr=<8 hex> src=<8 hex> ids=<8 hex> flits=<n>
<cycle> <x> <y> KERNEL ev=<name> data=<6 hex>
```

`DROP` is written at the packet's end with the header's cycle, and carries the same identity key as
`sr_trace.txt`. `src=-` on an `ACCEPT` is a packet that passed without a source check (a task binary).

**`DMNI_OSZ_BLOCK`** (the `block=` value): `[3:0]` blocked {S,N,W,E}, `[4]` access point on E, `[5]` source valid,
`[31:16]` accepted source (the mapper PE).

**`debug/traffic_router.txt`** (also read by the JAR; never change it for MESHVIZ): tab-separated
`<tick> <router x<<8|y dec> <service hex> <size> <bw> <port*2 (+1 BrLite)> <target> ...`; ports `EWNSL`.

**Mapper log lines** (`mapper.c` → `_mapper_log`), any PE log, each ending with the cycle:

```
App N is secure at T                         App N waiting for k free region row(s) at T
App N claimed region row(s) lo..hi at T      App N entrance at PE x,y
App N: OSZ_ZONE_CLEAR for rows lo..hi at T, awaiting n PE(s)
App N: PE x,y cleared (k/n) at T             App N released region row(s) lo..hi at T
App N terminated at time T
```

**`debug/platform.cfg`**: `mpsoc_x`, `mpsoc_y`, `BEGIN/END_task_name_relation`, `BEGIN/END_app_name_relation`
(`<name> <id>`). **`debug/services.cfg`**: `<NAME> <hex>`. **`log/log<x>x<y>.txt`**: `Task id <N> allocated`.
**`<testcase>/Phivers/sim/PhiversPkg.sv`**: `ADDR_<NAME> = 16'hXXYY`, `PORT_<NAME> = HERMES_<SIDE>`,
`OSZ_WINDOW = 16'hXXYY`, `OSZ_ATTACK = 0|1`, `N_PE_X`, `N_PE_Y`.

**Folder layout** (mint's): `<testcase>/<scenario>/{debug,log}`, `<testcase>/Phivers/sim/PhiversPkg.sv`,
`<testcase>/libmemphis/...`.

### 5.2 Header bit layout

| Bits of `hdr` | Meaning |
| --- | --- |
| 31 | to a peripheral (`Journey.to_periph`) |
| 30–29 | peripheral port, index into `"EWNS"` |
| 27 | `SR_FLAG`: a source-routing header (only in `sr0`; counted into `nsr`) |
| 23–16 | service |
| 15–8 / 7–0 | target x / y |

`ids` = sender task (high 16 bits), receiver task (low 16 bits); 0xFFFF = kernel. A task id is `app << 8 | index`.

### 5.3 Packet reconstruction and drop matching

`_journeys`: lines with the same (hdr, src, ids) form one stream. A line continues the open journey of its key,
except (1) after a DMNI delivery with `nsr == 0`, or (2) on an `IN` line of port `L` that is not the re-injection at
the PE whose DMNI just took the packet with headers (a turn): then a new journey starts. Changing this renumbers every
packet (`--journey N`, `#id`, the docs).

`_match_drops`: a drop ends the journey with its key whose last hop is at the dropping PE (on the same port for an RX
drop) and not after the drop; the latest such journey wins.

### 5.4 Internal contracts

| Contract | Where | If violated |
| --- | --- | --- |
| `Journey.id == index in Scenario.journeys` | `_journeys`, `_tree_selected`, `--journey` | wrong packet selected |
| `Hop.port` ∈ `E W N S L`, `Hop.dir` ∈ `IN DMNI` | everywhere | `KeyError` |
| Traffic tuples sorted by `t0` | `_traffic`, `redraw` | missing lanes |
| Packet event tuple `(time, kind, journey, data)`; OSZ event tuple `(time, kind, data)` with kinds `drop hold accept wall k_<kernel event> m_<mapper kind>` | `_build_events`, `_build_osz_events`, the draw and ticker loops | unpacking errors in the frame loop |
| `events`, `oev` and their time lists sorted | builders | bisect windows wrong |
| `blocks[(x,y)]` time lists sorted | `_osz_trace` | `block_at` wrong |
| `MeshView.path` times strictly increasing | `path` | `at()` interpolates wrong |
| `entry()` / `exit()` lane offsets paired | `MeshView` | worms off their lanes |
| Canvas tag `dyn` on everything drawn per frame | `redraw` and helpers | items pile up every frame |
| Static items recoloured by effects go through `_paint_router` / `_fx_dirty` | effects | routers stay coloured |
| All time changes go through `set_time()` | controls, `_tick` | panels out of sync |
| Effects (packet and OSZ) are a pure function of `T` | `_draw_effects`, `_draw_osz`, `_draw_osz_effects` | stepping shows something else than playing |

### 5.5 Environment

- **Standard library only** (no Qt, PIL, matplotlib on these machines).
- **Must work over `ssh -X`**: keep the redraw cost bounded (about 19 ms per frame on the attack scenario).
- **Never write to `/tmp`**: the shared root disk fills up. `viz_shot.sh` uses `tools/meshviz/.tmp`; put simulation
  runs on `/sim`.
- **Read-only** on the scenario.
- **Monitors stay out of the RTL**: anything new for the tool is a `bind` under an `` `ifdef `` in `PhiversTB.sv`; the
  RTL may only expose plain signals for it.

### 5.6 Safe to change

Colours, `FX_*` durations, fonts, sizes, label wording, default speed/fps/geometry, the Events box length (7), legend
text, keyboard shortcuts (keep MESHVIZ.md in sync).

## 6. Working on the tool

### 6.1 Recipes

| To… | Change | Watch out for |
| --- | --- | --- |
| Show a new kernel OSZ event | 1) new `OSZ_DBG_*` code in `osz.h`, `osz_dbg()` call in the kernel; 2) its name in `OszPeTrace.kernel_event()`; 3) a `k_<name>` branch in `_draw_osz_effects` and `_osz_ticker` | Rebuild the testcase: mint copies the sources |
| Read a new mapper line | print it with `at %u` and `memphis_get_tick()`; add a pattern to `_mapper_log` | The pattern list stops at the first match per line |
| Log a new wrapper decision | a plain `ev_*` signal in `PhiversOszFilter.sv` (lint-off unused), a port and a line in `OszFilterTrace.sv`, the connection in the `bind` | Never instantiate a monitor in the RTL |
| Show a new field of `SRTrace` | append `key=value` at the end of its `$fwrite`; read it with `d.get()` in `_journeys` | Old traces must still load |
| Add a packet or OSZ effect | append the event in `_build_events` / `_build_osz_events`; a branch in the draw loop with `f = 1 - age / self._cyc(FX_NEW)`, skip when `f <= 0`; include `FX_NEW` in `FX_MAX` / `OSZ_FX_MAX` | Recolour static items only through `_paint_router` |
| Add a layer | key in `layers`, `(key, text)` in the toolbar loop, test it in `redraw`; optional CLI flag | |
| Add a list column | `cols`, `widths` in `_layout`; `values=` in `_fill_list` | Row id stays `str(j.id)` |

### 6.2 Hard-coded assumptions

- "ms" under the cycle counter is `T / 1e5` (10 ns clock).
- Attacker positions are copied from `PhiversMC.sv`; move them there, move them in `Scenario._osz`.
- The access point is always on the east port of PE (X-1, top row of the zone).
- The mapper PE for the broadcast rings is the one in the first `KERNEL ev=MAPPER` line, else the top-right PE.
- Body length assumes one flit per cycle.

### 6.3 Checks before you hand over a change

1. **Parser check, no display** — drops and placement must agree with `osz_check.py`:

   ```sh
   cd /sim/renato.sayyed/sandbox/STABLE/Memphis-V/tools/meshviz
   python3 -I -c "
   import sys; sys.path.insert(0, '.'); import meshviz
   sc = meshviz.Scenario(sys.argv[1])
   print(len(sc.journeys), 'packets,', len(sc.drops), 'drops,', sum(1 for j in sc.journeys if j.dropped), 'matched')
   print([(z.app, z.lo, z.hi, z.t0, z.t1) for z in sc.zones])
   for d in sc.drops: print(d.describe(), '<-', d.journey.origin_name if d.journey else None)
   " ../../../osz_runs/attack/tc_osz_attack/sc_osz_entrance
   ```

   Expected: 4 drops, all matched, from `ATTACK 1`, `ATTACK 2` (twice) and `ATTACK 3`; one zone, app 1, rows 0..1.
2. **Screenshot check** — `./viz_shot.sh $PWD/.tmp/check.png 6 <scenario> --journey N --time C`; the script prints the
   end of the meshviz log, so a traceback shows.
3. **Interactive check** over `ssh -X`: play, `<<`/`>>`, drag the timeline, Replay packet, every checkbox, drops only,
   Open… another scenario, resize.
4. After a simulator change: `regression/run_osz.sh` (all cases PASS), and a build with `SR_TRACE: no`,
   `OSZ_TRACE: no` (Verilator `-Wall` must stay clean both ways).

### 6.4 Keep the docs in sync

MESHVIZ.md (screen, OSZ layer, controls, decisions) and the screenshots for anything visible; this guide when a
contract in §5 changes; `docs/osz_design.md` when an OSZ event or log line changes.

## 7. Origin

Ported on 2026-11-03 from `/sim/renato.sayyed/sandbox/SOURCE_ROUTING/sr_test/tools` (waypoint source routing with an
SR peripheral). Changes in the port:

- `SRTrace` is bound from `PhiversTB` (it was instantiated in `PhiversPE`), sits before the zone wrapper, logs every
  packet (it filtered by service) and keeps its own cycle counter; the SR peripheral, `SR_PERIPH_EN` and services
  0x60/0x61 are gone.
- `TrafficRouter.sv` keeps the SOURCE_ROUTING patch that skips leading source-routing headers.
- New: `OszFilterTrace`, `OszPeTrace`, the wrapper's status signals, `MMR_DBG_OSZ`, the mapper's cycle in its OSZ
  lines, and the whole OSZ layer of the tool.
- Wording: a "waypoint" / "loopback" is now a **turn** (`T1`, `T2`); the code keeps `Journey.waypoints` as the name of
  the list of turn PEs.
