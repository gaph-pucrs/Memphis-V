#!/usr/bin/env python3
"""
meshviz: interactive replay of a Memphis-V simulation's NoC traffic, focused on source routing.

    python3 meshviz.py <scenario dir> [--time CYCLE] [--journey N] [--speed CYC_PER_S] [--play]
    e.g. python3 meshviz.py regression/tc_osz_attack/sc_osz_entrance --journey 30

Needs only the Python standard library (tkinter). Runs over ssh -X. Design decisions and the meaning of every
element on screen: MESHVIZ.md, next to this file.

Data read from the scenario folder (all written by the simulation; nothing is changed):
  debug/sr_trace.txt       every packet, hop by hop, with its source-routing headers (worms)   [SR_TRACE]
  debug/osz_trace.txt      OSZ zones: port blocking, access point, drops, kernel clearing events  [OSZ_TRACE]
  debug/traffic_router.txt every packet on every router input port: background traffic and link load
  debug/platform.cfg       mesh size, task and application names
  debug/services.cfg       service names
  log/log<x>x<y>.txt       which task was allocated on which PE; the mapper's OSZ lines (rows, teardown)
  ../Phivers/sim/PhiversPkg.sv   peripheral positions (injectors, OSZ attackers), the OSZ region
"""

import argparse
import bisect
import glob
import math
import os
import re
import sys
import tkinter as tk
from tkinter import filedialog, ttk

# ----------------------------------------------------------------------------------------------------------
# Look
# ----------------------------------------------------------------------------------------------------------

BG = "#0e1117"
PANEL = "#151a23"
ROUTER = "#1b2130"
ROUTER_EDGE = "#3b4458"
CORE = "#252d3f"
LANE = "#262c3a"
TEXT = "#dfe4ee"
DIM = "#8a93a6"
FAINT = "#4a5366"
GOLD = "#ffd54f"           # waypoint headers, loopbacks
GATE = "#ff5c8a"           # gate entry / exit marks
SELECT = "#ffffff"

SERVICE_COLORS = {
    0x40: "#4fc3f7",   # DATA_AV
    0x41: "#ffb74d",   # MESSAGE_REQUEST
    0x42: "#78909c",   # TASK_ALLOCATION
    0x43: "#81c784",   # MESSAGE_DELIVERY
    0x44: "#f06292",   # MONITOR
    0x50: "#ba68c8",   # MIGRATION_TEXT (the OSZ attacker's refused service)
}
OTHER_COLOR = "#9fa8b8"
HEAT = ["#262c3a", "#26425f", "#245b80", "#21779c", "#2a93a8", "#5aac9b", "#9cc27a", "#d9cf5b", "#f4b544", "#f4813a"]

# Event effects: how long each one lasts on screen, in SECONDS of wall-clock time (converted to cycles with the
# current replay speed, so a flash stays visible whatever the speed)
FX_START = 0.9          # origin flash + expanding ring
FX_PASS = 0.45          # flick of each router the head enters
FX_GATE = 0.9           # pulse on the exit / entry port
FX_LOOP_TAIL = 0.8      # gold burst after a loopback re-injection
FX_ARRIVE = 1.3         # arrival flash; the destination then stays lit until the next communication starts
FX_RESET = 0.6          # fade-out of a lit destination when the next communication starts
FX_MAX = max(FX_START, FX_PASS, FX_GATE, FX_LOOP_TAIL, FX_ARRIVE)

# OSZ secure region
REGION_FILL = "#141c26"     # region background
FREECOL_FILL = "#191621"    # free column right of the region
WALL = "#ef5350"            # blocked port
ACCESS = "#ffca28"          # access point (entrance), closed
ACCESS_OK = "#66bb6a"       # access point letting a packet in
CLEARING = "#80deea"        # memory clearing
BCAST = "#b39ddb"           # BrLite broadcast ripple
ZONE_COLORS = ["#4dd0e1", "#ce93d8", "#ffb74d", "#aed581", "#f48fb1", "#9fa8da", "#80cbc4", "#ffab91"]
FX_DROP = 1.6           # red burst where a packet is dropped
FX_ACCESS = 1.0         # access point hold / open / refuse
FX_CLEAR = 1.2          # clearing wipe on a PE
FX_BCAST = 1.0          # broadcast ripple
FX_WALL = 0.8           # a wall rising or falling when a port is blocked or opened
FX_ZONE = 1.2           # zone claimed / released
OSZ_FX_MAX = max(FX_DROP, FX_ACCESS, FX_CLEAR, FX_BCAST, FX_WALL, FX_ZONE)
# DMNI_OSZ_BLOCK bits: blocked ports {S,N,W,E}[3:0], access point on E [4], source valid [5], source [31:16]
BLOCK_BIT = {"E": 0, "W": 1, "N": 2, "S": 3}


def blend(a, b, f):
    """Colour between a (f=0) and b (f=1)."""
    f = 0.0 if f < 0 else (1.0 if f > 1 else f)
    a, b = a.lstrip("#"), b.lstrip("#")
    ca = [int(a[i:i + 2], 16) for i in (0, 2, 4)]
    cb = [int(b[i:i + 2], 16) for i in (0, 2, 4)]
    return "#" + "".join("{:02x}".format(int(x + (y - x) * f)) for x, y in zip(ca, cb))


PORT_NAME = {"E": "EAST", "W": "WEST", "N": "NORTH", "S": "SOUTH", "L": "LOCAL"}
# A packet entering router (x,y) through port P comes from the neighbour on that side
FROM = {"E": (1, 0), "W": (-1, 0), "N": (0, 1), "S": (0, -1)}
OPPOSITE = {"E": "W", "W": "E", "N": "S", "S": "N"}
HERMES_PORT = {"HERMES_EAST": "E", "HERMES_WEST": "W", "HERMES_NORTH": "N", "HERMES_SOUTH": "S"}
SR_FLAG = 1 << 27

# ----------------------------------------------------------------------------------------------------------
# Data
# ----------------------------------------------------------------------------------------------------------


class Hop:
    __slots__ = ("t", "x", "y", "port", "dir", "nsr", "sr0", "flits")

    def __init__(self, t, x, y, port, d, nsr, sr0, flits):
        self.t, self.x, self.y, self.port, self.dir, self.nsr, self.sr0, self.flits = t, x, y, port, d, nsr, sr0, flits


class Journey:
    """One packet from injection to delivery, rebuilt from sr_trace.txt (see MESSAGE in MESHVIZ.md)."""

    def __init__(self, jid, hdr, src, ids):
        self.id, self.hdr, self.src, self.ids = jid, hdr, src, ids
        self.svc = (hdr >> 16) & 0xFF
        self.hops = []
        self.points = []          # (time, (x, y) screen coords), filled by the view
        self.times = []
        self.dropped = None       # Drop, when an OSZ zone wrapper dropped the packet

    def finalize(self):
        h0 = self.hops[0]
        self.start = h0.t
        self.flits = h0.flits
        self.nsr0 = h0.nsr
        self.origin = (h0.x, h0.y)
        self.waypoints = [(h.x, h.y) for h in self.hops if h.dir == "DMNI" and h.nsr > 0]
        self.headers = sorted({h.sr0 for h in self.hops if h.nsr > 0}, key=lambda s: [hh.t for hh in self.hops if hh.sr0 == s][0])
        last = self.hops[-1]
        self.dest = (last.x, last.y)
        self.to_periph = bool(self.hdr & 0x80000000)
        self.delivered = last.dir == "DMNI" and last.nsr == 0
        self.end = last.t
        # entry into the destination router: last IN hop on a mesh port before the end
        self.entry = None
        ins = [h for h in self.hops if h.dir == "IN" and h.port != "L" and (h.x, h.y) == self.dest]
        if ins:
            self.entry = PORT_NAME[ins[-1].port]
        # exit from the origin: the side of the first router entered after leaving it
        self.exit = None
        for h in self.hops[1:]:
            if h.dir == "IN" and h.port != "L":
                dx, dy = FROM[h.port]
                if (h.x + dx, h.y + dy) == self.origin:
                    self.exit = PORT_NAME[OPPOSITE[h.port]]
                break


def parse_kv(tokens):
    return dict(t.split("=", 1) for t in tokens if "=" in t)


class Drop:
    """A packet dropped by an OSZ zone wrapper (debug/osz_trace.txt DROP line)."""
    __slots__ = ("t", "x", "y", "port", "dir", "reason", "hdr", "src", "ids", "flits", "journey")

    def __init__(self, t, x, y, port, d, reason, hdr, src, ids, flits):
        self.t, self.x, self.y, self.port, self.dir, self.reason = t, x, y, port, d, reason
        self.hdr, self.src, self.ids, self.flits = hdr, src, ids, flits
        self.journey = None

    def describe(self):
        if self.reason == "blocked":
            return "blocked port {} of {}x{}".format(PORT_NAME[self.port], self.x, self.y)
        why = {"source": "source {:x}x{:x} not accepted".format((self.src >> 8) & 0xFF, self.src & 0xFF),
               "service": "service 0x{:02x} not accepted".format((self.hdr >> 16) & 0xFF),
               "single": "single-flit packet"}.get(self.reason, self.reason)
        return "refused at access point {}x{}: {}".format(self.x, self.y, why)


class Zone:
    """Rows lo..hi claimed by one secure application, from the mapper log."""
    __slots__ = ("app", "lo", "hi", "t0", "t1", "entrance", "clear_t", "clear_n")

    def __init__(self, app, lo, hi, t0):
        self.app, self.lo, self.hi, self.t0, self.t1 = app, lo, hi, t0, float("inf")
        self.entrance, self.clear_t, self.clear_n = None, None, 0


class Scenario:
    def __init__(self, path):
        self.path = os.path.abspath(path.rstrip("/"))
        self.name = os.path.basename(self.path)
        self.mx, self.my = 4, 4
        self.tasks = {}            # id -> name
        self.services = {}         # code -> name
        self.placement = {}        # (x, y) -> [task names]
        self.periphs = []          # (name, x, y, port)
        self.journeys = []
        self.traffic = []          # (t0, t1, x, y, port, svc, flits) from traffic_router.txt
        self.apps = {}             # app id -> instance name
        # OSZ secure region
        self.osz = None            # (X, Y) region size, None without a region
        self.osz_attack = False
        self.blocks = {}           # (x, y) -> ([t], [DMNI_OSZ_BLOCK value]) over time
        self.drops = []            # Drop, by time
        self.access = []           # (t, "hold"|"accept", x, y, port, hdr, src)
        self.kernel = []           # (t, x, y, event, data) kernel OSZ events
        self.secure_apps = set()
        self.zones = []            # Zone, by claim time
        self.mapper = []           # (t, kind, data) mapper OSZ events: wait, claim, zone_clear, cleared, release, end
        self._platform()
        self._services()
        self._fallbacks()
        self._placement()
        self._periphs()
        self._osz()
        self._journeys()
        self._traffic()
        self._osz_trace()
        self._mapper_log()
        self._match_drops()
        osz_times = [d.t for d in self.drops] + [a[0] for a in self.access] + [k[0] for k in self.kernel] + \
                    [m[0] for m in self.mapper] + [t for ts, _v in self.blocks.values() for t in ts]
        ends = [j.end + j.flits for j in self.journeys] + [t[1] for t in self.traffic] + osz_times + [1]
        self.t_end = max(ends)
        self.event_times = sorted({h.t for j in self.journeys for h in j.hops} | {t[0] for t in self.traffic} |
                                  set(osz_times))

    def svc_name(self, code):
        return self.services.get(code, "0x{:02x}".format(code))

    def task_name(self, tid):
        if tid == 0xFFFF:
            return "kernel"
        return self.tasks.get(tid, str(tid))

    def _file(self, *p):
        return os.path.join(self.path, *p)

    def _platform(self):
        try:
            inside = False
            for line in open(self._file("debug", "platform.cfg")):
                t = line.split()
                if not t:
                    continue
                if t[0] == "mpsoc_x":
                    self.mx = int(t[1])
                elif t[0] == "mpsoc_y":
                    self.my = int(t[1])
                elif t[0] == "BEGIN_task_name_relation":
                    inside = "task"
                elif t[0] == "BEGIN_app_name_relation":
                    inside = "app"
                elif t[0] in ("END_task_name_relation", "END_app_name_relation"):
                    inside = False
                elif inside == "task" and len(t) == 2:
                    self.tasks[int(t[1])] = t[0]
                elif inside == "app" and len(t) == 2:
                    self.apps[int(t[1])] = t[0]
        except OSError:
            pass

    def _services(self):
        try:
            for line in open(self._file("debug", "services.cfg")):
                t = line.split()
                if len(t) == 2:
                    self.services[int(t[1], 16)] = t[0]
        except OSError:
            pass

    def _fallbacks(self):
        """Mesh size and service names without debug/platform.cfg and services.cfg (scenarios run with
        mint --skipdebug): from the testcase's generated PhiversPkg.sv and its copy of libmemphis services.h."""
        tc = os.path.dirname(self.path)
        if not os.path.exists(self._file("debug", "platform.cfg")):
            try:
                text = open(os.path.join(tc, "Phivers", "sim", "PhiversPkg.sv")).read()
                mx = re.search(r"\bN_PE_X\s*=\s*(\d+)", text)
                my = re.search(r"\bN_PE_Y\s*=\s*(\d+)", text)
                if mx and my:
                    self.mx, self.my = int(mx.group(1)), int(my.group(1))
            except OSError:
                pass
        if not self.services:
            try:
                for line in open(os.path.join(tc, "libmemphis", "src", "include", "memphis", "services.h")):
                    m = re.match(r"#define\s+(\w+)\s+0x([0-9a-fA-F]+)", line)
                    if m:
                        self.services[int(m.group(2), 16)] = m.group(1)
            except OSError:
                pass

    def _placement(self):
        for f in glob.glob(self._file("log", "log*x*.txt")):
            m = re.search(r"log(\d+)x(\d+)\.txt$", f)
            if not m:
                continue
            pe = (int(m.group(1)), int(m.group(2)))
            for line in open(f, errors="replace"):
                a = re.match(r"Task id (\d+) allocated", line)
                if a:
                    name = self.task_name(int(a.group(1)))
                    self.placement.setdefault(pe, [])
                    if name not in self.placement[pe]:
                        self.placement[pe].append(name)

    def _periphs(self):
        pkg = os.path.join(os.path.dirname(self.path), "Phivers", "sim", "PhiversPkg.sv")
        try:
            text = open(pkg).read()
        except OSError:
            return
        for m in re.finditer(r"ADDR_(\w+)\s*=\s*16'h([0-9a-fA-F]{4})", text):
            name = m.group(1)
            p = re.search(r"PORT_{}\s*=\s*(HERMES_\w+)".format(name), text)
            if not p or p.group(1) not in HERMES_PORT:
                continue
            a = int(m.group(2), 16)
            self.periphs.append((name, a >> 8, a & 0xFF, HERMES_PORT[p.group(1)]))

    def _journeys(self):
        """Rebuilds packet journeys from sr_trace.txt.

        Lines with the same (hdr, src, ids) are the same packet stream. A journey continues while the next line
        is a hop of the same packet: a router input on a mesh port, a delivery to a DMNI, or the re-injection
        from LOCAL of a packet the same PE's DMNI just received with waypoint headers (a loopback). It ends at a
        delivery with no header left; an injection from LOCAL anywhere else starts a new journey.
        """
        try:
            lines = open(self._file("debug", "sr_trace.txt")).read().split("\n")
        except OSError:
            return
        events = []
        for line in lines:
            t = line.split()
            if len(t) < 6:
                continue
            d = parse_kv(t[5:])
            try:
                h = Hop(int(t[0]), int(t[1]), int(t[2]), t[3], t[4], int(d["nsr"]), int(d["sr0"], 16), int(d["flits"]))
                key = (int(d["hdr"], 16), int(d["src"], 16), int(d["ids"], 16))
            except (KeyError, ValueError):
                continue
            events.append((h.t, key, h))
        events.sort(key=lambda e: e[0])
        open_j = {}
        for _, key, h in events:
            j = open_j.get(key)
            new = j is None
            if j is not None:
                last = j.hops[-1]
                if last.dir == "DMNI" and last.nsr == 0:
                    new = True                                  # previous journey delivered
                elif h.dir == "IN" and h.port == "L":
                    looped = last.dir == "DMNI" and last.nsr > 0 and (last.x, last.y) == (h.x, h.y)
                    new = not looped
            if new:
                j = Journey(len(self.journeys), *key)
                self.journeys.append(j)
                open_j[key] = j
            j.hops.append(h)
        for j in self.journeys:
            j.finalize()
            j.origin_name = "{}x{}".format(*j.origin)
            j.dest_name = "{}x{}".format(*j.dest)
            h0 = j.hops[0]
            if h0.dir == "IN" and h0.port != "L":
                dx, dy = FROM[h0.port]
                if not (0 <= h0.x + dx < self.mx and 0 <= h0.y + dy < self.my):
                    j.origin_name = self.periph_at(h0.x, h0.y, h0.port)
                    j.exit = None
            if j.to_periph:
                j.dest_name = self.periph_at(j.hdr >> 8 & 0xFF, j.hdr & 0xFF, "EWNS"[(j.hdr >> 29) & 3])

    def periph_at(self, x, y, port):
        for name, px, py, pp in self.periphs:
            if (px, py, pp) == (x, y, port):
                return name
        return "periph {}x{}{}".format(x, y, port)

    # ---------------------------------------------------------------- OSZ secure region
    def _osz(self):
        """Region size and the simulation-only attackers, from the generated PhiversPkg.sv."""
        pkg = os.path.join(os.path.dirname(self.path), "Phivers", "sim", "PhiversPkg.sv")
        try:
            text = open(pkg).read()
        except OSError:
            return
        m = re.search(r"OSZ_WINDOW\s*=\s*16'h([0-9a-fA-F]{4})", text)
        if m and int(m.group(1), 16):
            v = int(m.group(1), 16)
            self.osz = (v >> 8, v & 0xFF)
        a = re.search(r"OSZ_ATTACK\s*=\s*(\d)", text)
        self.osz_attack = bool(a and a.group(1) == "1" and self.osz)
        if self.osz_attack:
            # Same places as Phivers/rtl/PhiversMC.sv
            X, Y = self.osz
            self.periphs.append(("ATTACK 1", self.mx - 1, 0, "E"))
            if Y > 1:
                self.periphs.append(("ATTACK 2", self.mx - 1, Y - 1, "E"))
            if Y < self.my:
                self.periphs.append(("ATTACK 3", 0, self.my - 1, "N"))

    def in_region(self, x, y):
        return self.osz is not None and x < self.osz[0] and y < self.osz[1]

    def block_at(self, x, y, T):
        """DMNI_OSZ_BLOCK of PE (x,y) at time T (0 before its first write)."""
        ts, vs = self.blocks.get((x, y), ([], []))
        i = bisect.bisect_right(ts, T)
        return vs[i - 1] if i else 0

    def _osz_trace(self):
        try:
            lines = open(self._file("debug", "osz_trace.txt")).read().split("\n")
        except OSError:
            return
        blocks = []
        for line in lines:
            t = line.split()
            if len(t) < 4:
                continue
            try:
                tick, x, y, ev = int(t[0]), int(t[1]), int(t[2]), t[3]
                d = parse_kv(t[4:])
                if ev == "BLOCK":
                    blocks.append((tick, x, y, int(d["block"], 16)))
                elif ev == "DROP":
                    self.drops.append(Drop(tick, x, y, d["port"], d["dir"], d["reason"], int(d["hdr"], 16),
                                           int(d["src"], 16), int(d["ids"], 16), int(d["flits"])))
                elif ev in ("HOLD", "ACCEPT"):
                    src = d.get("src", "-")
                    self.access.append((tick, ev.lower(), x, y, d["port"], int(d["hdr"], 16),
                                        None if src == "-" else int(src, 16)))
                elif ev == "KERNEL":
                    self.kernel.append((tick, x, y, d["ev"], int(d["data"], 16)))
            except (KeyError, ValueError):
                continue
        for tick, x, y, v in sorted(blocks):
            ts, vs = self.blocks.setdefault((x, y), ([], []))
            ts.append(tick)
            vs.append(v)
        self.drops.sort(key=lambda d: d.t)
        self.access.sort(key=lambda a: a[0])
        self.kernel.sort(key=lambda k: k[0])

    def _mapper_log(self):
        """The mapper's OSZ lines (MAestro mapper_task, all with the cycle at the end)."""
        pats = (
            (r"App (\d+) is secure at (\d+)", "secure"),
            (r"App (\d+) waiting for (\d+) free region row\(s\) at (\d+)", "wait"),
            (r"App (\d+) claimed region row\(s\) (\d+)\.\.(\d+) at (\d+)", "claim"),
            (r"App (\d+) entrance at PE (\d+),(\d+)", "entrance"),
            (r"App (\d+): OSZ_ZONE_CLEAR for rows (\d+)\.\.(\d+) at (\d+), awaiting (\d+)", "zone_clear"),
            (r"App (\d+): PE (\d+),(\d+) cleared \((\d+)/(\d+)\) at (\d+)", "cleared"),
            (r"App (\d+) released region row\(s\) (\d+)\.\.(\d+) at (\d+)", "release"),
            (r"App (\d+) terminated at time (\d+)", "end"),
        )
        open_zone = {}
        for f in glob.glob(self._file("log", "log*x*.txt")):
            for line in open(f, errors="replace"):
                if "App " not in line:
                    continue
                for pat, kind in pats:
                    m = re.search(pat, line)
                    if not m:
                        continue
                    g = [int(v) for v in m.groups()]
                    app = g[0]
                    if kind == "secure":
                        self.secure_apps.add(app)
                    elif kind == "wait":
                        self.mapper.append((g[2], "wait", (app, g[1])))
                    elif kind == "claim":
                        z = Zone(app, g[1], g[2], g[3])
                        self.zones.append(z)
                        open_zone[app] = z
                        self.mapper.append((g[3], "claim", z))
                    elif kind == "entrance" and app in open_zone:
                        open_zone[app].entrance = (g[1], g[2])
                    elif kind == "zone_clear" and app in open_zone:
                        open_zone[app].clear_t, open_zone[app].clear_n = g[3], g[4]
                        self.mapper.append((g[3], "zone_clear", open_zone[app]))
                    elif kind == "cleared" and app in open_zone:
                        self.mapper.append((g[5], "cleared", (open_zone[app], g[1], g[2], g[3], g[4])))
                    elif kind == "release" and app in open_zone:
                        open_zone[app].t1 = g[3]
                        self.mapper.append((g[3], "release", open_zone.pop(app)))
                    elif kind == "end":
                        self.mapper.append((g[1], "end", app))
                    break
        self.zones.sort(key=lambda z: z.t0)
        self.mapper.sort(key=lambda m: m[0])

    def zones_at(self, T):
        return [z for z in self.zones if z.t0 <= T < z.t1]

    def app_name(self, app):
        return self.apps.get(app, "")

    def _match_drops(self):
        """Ends each dropped packet's journey at the wrapper that dropped it (same identity key)."""
        by_key = {}
        for j in self.journeys:
            by_key.setdefault((j.hdr, j.src, j.ids), []).append(j)
        for d in self.drops:
            best = None
            for j in by_key.get((d.hdr, d.src, d.ids), []):
                if getattr(j, "dropped", None) is not None or not j.hops or j.hops[-1].t > d.t:
                    continue
                last = j.hops[-1]
                at_port = (last.x, last.y) == (d.x, d.y) and (d.dir == "TX" or last.port == d.port)
                if at_port and (best is None or last.t > best.hops[-1].t):
                    best = j
            if best is not None:
                best.dropped = d
                best.end = max(best.end, d.t)
                d.journey = best

    def _traffic(self):
        try:
            f = open(self._file("debug", "traffic_router.txt"))
        except OSError:
            return
        for line in f:
            t = line.split()
            if len(t) < 7:
                continue
            try:
                tick, router, svc, size, port2 = int(t[0]), int(t[1]), int(t[2], 16), int(t[3]), int(t[5])
            except ValueError:
                continue
            if port2 % 2:                       # BrLite (broadcast) traffic: not drawn
                continue
            port = "EWNSL"[port2 // 2] if port2 // 2 < 5 else "L"
            flits = size + 1
            self.traffic.append((tick, tick + flits, router >> 8, router & 0xFF, port, svc, flits))
        self.traffic.sort()


# ----------------------------------------------------------------------------------------------------------
# View
# ----------------------------------------------------------------------------------------------------------


def lerp(a, b, f):
    return (a[0] + (b[0] - a[0]) * f, a[1] + (b[1] - a[1]) * f)


class MeshView:
    """Geometry of the mesh on the canvas (y grows upwards in the mesh, downwards on screen)."""

    def __init__(self, sc, w, h):
        self.sc = sc
        self.margin = 78
        self.cell = max(40, min((w - 2 * self.margin) / sc.mx, (h - 2 * self.margin) / sc.my))
        self.box = self.cell * 0.46
        self.lane = self.box * 0.17
        self.ox = (w - self.cell * sc.mx) / 2
        self.oy = (h - self.cell * sc.my) / 2

    def center(self, x, y):
        return (self.ox + (x + 0.5) * self.cell, self.oy + (self.sc.my - y - 0.5) * self.cell)

    def core(self, x, y):
        cx, cy = self.center(x, y)
        return (cx - self.box * 0.24, cy + self.box * 0.24)

    def entry(self, x, y, port):
        """Point where a packet entering router (x,y) through port arrives (on its travel lane)."""
        cx, cy = self.center(x, y)
        b, d = self.box / 2, self.lane
        return {"W": (cx - b, cy - d), "E": (cx + b, cy + d), "S": (cx + d, cy + b), "N": (cx - d, cy - b)}[port]

    def exit(self, x, y, toward):
        """Point where a packet leaves router (x,y) through its port `toward` (E/W/N/S)."""
        cx, cy = self.center(x, y)
        b, d = self.box / 2, self.lane
        return {"E": (cx + b, cy - d), "W": (cx - b, cy + d), "N": (cx + d, cy - b), "S": (cx - d, cy + b)}[toward]

    def outside(self, x, y, port):
        """A point beyond the router's port, where a boundary peripheral sits."""
        cx, cy = self.center(x, y)
        r = self.cell * 0.52
        return {"E": (cx + r, cy), "W": (cx - r, cy), "N": (cx, cy - r), "S": (cx, cy + r)}[port]

    def in_mesh(self, x, y):
        return 0 <= x < self.sc.mx and 0 <= y < self.sc.my

    def cells(self, x0, y0, x1, y1, pad=0):
        """Screen rectangle covering cells x0..x1, y0..y1 (inclusive), grown by pad."""
        ax, ay = self.center(x0, y1)
        bx, by = self.center(x1, y0)
        h = self.cell / 2
        return (ax - h - pad, ay - h - pad, bx + h + pad, by + h + pad)

    def path(self, j):
        """(time, point) waypoints of a journey's head, so its position at any time can be interpolated."""
        pts = []
        hops = j.hops
        for i, h in enumerate(hops):
            nxt = hops[i + 1] if i + 1 < len(hops) else None
            gap = (nxt.t - h.t) if nxt else 2
            if h.dir == "DMNI":
                if not pts:
                    pts.append((h.t - 1, self.center(h.x, h.y)))
                pts.append((h.t, self.core(h.x, h.y)))
                continue
            if h.port == "L":
                if not pts or pts[-1][1] != self.core(h.x, h.y):
                    pts.append((h.t - (1 if not pts else 0), self.core(h.x, h.y)))
                else:
                    pts.append((h.t, self.core(h.x, h.y)))     # waits in the DMNI during the loopback
            else:
                dx, dy = FROM[h.port]
                px, py = h.x + dx, h.y + dy
                if not pts:
                    start = self.outside(h.x, h.y, h.port) if not self.in_mesh(px, py) else self.exit(px, py, OPPOSITE[h.port])
                    pts.append((h.t - 2, start))
                pts.append((h.t, self.entry(h.x, h.y, h.port)))
            # inside the router: along the lane if it goes straight on, else through the corner where the lanes cross
            if nxt is not None and nxt.dir == "IN" and nxt.port != "L":
                out = OPPOSITE[nxt.port]
                ex = self.exit(h.x, h.y, out)
                if h.port in "EWNS" and h.port != out and OPPOSITE[h.port] != out:
                    en = pts[-1][1]
                    corner = (ex[0], en[1]) if h.port in "EW" else (en[0], ex[1])
                    pts.append((h.t + 0.3 * gap, corner))
                elif h.port == "L":
                    pts.append((h.t + 0.3 * gap, self.center(h.x, h.y)))
                pts.append((h.t + 0.6 * gap, ex))
            elif nxt is not None and nxt.dir == "DMNI":
                pts.append((h.t + 0.4 * gap, self.center(h.x, h.y)))
            elif nxt is None and j.dropped is not None and j.dropped.dir == "TX":
                # dropped while leaving through a blocked port: up to that port
                d = j.dropped
                pts.append((max(h.t + 0.6, d.t - 0.6), self.center(h.x, h.y)))
                pts.append((max(h.t + 1.2, d.t), self.exit(d.x, d.y, d.port)))
            elif nxt is None and j.to_periph and j.dropped is None:
                port = "EWNS"[(j.hdr >> 29) & 3]
                pts.append((h.t + 0.6, self.center(h.x, h.y)))
                pts.append((h.t + 1.2, self.exit(h.x, h.y, port)))
                pts.append((h.t + 2.4, self.outside(h.x, h.y, port)))
        # strictly increasing times
        fixed = []
        for t, p in pts:
            if fixed and t <= fixed[-1][0]:
                t = fixed[-1][0] + 0.01
            fixed.append((t, p))
        return fixed

    @staticmethod
    def at(times, points, t):
        if t <= times[0]:
            return points[0]
        if t >= times[-1]:
            return points[-1]
        i = bisect.bisect_right(times, t)
        t0, t1 = times[i - 1], times[i]
        return lerp(points[i - 1], points[i], (t - t0) / (t1 - t0))

    def worm(self, times, points, head_t, length):
        """Polyline of the packet body: from (head_t - length) to head_t, clipped to the path."""
        a, b = max(times[0], head_t - length), min(times[-1], head_t)
        if b < a:
            return []
        out = [self.at(times, points, a)]
        i0, i1 = bisect.bisect_right(times, a), bisect.bisect_left(times, b)
        out.extend(points[i0:i1])
        out.append(self.at(times, points, b))
        return out


class App:
    def __init__(self, root, sc, args):
        self.root = root
        self.sc = sc
        self.T = 0.0
        self.playing = False
        self.speed = args.speed
        self.fps = max(1.0, getattr(args, "fps", 30.0))
        self.sel = None
        self.view0, self.view1 = 0.0, float(sc.t_end)
        self.follow_end = None
        self.layers = {k: tk.BooleanVar(value=v) for k, v in
                       (("worms", True), ("traffic", True), ("heat", False), ("labels", True), ("skip", True),
                        ("fx", True), ("focus", False), ("zones", True))}
        self.layers["zones"].set(not getattr(args, "no_zones", False))
        self.only_drops = tk.BooleanVar(value=False)
        self.layers["heat"].set(args.heat)
        self.layers["traffic"].set(not args.no_traffic)
        self.layers["focus"].set(getattr(args, "focus", False))
        self.layers["fx"].set(not getattr(args, "no_fx", False))
        self.only_sr = tk.BooleanVar(value=False)
        root.title("meshviz - {}".format(sc.path))
        root.configure(bg=BG)
        self._style()
        self._layout()
        self._bind_keys()
        self.root.update_idletasks()
        self._rebuild()
        if args.journey is not None and 0 <= args.journey < len(sc.journeys):
            self.select(sc.journeys[args.journey])
        if args.time is not None:
            self.set_time(args.time)
        if args.play:
            self.toggle()
        self._tick()

    # ------------------------------------------------------------------ widgets
    def _style(self):
        s = ttk.Style()
        try:
            s.theme_use("clam")
        except tk.TclError:
            pass
        s.configure(".", background=PANEL, foreground=TEXT, fieldbackground=PANEL, bordercolor=FAINT)
        s.configure("TButton", padding=(8, 3))
        s.map("TButton", background=[("active", "#263046")])
        s.configure("TCheckbutton", background=PANEL, foreground=TEXT)
        s.map("TCheckbutton", background=[("active", PANEL)])
        s.configure("Treeview", background=BG, fieldbackground=BG, foreground=TEXT, rowheight=20, font=("Helvetica", 9))
        s.configure("Treeview.Heading", background=PANEL, foreground=DIM, font=("Helvetica", 9, "bold"))
        s.map("Treeview", background=[("selected", "#2c3a57")])
        s.configure("Horizontal.TScale", background=PANEL)

    def _layout(self):
        top = tk.Frame(self.root, bg=PANEL)
        top.pack(side="top", fill="x")
        ttk.Button(top, text="Open...", command=self.open_dialog).pack(side="left", padx=(8, 12), pady=6)
        ttk.Button(top, text="|<", width=3, command=lambda: self.set_time(0)).pack(side="left")
        ttk.Button(top, text="<<", width=3, command=lambda: self.step_event(-1)).pack(side="left", padx=2)
        self.play_btn = ttk.Button(top, text="Play", width=6, command=self.toggle)
        self.play_btn.pack(side="left", padx=2)
        ttk.Button(top, text=">>", width=3, command=lambda: self.step_event(1)).pack(side="left", padx=2)
        ttk.Button(top, text=">|", width=3, command=lambda: self.set_time(self.sc.t_end)).pack(side="left")
        tk.Label(top, text="  speed", bg=PANEL, fg=DIM).pack(side="left")
        self.speed_var = tk.DoubleVar(value=math.log10(self.speed))
        ttk.Scale(top, from_=0, to=6, variable=self.speed_var, length=150, command=self._speed_changed).pack(side="left", padx=4)
        self.speed_lbl = tk.Label(top, text="", bg=PANEL, fg=TEXT, width=14, anchor="w")
        self.speed_lbl.pack(side="left")
        self._speed_changed()
        tk.Label(top, text="go to cycle", bg=PANEL, fg=DIM).pack(side="left", padx=(8, 2))
        self.goto = ttk.Entry(top, width=10)
        self.goto.pack(side="left")
        self.goto.bind("<Return>", lambda e: self._goto())
        for key, text in (("worms", "packets"), ("fx", "effects"), ("focus", "focus conversation"), ("zones", "OSZ zones"),
                          ("traffic", "all traffic"), ("heat", "link load"), ("labels", "labels"), ("skip", "skip idle")):
            ttk.Checkbutton(top, text=text, variable=self.layers[key], command=self._options_changed).pack(side="left", padx=4)

        body = tk.PanedWindow(self.root, orient="horizontal", bg=BG, sashwidth=4, bd=0)
        body.pack(side="top", fill="both", expand=True)
        left = tk.Frame(body, bg=BG)
        self.canvas = tk.Canvas(left, bg=BG, highlightthickness=0, width=900, height=680)
        self.canvas.pack(side="top", fill="both", expand=True)
        self.timeline = tk.Canvas(left, bg=PANEL, highlightthickness=0, height=self._tl_height())
        self.timeline.pack(side="bottom", fill="x")
        body.add(left, stretch="always")

        right = tk.Frame(body, bg=PANEL, width=420)
        body.add(right)
        hdr = tk.Frame(right, bg=PANEL)
        hdr.pack(side="top", fill="x", padx=6, pady=(6, 2))
        tk.Label(hdr, text="Packets (from sr_trace.txt)", bg=PANEL, fg=TEXT, font=("Helvetica", 10, "bold")).pack(side="left")
        ttk.Checkbutton(hdr, text="drops only", variable=self.only_drops, command=self._fill_list).pack(side="right")
        ttk.Checkbutton(hdr, text="with turns only", variable=self.only_sr, command=self._fill_list).pack(side="right")
        cols = ("id", "start", "service", "from", "to", "turns", "exit", "entry", "end", "flits")
        self.tree = ttk.Treeview(right, columns=cols, show="headings", height=14, selectmode="browse")
        widths = (34, 62, 130, 76, 76, 58, 34, 38, 44, 36)
        for c, w in zip(cols, widths):
            self.tree.heading(c, text=c)
            self.tree.column(c, width=w, anchor="w", stretch=(c == "service"))
        self.tree.pack(side="top", fill="both", expand=True, padx=6)
        self.tree.bind("<<TreeviewSelect>>", self._tree_selected)
        btns = tk.Frame(right, bg=PANEL)
        btns.pack(side="top", fill="x", padx=6, pady=4)
        ttk.Button(btns, text="Replay packet", command=self.replay_selected).pack(side="left")
        ttk.Button(btns, text="Prev", command=lambda: self.step_journey(-1)).pack(side="left", padx=4)
        ttk.Button(btns, text="Next", command=lambda: self.step_journey(1)).pack(side="left")
        ttk.Button(btns, text="Clear", command=lambda: self.select(None)).pack(side="left", padx=4)
        ttk.Button(btns, text="Fit time", command=self.fit_time).pack(side="right")
        tk.Label(right, text="Events (newest last)", bg=PANEL, fg=DIM).pack(side="top", anchor="w", padx=6)
        self.events_box = tk.Text(right, bg=BG, fg=TEXT, height=7, width=58, font=("Courier", 9), bd=0, wrap="none")
        self.events_box.pack(side="top", fill="x", padx=6, pady=(2, 6))
        self._events_shown = None
        tk.Label(right, text="Selected packet, hop by hop (click a line to go there)", bg=PANEL, fg=DIM).pack(side="top", anchor="w", padx=6)
        self.detail = tk.Text(right, bg=BG, fg=TEXT, height=16, width=58, font=("Courier", 9), bd=0,
                              insertbackground=TEXT, wrap="none")
        self.detail.pack(side="top", fill="both", expand=True, padx=6, pady=(2, 6))
        self.detail.tag_configure("gate", foreground=GATE)
        self.detail.tag_configure("loop", foreground=GOLD)
        self.detail.tag_configure("drop", foreground=WALL)
        self.detail.tag_configure("now", background="#2c3a57")
        self.status = tk.Label(self.root, text="", bg=PANEL, fg=DIM, anchor="w")
        self.status.pack(side="bottom", fill="x")

        self.canvas.bind("<Configure>", lambda e: self._rebuild())
        self.canvas.bind("<Button-1>", self._canvas_click)
        self.timeline.bind("<Configure>", lambda e: self.draw_timeline())
        self.timeline.bind("<Button-1>", self._tl_click)
        self.timeline.bind("<B1-Motion>", self._tl_click)
        self.timeline.bind("<Button-4>", lambda e: self._tl_zoom(e, 0.8))
        self.timeline.bind("<Button-5>", lambda e: self._tl_zoom(e, 1.25))
        self.timeline.bind("<MouseWheel>", lambda e: self._tl_zoom(e, 0.8 if e.delta > 0 else 1.25))
        self.timeline.bind("<Button-3>", self._tl_pan_start)
        self.timeline.bind("<B3-Motion>", self._tl_pan)
        self._fill_list()

    def _bind_keys(self):
        r = self.root
        r.bind("<space>", lambda e: self.toggle())
        r.bind("<Right>", lambda e: self.step_event(1))
        r.bind("<Left>", lambda e: self.step_event(-1))
        r.bind("<Shift-Right>", lambda e: self.set_time(self.T + 100))
        r.bind("<Shift-Left>", lambda e: self.set_time(self.T - 100))
        r.bind("<Up>", lambda e: self._speed_mult(2))
        r.bind("<Down>", lambda e: self._speed_mult(0.5))
        r.bind("n", lambda e: self.step_journey(1))
        r.bind("p", lambda e: self.step_journey(-1))
        r.bind("f", lambda e: self.fit_time())
        r.bind("r", lambda e: self.replay_selected())
        r.bind("<Home>", lambda e: self.set_time(0))
        r.bind("<End>", lambda e: self.set_time(self.sc.t_end))

    # ------------------------------------------------------------------ static drawing
    def _rebuild(self):
        w, h = max(self.canvas.winfo_width(), 300), max(self.canvas.winfo_height(), 300)
        self.mv = MeshView(self.sc, w, h)
        for j in self.sc.journeys:
            pts = self.mv.path(j)
            j.times = [p[0] for p in pts]
            j.points = [p[1] for p in pts]
        self._prepare_traffic()
        self.canvas.delete("all")
        self._draw_static()
        self._fx_dirty = set()
        self._build_events()
        self.redraw()

    def _prepare_traffic(self):
        """Lane geometry and per-lane cumulative load for traffic_router.txt entries."""
        mv = self.mv
        self.lane_pts = {}
        self.lane_load = {}
        segs = []
        for (t0, t1, x, y, port, svc, flits) in self.sc.traffic:
            if port == "L":
                a, b = mv.core(x, y), mv.center(x, y)
            else:
                dx, dy = FROM[port]
                px, py = x + dx, y + dy
                a = mv.exit(px, py, OPPOSITE[port]) if mv.in_mesh(px, py) else mv.outside(x, y, port)
                b = mv.entry(x, y, port)
            key = (x, y, port)
            self.lane_pts[key] = (a, b)
            segs.append((t0, t1, key, svc))
            self.lane_load.setdefault(key, ([], []))
            ts, cs = self.lane_load[key]
            ts.append(t0)
            cs.append((cs[-1] if cs else 0) + flits)
        self.segs = segs
        self.seg_starts = [s[0] for s in segs]
        self.max_len = max([s[1] - s[0] for s in segs] + [1])
        self.max_load = max([v[1][-1] for v in self.lane_load.values()] + [1])

    def _draw_static(self):
        c, mv, sc = self.canvas, self.mv, self.sc
        # OSZ region and free column, under everything
        if sc.osz:
            X, Y = sc.osz
            c.create_rectangle(*mv.cells(0, 0, X - 1, Y - 1, pad=-2), fill=REGION_FILL, outline=blend(REGION_FILL, CLEARING, 0.35),
                               width=1, tags=("osz_bg",))
            c.create_rectangle(*mv.cells(X, 0, X, sc.my - 1, pad=-2), fill=FREECOL_FILL, outline="", tags=("osz_bg",))
            fx0, fy0, fx1, fy1 = mv.cells(X, 0, X, sc.my - 1)
            c.create_text((fx0 + fx1) / 2, fy1 + 10, text="free column", fill=FAINT, font=("Helvetica", 8), tags=("osz_bg",))
            for r in range(Y):
                x0, y0, x1, y1 = mv.cells(0, r, 0, r)
                c.create_text(x0 - 6, (y0 + y1) / 2, anchor="e", text="row {}".format(r), fill=DIM,
                              font=("Helvetica", 8, "bold"), tags=("osz_bg",))
            rx0, ry0, rx1, ry1 = mv.cells(0, 0, X - 1, Y - 1)
            c.create_text(rx0 + 4, ry1 + 10, anchor="w", text="OSZ region [{},{}]".format(X, Y), fill=DIM,
                          font=("Helvetica", 8, "bold"), tags=("osz_bg",))
        # links: two lanes per pair of neighbours
        for x in range(sc.mx):
            for y in range(sc.my):
                if x + 1 < sc.mx:
                    for port, frm in (("W", (x, y)), ("E", (x + 1, y))):
                        tx, ty = (x + 1, y) if port == "W" else (x, y)
                        a, b = mv.exit(frm[0], frm[1], OPPOSITE[port]), mv.entry(tx, ty, port)
                        c.create_line(*a, *b, fill=LANE, width=3, tags=("lane", "lane:{}:{}:{}".format(tx, ty, port)),
                                      arrow="last", arrowshape=(6, 7, 3))
                if y + 1 < sc.my:
                    for port, frm in (("S", (x, y)), ("N", (x, y + 1))):
                        tx, ty = (x, y + 1) if port == "S" else (x, y)
                        a, b = mv.exit(frm[0], frm[1], OPPOSITE[port]), mv.entry(tx, ty, port)
                        c.create_line(*a, *b, fill=LANE, width=3, tags=("lane", "lane:{}:{}:{}".format(tx, ty, port)),
                                      arrow="last", arrowshape=(6, 7, 3))
        self.router_item, self.core_item, self.periph_item = {}, {}, {}
        # peripherals on boundary ports
        for name, x, y, port in sc.periphs:
            ox, oy = mv.outside(x, y, port)
            bw, bh = mv.cell * 0.36, mv.cell * 0.16
            if port in "NS":
                bw, bh = bh * 2.2, bh
            c.create_line(*mv.exit(x, y, port), ox, oy, fill=FAINT, width=2, dash=(3, 3))
            c.create_line(ox, oy, *mv.entry(x, y, port), fill=FAINT, width=2, dash=(3, 3))
            self.periph_item[name] = (c.create_rectangle(ox - bw / 2, oy - bh / 2, ox + bw / 2, oy + bh / 2,
                                                         fill="#2a2140", outline="#7e57c2", width=1.5), (ox, oy, bw, bh))
            c.create_text(ox, oy, text=name, fill="#d1c4e9", font=("Helvetica", 8, "bold"))
        # routers
        b = mv.box / 2
        for x in range(sc.mx):
            for y in range(sc.my):
                cx, cy = mv.center(x, y)
                self.router_item[(x, y)] = self._round_rect(cx - b, cy - b, cx + b, cy + b, 10, fill=ROUTER,
                                                            outline=ROUTER_EDGE, width=1.5,
                                                            tags=("router", "router:{}:{}".format(x, y)))
                kx, ky = mv.core(x, y)
                s = mv.box * 0.13
                self.core_item[(x, y)] = c.create_rectangle(kx - s, ky - s, kx + s, ky + s, fill=CORE, outline=FAINT,
                                                            tags=("core",))
                name = c.create_text(cx + b * 0.42, cy - b * 0.62, text="{}x{}".format(x, y), fill=TEXT,
                                     font=("Helvetica", max(8, int(mv.box * 0.13)), "bold"), tags=("rname",))
                bb = c.bbox(name)
                chip = c.create_rectangle(bb[0] - 3, bb[1] - 1, bb[2] + 3, bb[3] + 1, fill=ROUTER, outline=ROUTER_EDGE,
                                          tags=("rname",))
                c.tag_raise(name, chip)
                names = sc.placement.get((x, y), [])
                if names:
                    c.create_text(cx + b * 0.2, cy + b * 0.48, text="\n".join(names[:2]), fill="#9ccc65",
                                  font=("Helvetica", max(7, int(mv.box * 0.09))), tags=("label",), justify="center")
        # title and legend
        c.create_text(14, 12, anchor="nw", text=sc.name, fill=TEXT, font=("Helvetica", 12, "bold"))
        osz = "  |  OSZ [{},{}]: {} zone(s), {} drop(s)".format(sc.osz[0], sc.osz[1], len(sc.zones), len(sc.drops)) if sc.osz else ""
        c.create_text(14, 32, anchor="nw", text="{}x{} mesh  |  {} packets  |  {} router-port records{}".format(
            sc.mx, sc.my, len(sc.journeys), len(sc.traffic), osz), fill=DIM, font=("Helvetica", 9))
        used = sorted({j.svc for j in sc.journeys} | {s[5] for s in sc.traffic})
        wmax = self.canvas.winfo_width() - 14
        lx, ly = 14, self.canvas.winfo_height() - 34
        items = [("rect", SERVICE_COLORS.get(svc, OTHER_COLOR), sc.svc_name(svc)) for svc in used]
        items += [("dot", GOLD, "source-routing turn"), ("line", GATE, "exit / entry of the selected packet")]
        if sc.osz:
            items += [("line", WALL, "blocked port"), ("line", ACCESS, "access point"), ("dot", WALL, "dropped packet"),
                      ("dot", CLEARING, "clearing"), ("dot", BCAST, "broadcast (BrLite)")]
        for kind, col, label in items:
            if kind == "rect":
                mark = c.create_rectangle(lx, ly - 5, lx + 14, ly + 5, fill=col, outline="")
            elif kind == "dot":
                mark = c.create_oval(lx + 2, ly - 5, lx + 12, ly + 5, fill=col, outline="")
            else:
                mark = c.create_line(lx, ly, lx + 14, ly, fill=col, width=3)
            txt = c.create_text(lx + 18, ly, anchor="w", text=label, fill=DIM, font=("Helvetica", 8))
            right = c.bbox(txt)[2]
            if right > wmax and lx > 14:              # wrap: move this entry to the start of the next row
                c.move(mark, 14 - lx, 16)
                c.move(txt, 14 - lx, 16)
                lx, ly = 14, ly + 16
                right = c.bbox(txt)[2]
            lx = right + 16

    def _round_rect(self, x0, y0, x1, y1, r, **kw):
        pts = [x0 + r, y0, x1 - r, y0, x1, y0, x1, y0 + r, x1, y1 - r, x1, y1, x1 - r, y1, x0 + r, y1, x0, y1, x0, y1 - r, x0, y0 + r, x0, y0]
        return self.canvas.create_polygon(pts, smooth=True, **kw)

    # ------------------------------------------------------------------ dynamic drawing
    def active_journeys(self, T):
        return [j for j in self.sc.journeys if j.times and j.times[0] <= T <= j.times[-1] + j.flits]

    def redraw(self):
        c, mv = self.canvas, self.mv
        c.delete("dyn")
        T = self.T
        # link load (cumulative flits up to T)
        heat = self.layers["heat"].get()
        for key, (ts, cs) in self.lane_load.items():
            i = bisect.bisect_right(ts, T)
            load = cs[i - 1] if i else 0
            if heat and key[2] != "L":
                col = HEAT[min(len(HEAT) - 1, int(len(HEAT) * math.sqrt(load / self.max_load)))] if load else LANE
            else:
                col = LANE
            c.itemconfigure("lane:{}:{}:{}".format(*key), fill=col, width=5 if (heat and load) else 3)
        # all traffic: lanes busy at T
        if self.layers["traffic"].get():
            i0 = bisect.bisect_left(self.seg_starts, T - self.max_len - 2)
            i1 = bisect.bisect_right(self.seg_starts, T + 2)
            for t0, t1, key, svc in self.segs[i0:i1]:
                if t0 - 2 <= T <= t1:
                    a, b = self.lane_pts[key]
                    c.create_line(*a, *b, fill=SERVICE_COLORS.get(svc, OTHER_COLOR), width=3, tags="dyn",
                                  arrow="last" if key[2] != "L" else "none", arrowshape=(6, 7, 3))
        # selected packet: its whole path, faint, with waypoints and gate marks
        j = self.sel
        if j is not None and j.points:
            flat = [v for p in j.points for v in p]
            if len(flat) >= 4:
                c.create_line(*flat, fill=SERVICE_COLORS.get(j.svc, OTHER_COLOR), width=2, dash=(4, 4), tags="dyn")
            for k, (wx, wy) in enumerate(j.waypoints):
                kx, ky = mv.core(wx, wy)
                c.create_oval(kx - 11, ky - 11, kx + 11, ky + 11, outline=GOLD, width=2, tags="dyn")
                c.create_text(kx - 16, ky + 14, text="T{}".format(k + 1), fill=GOLD, font=("Helvetica", 9, "bold"), tags="dyn")
            self._gate_marks(j)
        # event effects (start / pass / gate / loopback / arrival), under the packets
        fx = self.layers["fx"].get()
        self._fx_reset_items()
        zones = self.sc.osz is not None and self.layers["zones"].get()
        if zones:
            self._draw_osz(T)
        if fx:
            self._draw_effects(T)
            if zones:
                self._draw_osz_effects(T)
        # packets: worms
        active = self.active_journeys(T)
        if self.layers["worms"].get():
            for jj in active:
                self._draw_worm(jj, T, jj is self.sel)
        if fx:
            c.tag_raise("fxlabel")
            self._draw_ticker(T)
        # clock
        c.create_text(c.winfo_width() - 14, 12, anchor="ne", text="cycle {:,}".format(int(T)), fill=TEXT,
                      font=("Helvetica", 16, "bold"), tags="dyn")
        c.create_text(c.winfo_width() - 14, 36, anchor="ne", text="{:.4f} ms   |   {} packet{} in flight".format(
            T / 1e5, len(active), "" if len(active) == 1 else "s"), fill=DIM, font=("Helvetica", 9), tags="dyn")
        c.tag_raise("label")
        c.tag_raise("rname")
        self.draw_timeline()
        self._status(active)
        self._detail_now()

    def _gate_marks(self, j):
        c, mv = self.canvas, self.mv
        if j.exit:
            p = {"EAST": "E", "WEST": "W", "NORTH": "N", "SOUTH": "S"}[j.exit]
            a = mv.exit(*j.origin, p)
            c.create_oval(a[0] - 7, a[1] - 7, a[0] + 7, a[1] + 7, outline=GATE, width=3, tags="dyn")
            lx, ly = self._outward(a, p, 26)
            c.create_text(lx, ly, text="exit " + j.exit, fill=GATE, font=("Helvetica", 8, "bold"), tags="dyn")
        if j.entry and j.delivered:
            p = {"EAST": "E", "WEST": "W", "NORTH": "N", "SOUTH": "S"}[j.entry]
            a = mv.entry(*j.dest, p)
            c.create_oval(a[0] - 7, a[1] - 7, a[0] + 7, a[1] + 7, outline=GATE, width=3, tags="dyn")
            lx, ly = self._outward(a, p, 26)
            c.create_text(lx, ly, text="entry " + j.entry, fill=GATE, font=("Helvetica", 8, "bold"), tags="dyn")

    @staticmethod
    def _outward(a, port, r):
        """A label position beside a port mark, away from the router."""
        dx, dy = {"E": (1, 0), "W": (-1, 0), "N": (0, -1), "S": (0, 1)}[port]
        return (a[0] + dx * r * 1.4, a[1] + dy * r * 0.8 + (10 if dx else 0))

    def _draw_worm(self, j, T, selected):
        c, mv = self.canvas, self.mv
        col = SERVICE_COLORS.get(j.svc, OTHER_COLOR)
        body = mv.worm(j.times, j.points, T, j.flits)
        if len(body) >= 2:
            flat = [v for p in body for v in p]
            if selected:
                c.create_line(*flat, fill=SELECT, width=10, capstyle="round", joinstyle="round", tags="dyn")
            c.create_line(*flat, fill=col, width=7, capstyle="round", joinstyle="round", tags="dyn")
        if j.dropped is not None and T >= j.dropped.t:
            hx, hy = mv.at(j.times, j.points, T)
            for dx, dy in ((7, 7), (7, -7)):
                c.create_line(hx - dx, hy - dy, hx + dx, hy + dy, fill=WALL, width=4, tags="dyn")
            if self.layers["labels"].get() and not self.layers["fx"].get():
                c.create_text(hx + 10, hy + 12, anchor="nw", text="#{} DROPPED".format(j.id), fill=WALL,
                              font=("Helvetica", 8, "bold"), tags="dyn")
            return
        if T > j.times[-1]:
            return
        hx, hy = mv.at(j.times, j.points, T)
        # headers still in front of the packet at time T
        hop = None
        for h in j.hops:
            if h.t <= T:
                hop = h
        nsr = hop.nsr if hop else j.nsr0
        flits = hop.flits if hop else j.flits
        looping = hop is not None and hop.dir == "DMNI" and hop.nsr > 0
        r = 8 if selected else 6
        c.create_oval(hx - r, hy - r, hx + r, hy + r, fill=col, outline=SELECT if selected else BG, width=2, tags="dyn")
        for k in range(nsr):
            c.create_oval(hx + r + 3 + 9 * k, hy - r - 6, hx + r + 10 + 9 * k, hy - r + 1, fill=GOLD, outline="", tags="dyn")
        if looping and not self.layers["fx"].get():
            kx, ky = mv.core(hop.x, hop.y)
            phase = (T * 40) % 360
            c.create_arc(kx - 15, ky - 15, kx + 15, ky + 15, start=phase, extent=270, style="arc", outline=GOLD, width=3, tags="dyn")
            c.create_text(kx, ky + 24, text="turn", fill=GOLD, font=("Helvetica", 8, "bold"), tags="dyn")
        if self.layers["labels"].get():
            txt = "#{} {} {}f".format(j.id, self.sc.svc_name(j.svc), flits)
            c.create_text(hx + 10, hy + 12, anchor="nw", text=txt, fill=col, font=("Helvetica", 8, "bold"), tags="dyn")

    # ------------------------------------------------------------------ event effects
    def _options_changed(self):
        self._build_events()
        self.redraw()

    def _fx_set(self):
        """Journeys whose events get effects: all, or the selected packet's conversation (same two endpoints)."""
        if self.layers["focus"].get() and self.sel is not None:
            key = frozenset((self.sel.origin_name, self.sel.dest_name))
            return [j for j in self.sc.journeys if frozenset((j.origin_name, j.dest_name)) == key]
        return self.sc.journeys

    def _build_events(self):
        """Every effect-worthy moment, as (time, kind, journey, data), from the packet hops."""
        ev = []
        for j in self._fx_set():
            if not j.times:
                continue
            h0 = j.hops[0]
            origin_periph = j.exit is None and h0.dir == "IN" and h0.port != "L"
            ev.append((j.times[0], "start", j, ("periph", j.origin_name) if origin_periph else ("pe", j.origin)))
            seen_exit = False
            for i, h in enumerate(j.hops):
                here = (h.x, h.y)
                if h.dir == "IN" and h.port != "L":
                    if i > 0 or origin_periph:
                        ev.append((h.t, "pass", j, here))
                    dx, dy = FROM[h.port]
                    if not seen_exit and j.exit and (h.x + dx, h.y + dy) == j.origin:
                        ev.append((h.t - 1, "exit", j, (j.origin, OPPOSITE[h.port])))
                        seen_exit = True
                    if here == j.dest and j.delivered and h is [hh for hh in j.hops if hh.dir == "IN" and hh.port != "L" and (hh.x, hh.y) == j.dest][-1]:
                        ev.append((h.t, "entry", j, (j.dest, h.port)))
                elif h.dir == "DMNI" and h.nsr > 0:
                    nxt = next((hh for hh in j.hops[i + 1:] if hh.dir == "IN" and hh.port == "L" and (hh.x, hh.y) == here), None)
                    k = j.waypoints.index(here) + 1 if here in j.waypoints else 0
                    ev.append((h.t, "loop", j, (here, k, nxt.t if nxt else h.t + 3, h.sr0)))
            if j.dropped is not None:
                pass                                      # the OSZ effects draw the drop
            elif j.delivered:
                ev.append((j.end, "arrive", j, ("pe", j.dest)))
            elif j.to_periph:
                ev.append((j.times[-1], "arrive", j, ("periph", j.dest_name)))
        ev.sort(key=lambda e: e[0])
        self.events = ev
        self.ev_times = [e[0] for e in ev]
        self.fx_starts = [e[0] for e in ev if e[1] == "start"]
        self.arrivals = [e for e in ev if e[1] == "arrive"]
        self.arr_times = [e[0] for e in self.arrivals]
        self._build_osz_events()

    # ------------------------------------------------------------------ OSZ secure region
    def _build_osz_events(self):
        """OSZ moments as (time, kind, data), from osz_trace.txt and the mapper log. Not filtered by focus."""
        sc = self.sc
        ev = []
        for d in sc.drops:
            ev.append((d.t, "drop", d))
        for t, kind, x, y, port, hdr, src in sc.access:
            ev.append((t, kind, (x, y, port, hdr, src)))
        mapper_pe = None
        for t, x, y, name, data in sc.kernel:
            if name == "MAPPER":
                mapper_pe = mapper_pe or (data >> 8, data & 0xFF)
                continue
            ev.append((t, "k_" + name.lower(), (x, y, data)))
        self.mapper_pe = mapper_pe or (sc.mx - 1, sc.my - 1)
        for t, kind, data in sc.mapper:
            ev.append((t, "m_" + kind, data))
        for (x, y), (ts, vs) in sc.blocks.items():
            for k, t in enumerate(ts):
                ev.append((t, "wall", (x, y, vs[k - 1] if k else 0, vs[k])))
        ev.sort(key=lambda e: e[0])
        self.oev = ev
        self.oev_times = [e[0] for e in ev]
        # waits: app -> [(t_wait, t_claim)]
        self.waits = []
        for t, kind, data in sc.mapper:
            if kind == "wait":
                app, n = data
                tc = min([z.t0 for z in sc.zones if z.app == app and z.t0 >= t] + [float("inf")])
                if not any(w[0] == app and w[3] == tc for w in self.waits):
                    self.waits.append((app, n, t, tc))
        # held tasks: (x, y, task, t_held, t_released)
        self.helds = []
        for t, x, y, name, data in sc.kernel:
            if name == "TASK_HELD":
                tr = min([k[0] for k in sc.kernel if k[3] in ("TASK_RELEASED", "TASK_CLEARED") and k[4] == data and k[0] >= t]
                         + [float("inf")])
                self.helds.append((x, y, data, t, tr))

    def _zone_color(self, app):
        return ZONE_COLORS[app % len(ZONE_COLORS)]

    def _port_mark(self, x, y, port, dir_):
        """Point on the router side of a port: where a packet enters (RX) or leaves (TX)."""
        return self.mv.entry(x, y, port) if dir_ == "RX" else self.mv.exit(x, y, port)

    def _wall_line(self, x, y, port, frac=1.0):
        """End points of a wall across the router side `port`, `frac` of its full length."""
        cx, cy = self.mv.center(x, y)
        b = self.mv.box / 2 + 4
        h = (self.mv.box / 2 + 2) * frac
        if port in "EW":
            px = cx + b if port == "E" else cx - b
            return (px, cy - h, px, cy + h)
        py = cy - b if port == "N" else cy + b
        return (cx - h, py, cx + h, py)

    def _draw_osz(self, T):
        """Zones, walls, access points, held tasks and drop marks at time T (a pure function of T)."""
        c, mv, sc = self.canvas, self.mv, self.sc
        X, Y = sc.osz
        zones = sc.zones_at(T)
        owned = set()
        for z in zones:
            col = self._zone_color(z.app)
            owned.update(range(z.lo, z.hi + 1))
            x0, y0, x1, y1 = mv.cells(0, z.lo, X - 1, z.hi, pad=-5)
            c.create_rectangle(x0, y0, x1, y1, outline=col, width=3, tags="dyn")
            label = "app {} {}rows {}..{}".format(z.app, sc.app_name(z.app) + " " if sc.app_name(z.app) else "", z.lo, z.hi)
            if z.clear_t is not None and z.clear_t <= T:
                done = sum(1 for t, k, d in sc.mapper if k == "cleared" and d[0] is z and t <= T)
                label += "  clearing {}/{}".format(done, z.clear_n)
            c.create_text(x0 + 4, y0 + 3, anchor="nw", text=label, fill=col, font=("Helvetica", 8, "bold"), tags="dyn")
        for r in range(Y):
            if r not in owned:
                c.create_rectangle(*mv.cells(0, r, X - 1, r, pad=-7), outline=FAINT, width=1, dash=(3, 4), tags="dyn")
        # walls and access points, from DMNI_OSZ_BLOCK
        for (x, y) in sc.blocks:
            v = sc.block_at(x, y, T)
            for port, bit in BLOCK_BIT.items():
                if v >> bit & 1:
                    c.create_line(*self._wall_line(x, y, port), fill=WALL, width=5, capstyle="butt", tags="dyn")
            if v >> 4 & 1:
                self._draw_gate(x, y, ACCESS, 0.0)
        # waiting applications
        ry = mv.cells(0, Y - 1, 0, Y - 1)[1] - 14
        k = 0
        for app, n, t, tc in self.waits:
            if t <= T < tc:
                c.create_text(mv.cells(0, 0, 0, 0)[0] + 4, ry - 14 * k, anchor="sw",
                              text="app {} {}waiting for {} free row(s)".format(
                                  app, sc.app_name(app) + " " if sc.app_name(app) else "", n),
                              fill=self._zone_color(app), font=("Helvetica", 8, "bold"), tags="dyn")
                k += 1
        # held tasks
        for x, y, task, t, tr in self.helds:
            if t <= T < tr:
                cx, cy = mv.center(x, y)
                self._label(cx, cy + mv.box / 2 + 12, "HELD {} until the zone closes".format(sc.task_name(task)), ACCESS, 8)
        # cleared PEs of zones still clearing
        for t, kind, d in sc.mapper:
            if kind == "cleared" and t <= T < d[0].t1:
                cx, cy = mv.center(d[1], d[2])
                b = mv.box / 2
                c.create_text(cx - b + 6, cy - b + 4, anchor="nw", text="\u2713", fill=CLEARING,
                              font=("Helvetica", 12, "bold"), tags="dyn")
        # drop marks so far, one per port with a count
        marks = {}
        for d in sc.drops:
            if d.t <= T:
                marks[(d.x, d.y, d.port, d.dir)] = marks.get((d.x, d.y, d.port, d.dir), 0) + 1
        for (x, y, port, dir_), n in marks.items():
            px, py = self._port_mark(x, y, port, dir_)
            for dx, dy in ((4, 4), (4, -4)):
                c.create_line(px - dx, py - dy, px + dx, py + dy, fill=WALL, width=2, tags="dyn")
            if n > 1:
                c.create_text(px + 6, py - 6, anchor="sw", text=str(n), fill=WALL, font=("Helvetica", 8, "bold"), tags="dyn")

    def _draw_gate(self, x, y, col, opening):
        """The access point on the E side of (x,y): two posts and a bar, swung open by `opening` (0..1)."""
        c = self.canvas
        x0, y0, x1, y1 = self._wall_line(x, y, "E")
        for py in (y0, y1):
            c.create_oval(x0 - 3, py - 3, x0 + 3, py + 3, fill=col, outline="", tags="dyn")
        # the bar: closed along the side, open = swung outwards
        ang = opening * math.pi / 2
        length = y1 - y0
        bx, by = x0 + length * math.sin(ang), y0 + length * math.cos(ang)
        c.create_line(x0, y0, bx, by, fill=col, width=4, tags="dyn")
        c.create_text(x0 + 6, y1 + 2, anchor="nw", text="AP", fill=col, font=("Helvetica", 7, "bold"), tags="dyn")

    def _port_label(self, xy, port, text, col, size=8):
        """A label beside a port mark, growing away from the router (east of an E port, above an N port, ...)."""
        x, y = xy
        anchor, dx, dy = {"E": ("nw", 12, 8), "W": ("ne", -12, 8), "N": ("s", 0, -12), "S": ("n", 0, 12)}[port]
        self._label(x + dx, y + dy, text, col, size, anchor=anchor)

    def _ripple(self, xy, f, col, text):
        """BrLite broadcast: a ring expanding from xy over the mesh; f goes 1 -> 0."""
        cx, cy = self.mv.center(*xy)
        r = (1 - f) * self.mv.cell * max(self.sc.mx, self.sc.my) * 1.1
        self._ring((cx, cy), max(4, r), blend(BG, BCAST, f), 2)
        self._label(cx, cy + self.mv.box / 2 + 16, text, blend(BG, BCAST, max(f, 0.4)), 8)

    def _draw_osz_effects(self, T):
        c, mv, sc = self.canvas, self.mv, self.sc
        b = mv.box / 2
        win = self._cyc(OSZ_FX_MAX)
        lo = bisect.bisect_left(self.oev_times, T - win)
        window = self.oev[lo:bisect.bisect_right(self.oev_times, T)]
        # one state per access point: the latest of hold / accept / refuse
        gate = {}
        for e in window:
            t, kind, d = e
            if kind in ("hold", "accept"):
                gate[(d[0], d[1])] = e
            elif kind == "drop" and d.reason != "blocked":
                gate[(d.x, d.y)] = e
        for t, kind, d in window:
            age = T - t
            if kind in ("hold", "accept") and gate.get((d[0], d[1]))[0] != t:
                continue
            if kind == "drop":
                f = 1 - age / self._cyc(FX_DROP)
                if f <= 0:
                    continue
                px, py = self._port_mark(d.x, d.y, d.port, d.dir)
                for k in range(3):
                    g = max(0.0, min(1.0, (1 - f) * 1.4 - k * 0.2))
                    if 0 < g < 1:
                        self._ring((px, py), 6 + 30 * g, blend(BG, WALL, 1 - g), 3)
                r = 9 + 4 * f
                for dx, dy in ((r, r), (r, -r)):
                    c.create_line(px - dx, py - dy, px + dx, py + dy, fill=WALL, width=4, tags="dyn")
                if d.reason != "blocked" and gate.get((d.x, d.y), (None,))[0] == t:
                    self._draw_gate(d.x, d.y, WALL, 0.0)              # refused: the gate stays closed
                who = " #{}".format(d.journey.id) if d.journey is not None else ""
                self._port_label((px, py), d.port, "DROPPED{}\n{}".format(who, d.describe()),
                                 blend(BG, WALL, max(f, 0.45)), 9)
            elif kind in ("hold", "accept"):
                f = 1 - age / self._cyc(FX_ACCESS)
                if f <= 0:
                    continue
                x, y, port, hdr, src = d
                if kind == "hold":
                    pulse = 0.5 + 0.5 * math.sin(T * 1.5)
                    self._draw_gate(x, y, blend(ACCESS, SELECT, pulse * f), 0.0)
                    self._port_label(mv.entry(x, y, "E"), "E", "ACCESS POINT {}x{}\nchecking the source".format(x, y),
                                     blend(BG, ACCESS, max(f, 0.45)))
                else:
                    self._draw_gate(x, y, ACCESS_OK, min(1.0, 2.5 * (1 - f)) if f > 0.4 else 1.0)
                    who = "from {:x}x{:x}".format((src >> 8) & 0xFF, src & 0xFF) if src is not None else "task binary"
                    self._port_label(mv.entry(x, y, "E"), "E", "ACCESS POINT {}x{} OPEN\n{}".format(x, y, who),
                                     blend(BG, ACCESS_OK, max(f, 0.45)))
            elif kind == "wall":
                f = 1 - age / self._cyc(FX_WALL)
                if f <= 0:
                    continue
                x, y, old, new = d
                for port, bit in BLOCK_BIT.items():
                    was, now = old >> bit & 1, new >> bit & 1
                    if now and not was:          # rising
                        c.create_line(*self._wall_line(x, y, port, 1 - f), fill=SELECT, width=7, tags="dyn")
                    elif was and not now:        # falling
                        c.create_line(*self._wall_line(x, y, port, f), fill=blend(BG, WALL, f), width=5, tags="dyn")
                if (old ^ new) & 0x1F:
                    cx, cy = mv.center(x, y)
                    self._label(cx, cy + b + 12, "ports {}".format(self._mask_text(new)), blend(BG, WALL, max(f, 0.4)), 7)
            elif kind == "k_task_cleared":
                f = 1 - age / self._cyc(FX_CLEAR)
                if f <= 0:
                    continue
                x, y, task = d
                cx, cy = mv.center(x, y)
                sweep = cy - b + 2 * b * (1 - f)
                c.create_rectangle(cx - b, cy - b, cx + b, sweep, fill=blend(ROUTER, CLEARING, 0.55 * f), outline="", tags="dyn")
                c.create_line(cx - b, sweep, cx + b, sweep, fill=CLEARING, width=3, tags="dyn")
                self._label(cx, cy - b - 16, "CLEARED {}".format(sc.task_name(task)), blend(BG, CLEARING, max(f, 0.4)), 8)
            elif kind == "k_zone_clear":
                f = 1 - age / self._cyc(FX_CLEAR)
                if f <= 0:
                    continue
                x, y, payload = d
                self._paint_router((x, y), blend(ROUTER, CLEARING, 0.45 * f), CLEARING, 2 + 2 * f)
            elif kind in ("k_task_done", "k_zone_cleared"):
                f = 1 - age / self._cyc(FX_BCAST)
                if f <= 0:
                    continue
                x, y, data = d
                text = "OSZ_TASK_DONE {}".format(sc.task_name(data)) if kind == "k_task_done" else "OSZ_ZONE_CLEARED"
                self._ripple((x, y), f, BCAST, text)
            elif kind in ("m_claim", "m_release", "m_zone_clear"):
                f = 1 - age / self._cyc(FX_ZONE)
                if f <= 0:
                    continue
                z = d
                col = self._zone_color(z.app)
                X = sc.osz[0]
                x0, y0, x1, y1 = mv.cells(0, z.lo, X - 1, z.hi, pad=-5 + 10 * (1 - f))
                c.create_rectangle(x0, y0, x1, y1, outline=blend(BG, col, f), width=2 + 4 * f, tags="dyn")
                if kind == "m_claim":
                    text, svc = "CLAIMED rows {}..{} by app {}".format(z.lo, z.hi, z.app), "OSZ_ROWS claim"
                elif kind == "m_release":
                    text, svc = "RELEASED rows {}..{}".format(z.lo, z.hi), "OSZ_ROWS release"
                else:
                    text, svc = "clearing rows {}..{}".format(z.lo, z.hi), "OSZ_ZONE_CLEAR"
                self._label((x0 + x1) / 2, (y0 + y1) / 2, text, blend(BG, col, max(f, 0.45)), 9)
                self._ripple(self.mapper_pe, f, BCAST, svc)
            elif kind == "k_bcast_ignored":
                f = 1 - age / self._cyc(FX_DROP)
                if f > 0:
                    x, y, data = d
                    self._paint_router((x, y), blend(ROUTER, WALL, 0.5 * f), WALL, 3)

    @staticmethod
    def _mask_text(v):
        blocked = "".join(p for p, bit in BLOCK_BIT.items() if v >> bit & 1)
        return "blocked {}{}".format(blocked or "-", ", access point E" if v >> 4 & 1 else "")

    def _osz_ticker(self, T):
        """OSZ events for the Events box: (time, text, colour)."""
        out = []
        i = bisect.bisect_right(self.oev_times, T)
        for t, kind, d in reversed(self.oev[max(0, i - 60):i]):
            if kind == "drop":
                out.append((t, "DROP     {}".format(d.describe()), WALL))
            elif kind == "accept":
                out.append((t, "ACCESS   {}x{} open".format(d[0], d[1]), ACCESS_OK))
            elif kind == "hold":
                out.append((t, "ACCESS   {}x{} checking source".format(d[0], d[1]), ACCESS))
            elif kind == "wall":
                out.append((t, "PORTS    {}x{} {}".format(d[0], d[1], self._mask_text(d[3])), WALL))
            elif kind == "k_task_cleared":
                out.append((t, "CLEARED  {} on {}x{}".format(self.sc.task_name(d[2]), d[0], d[1]), CLEARING))
            elif kind == "k_task_done":
                out.append((t, "BCAST    OSZ_TASK_DONE {} from {}x{}".format(self.sc.task_name(d[2]), d[0], d[1]), BCAST))
            elif kind == "k_zone_cleared":
                out.append((t, "BCAST    OSZ_ZONE_CLEARED from {}x{}".format(d[0], d[1]), BCAST))
            elif kind == "k_task_held":
                out.append((t, "HELD     {} on {}x{}".format(self.sc.task_name(d[2]), d[0], d[1]), ACCESS))
            elif kind == "k_task_released":
                out.append((t, "RELEASED {} on {}x{}".format(self.sc.task_name(d[2]), d[0], d[1]), ACCESS_OK))
            elif kind == "k_bcast_ignored":
                out.append((t, "IGNORED  zone broadcast from {:x} on {}x{}".format(d[2] & 0xFFFF, d[0], d[1]), WALL))
            elif kind == "m_claim":
                out.append((t, "CLAIM    app {} rows {}..{}".format(d.app, d.lo, d.hi), self._zone_color(d.app)))
            elif kind == "m_release":
                out.append((t, "RELEASE  app {} rows {}..{}".format(d.app, d.lo, d.hi), self._zone_color(d.app)))
            elif kind == "m_zone_clear":
                out.append((t, "BCAST    OSZ_ZONE_CLEAR rows {}..{}".format(d.lo, d.hi), BCAST))
            elif kind == "m_cleared":
                out.append((t, "CLEARED  PE {}x{} ({}/{})".format(d[1], d[2], d[3], d[4]), CLEARING))
            elif kind == "m_wait":
                out.append((t, "WAIT     app {} for {} row(s)".format(d[0], d[1]), self._zone_color(d[0])))
            if len(out) == 7:
                break
        return out

    def _cyc(self, seconds):
        """Wall-clock seconds -> cycles at the current replay speed (at least 2 cycles)."""
        return max(2.0, seconds * self.speed)

    def _fx_reset_items(self):
        c = self.canvas
        for kind, key in self._fx_dirty:
            if kind == "router":
                c.itemconfigure(self.router_item[key], fill=ROUTER, outline=ROUTER_EDGE, width=1.5)
            elif kind == "core":
                c.itemconfigure(self.core_item[key], fill=CORE, outline=FAINT)
            elif kind == "periph":
                c.itemconfigure(self.periph_item[key][0], fill="#2a2140", outline="#7e57c2", width=1.5)
        self._fx_dirty = set()

    def _paint_router(self, xy, fill=None, outline=None, width=None):
        kw = {}
        if fill:
            kw["fill"] = fill
        if outline:
            kw["outline"] = outline
        if width:
            kw["width"] = width
        self.canvas.itemconfigure(self.router_item[xy], **kw)
        self._fx_dirty.add(("router", xy))

    def _paint_place(self, place, fill, outline, width):
        kind, key = place
        if kind == "pe":
            self._paint_router(key, fill, outline, width)
        elif key in self.periph_item:
            self.canvas.itemconfigure(self.periph_item[key][0], fill=fill, outline=outline, width=width)
            self._fx_dirty.add(("periph", key))

    def _place_xy(self, place):
        kind, key = place
        if kind == "pe":
            return self.mv.center(*key), self.mv.box / 2
        if key in self.periph_item:
            ox, oy, bw, bh = self.periph_item[key][1]
            return (ox, oy), max(bw, bh) / 2
        return None, 0

    def _ring(self, xy, r, col, width=3, dash=None):
        x, y = xy
        kw = {"dash": dash} if dash else {}
        self.canvas.create_oval(x - r, y - r, x + r, y + r, outline=col, width=width, tags="dyn", **kw)

    def _label(self, x, y, text, col, size=9, anchor="center"):
        c = self.canvas
        t = c.create_text(x, y, text=text, fill=col, font=("Helvetica", size, "bold"), anchor=anchor, tags=("dyn", "fxlabel"))
        bb = c.bbox(t)
        bg = c.create_rectangle(bb[0] - 3, bb[1] - 1, bb[2] + 3, bb[3] + 1, fill=BG, outline=blend(BG, col, 0.6),
                                tags=("dyn", "fxlabel"))
        c.tag_raise(t, bg)

    def _draw_effects(self, T):
        mv, b = self.mv, self.mv.box / 2
        # 1. destinations that stay lit: arrived after the latest communication start, until the next start
        i = bisect.bisect_right(self.fx_starts, T)
        last_start = self.fx_starts[i - 1] if i else -1
        prev_start = self.fx_starts[i - 2] if i > 1 else -1
        a0 = bisect.bisect_left(self.arr_times, last_start)
        a1 = bisect.bisect_right(self.arr_times, T)
        for t, _k, j, place in self.arrivals[a0:a1]:
            col = SERVICE_COLORS.get(j.svc, OTHER_COLOR)
            self._paint_place(place, blend(ROUTER, col, 0.62), col, 3)
            xy, r = self._place_xy(place)
            if xy:
                entry = " via " + j.entry if j.entry and j.delivered else ""
                self._label(xy[0], xy[1] - r - 12, "DELIVERED #{} {}{}".format(j.id, self.sc.svc_name(j.svc), entry), col, 8)
        # 2. the previous communication's destination fades out when the next one starts
        if last_start >= 0 and T - last_start < self._cyc(FX_RESET):
            f = 1 - (T - last_start) / self._cyc(FX_RESET)
            b0 = bisect.bisect_left(self.arr_times, prev_start)
            b1 = bisect.bisect_left(self.arr_times, last_start)
            for t, _k, j, place in self.arrivals[b0:b1]:
                col = SERVICE_COLORS.get(j.svc, OTHER_COLOR)
                self._paint_place(place, blend(ROUTER, col, 0.62 * f), blend(ROUTER_EDGE, col, f), 1.5 + 1.5 * f)
        # 3. destination target of every communication in flight
        for t, kind, j, place in self.events[bisect.bisect_left(self.ev_times, T - 20000):bisect.bisect_right(self.ev_times, T)]:
            if kind != "start" or not (t <= T < (self._arrive_time(j))):
                continue
            col = SERVICE_COLORS.get(j.svc, OTHER_COLOR)
            dest = ("pe", j.dest) if not j.to_periph else ("periph", j.dest_name)
            xy, r = self._place_xy(dest)
            if xy:
                pulse = 0.5 + 0.5 * math.sin(T * 0.6)
                self._ring(xy, r * 1.25 + 3 * pulse, blend(BG, col, 0.5 + 0.5 * pulse), 2, dash=(6, 4))
                self._label(xy[0], xy[1] - r * 1.25 - 12, "target of #{}".format(j.id), col, 8)
        # 4. short effects of the events of the last few seconds
        win = self._cyc(FX_MAX)
        lo = bisect.bisect_left(self.ev_times, T - max(win, 20000))
        for t, kind, j, data in self.events[lo:bisect.bisect_right(self.ev_times, T)]:
            col = SERVICE_COLORS.get(j.svc, OTHER_COLOR)
            age = T - t
            if kind == "start":
                f = 1 - age / self._cyc(FX_START)
                if f <= 0:
                    continue
                self._paint_place(data, blend(ROUTER, col, 0.7 * f), blend(ROUTER_EDGE, SELECT, f), 2 + 4 * f)
                xy, r = self._place_xy(data)
                if xy:
                    self._ring(xy, r * (1.0 + 1.1 * (1 - f)), blend(BG, col, f), 2 + 3 * f)
                    self._ring(xy, r * (1.0 + 0.6 * (1 - f)), blend(BG, SELECT, f * 0.8), 1)
                    self._label(xy[0], xy[1] - r - 14 - 10 * (1 - f), "START #{} {}".format(j.id, self.sc.svc_name(j.svc)),
                                blend(BG, col, max(f, 0.35)), 9)
            elif kind == "pass":
                f = 1 - age / self._cyc(FX_PASS)
                if f <= 0:
                    continue
                self._paint_router(data, blend(ROUTER, col, 0.5 * f), blend(ROUTER_EDGE, col, f), 1.5 + 2.5 * f)
            elif kind in ("exit", "entry"):
                f = 1 - age / self._cyc(FX_GATE)
                if f <= 0:
                    continue
                xy, port = data
                p = mv.exit(xy[0], xy[1], port) if kind == "exit" else mv.entry(xy[0], xy[1], port)
                self._ring(p, 7 + 16 * (1 - f), blend(BG, GATE, f), 3)
                self._ring(p, 5, GATE, 3)
                lx, ly = self._outward(p, port, 30)
                self._label(lx, ly, "{} {}".format(kind.upper(), PORT_NAME[port]), blend(BG, GATE, max(f, 0.4)), 9)
            elif kind == "loop":
                xy, k, t_out, hdr = data
                tail = self._cyc(FX_LOOP_TAIL)
                if T > t_out + tail:
                    continue
                kx, ky = mv.core(*xy)
                if T <= t_out:
                    # inside the loopback: gold pulse, spinning arcs, the header dropping into the DMNI
                    pulse = 0.5 + 0.5 * math.sin(T * 2.5)
                    self._paint_router(xy, blend(ROUTER, GOLD, 0.25 + 0.25 * pulse), GOLD, 3)
                    self.canvas.itemconfigure(self.core_item[xy], fill=GOLD, outline=SELECT)
                    self._fx_dirty.add(("core", xy))
                    ph = (T * 90) % 360
                    for rr, st in ((16, ph), (22, -ph * 1.3)):
                        self.canvas.create_arc(kx - rr, ky - rr, kx + rr, ky + rr, start=st, extent=250, style="arc",
                                               outline=GOLD, width=3, tags="dyn")
                    fr = min(1.0, (T - t) / max(0.5, (t_out - t)))
                    hx, hy = kx + 26 * (1 - fr), ky - 34 * (1 - fr)
                    rad = 6 * (1 - 0.7 * fr)
                    self.canvas.create_oval(hx - rad, hy - rad, hx + rad, hy + rad, fill=GOLD, outline=SELECT, tags="dyn")
                    cx, cy = mv.center(*xy)
                    self._label(cx, cy - b - 16, "TURN T{} at ({},{}): source-routing header consumed".format(k, *xy), GOLD, 9)
                else:
                    f = 1 - (T - t_out) / tail
                    self._ring((kx, ky), 10 + 30 * (1 - f), blend(BG, GOLD, f), 3)
                    self._paint_router(xy, blend(ROUTER, GOLD, 0.3 * f), blend(ROUTER_EDGE, GOLD, f), 1.5 + 2 * f)
                    cx, cy = mv.center(*xy)
                    self._label(cx, cy - b - 16, "T{} re-sent".format(k), blend(BG, GOLD, max(f, 0.4)), 9)
            elif kind == "arrive":
                f = 1 - age / self._cyc(FX_ARRIVE)
                if f <= 0:
                    continue
                self._paint_place(data, blend(blend(ROUTER, col, 0.62), SELECT, 0.85 * f), blend(col, SELECT, f), 3 + 4 * f)
                xy, r = self._place_xy(data)
                if xy:
                    for n in range(3):
                        g = max(0.0, min(1.0, (1 - f) * 1.4 - n * 0.2))
                        if 0 < g < 1:
                            self._ring(xy, r * (1.0 + 1.6 * g), blend(BG, col, 1 - g), 3)

    def _arrive_time(self, j):
        return j.end if j.delivered else j.times[-1]

    def _draw_ticker(self, T):
        """The last events (newest at the bottom) in the Events box of the right panel."""
        i = bisect.bisect_right(self.ev_times, T)
        lines = []
        for t, kind, j, data in reversed(self.events[max(0, i - 80):i]):
            if kind == "pass":
                continue
            svc = self.sc.svc_name(j.svc)
            if kind == "start":
                txt, col = "START    #{} {}  {} -> {}".format(j.id, svc, j.origin_name, j.dest_name), SERVICE_COLORS.get(j.svc, OTHER_COLOR)
            elif kind == "exit":
                txt, col = "EXIT     #{} leaves {} through {}".format(j.id, j.origin_name, PORT_NAME[data[1]]), GATE
            elif kind == "loop":
                txt, col = "TURN     #{} at ({},{}) T{}".format(j.id, data[0][0], data[0][1], data[1]), GOLD
            elif kind == "entry":
                txt, col = "ENTRY    #{} enters {} through {}".format(j.id, j.dest_name, PORT_NAME[data[1]]), GATE
            else:
                txt, col = "ARRIVE   #{} {} delivered at {}".format(j.id, svc, j.dest_name), SERVICE_COLORS.get(j.svc, OTHER_COLOR)
            lines.append((t, "{:>9,}  {}".format(int(t), txt), col))
            if len(lines) == 7:
                break
        if self.sc.osz is not None and self.layers["zones"].get():
            lines += [(t, "{:>9,}  {}".format(int(t), txt), col) for t, txt, col in self._osz_ticker(T)]
            lines.sort(key=lambda l: -l[0])
            lines = lines[:7]
        lines = [(txt, col) for _t, txt, col in lines]
        lines.reverse()
        if lines == self._events_shown:
            return
        self._events_shown = lines
        box = self.events_box
        box.delete("1.0", "end")
        for n, (txt, col) in enumerate(lines):
            tag = "ev{}".format(n)
            box.tag_configure(tag, foreground=col if n == len(lines) - 1 else blend(BG, col, 0.65),
                              font=("Courier", 9, "bold" if n == len(lines) - 1 else "normal"))
            box.insert("end", txt + "\n", tag)

    # ------------------------------------------------------------------ timeline
    def _tl_height(self):
        return 96 + (16 + 10 * self.sc.osz[1] if self.sc.osz else 0)

    def _draw_osz_timeline(self, w):
        """Below the packet rows: one band per region row (owner app, clearing), and the drops."""
        tl, sc = self.timeline, self.sc
        Y = sc.osz[1]
        top = 98
        tl.create_text(8, top + 4, anchor="w", text="drops", fill=WALL, font=("Helvetica", 8))
        for d in sc.drops:
            if self.view0 <= d.t <= self.view1:
                x = self.tx(d.t)
                tl.create_line(x, top, x, top + 8, fill=WALL, width=2)
        for r in range(Y):
            y = top + 12 + 10 * (Y - 1 - r)
            tl.create_text(8, y + 4, anchor="w", text="row {}".format(r), fill=DIM, font=("Helvetica", 7))
            for z in sc.zones:
                if z.lo <= r <= z.hi and z.t1 >= self.view0 and z.t0 <= self.view1:
                    x0 = self.tx(max(z.t0, self.view0))
                    x1 = self.tx(min(z.t1 if z.t1 != float("inf") else sc.t_end, self.view1))
                    col = self._zone_color(z.app)
                    tl.create_rectangle(x0, y, max(x1, x0 + 2), y + 8, fill=blend(PANEL, col, 0.7), outline="")
                    if z.clear_t is not None:
                        xc = self.tx(min(max(z.clear_t, self.view0), self.view1))
                        tl.create_rectangle(xc, y, max(x1, xc + 2), y + 8, fill=CLEARING, outline="")

    def tx(self, t):
        w = max(self.timeline.winfo_width(), 100)
        return 60 + (t - self.view0) / max(1e-9, self.view1 - self.view0) * (w - 80)

    def tt(self, x):
        w = max(self.timeline.winfo_width(), 100)
        return self.view0 + (x - 60) / (w - 80) * (self.view1 - self.view0)

    def draw_timeline(self):
        tl = self.timeline
        tl.delete("all")
        w = max(tl.winfo_width(), 100)
        v0, v1 = self.view0, self.view1
        tl.create_text(8, 14, anchor="w", text="time", fill=DIM, font=("Helvetica", 8))
        step = 10 ** max(0, int(math.log10(max(1, (v1 - v0) / 6))))
        while (v1 - v0) / step > 10:
            for mult in (2, 5, 10):
                if (v1 - v0) / (step * mult) <= 10:
                    step *= mult
                    break
            else:
                step *= 10
        t = math.ceil(v0 / step) * step
        while t <= v1:
            x = self.tx(t)
            tl.create_line(x, 22, x, 92, fill="#232a38")
            tl.create_text(x, 12, text="{:,}".format(int(t)), fill=DIM, font=("Helvetica", 7))
            t += step
        # background traffic density
        if self.sc.traffic:
            bins = [0] * 200
            for (t0, t1, *_r) in self.sc.traffic:
                if v0 <= t0 <= v1:
                    bins[min(199, int((t0 - v0) / (v1 - v0 + 1e-9) * 200))] += 1
            m = max(bins) or 1
            for k, n in enumerate(bins):
                if n:
                    x0 = 60 + k * (w - 80) / 200
                    tl.create_rectangle(x0, 90 - 14 * n / m, x0 + (w - 80) / 200, 90, fill="#2d3546", outline="")
        tl.create_text(8, 84, anchor="w", text="all", fill=DIM, font=("Helvetica", 8))
        # packets with waypoints / others
        for j in self.sc.journeys:
            if j.end < v0 or j.start > v1:
                continue
            row = 30 if j.nsr0 else (46 if j.svc in (0x40, 0x41, 0x43) else 60)
            x0, x1 = self.tx(j.start), max(self.tx(j.end + j.flits), self.tx(j.start) + 2)
            col = SERVICE_COLORS.get(j.svc, OTHER_COLOR)
            tl.create_rectangle(x0, row, x1, row + 9, fill=col, outline=SELECT if j is self.sel else "", width=2)
        tl.create_text(8, 34, anchor="w", text="routed", fill=GOLD, font=("Helvetica", 8))
        tl.create_text(8, 50, anchor="w", text="plain", fill=DIM, font=("Helvetica", 8))
        if self.sc.osz is not None:
            self._draw_osz_timeline(w)
        x = self.tx(self.T)
        tl.create_line(x, 18, x, self._tl_height() - 2, fill=GATE, width=2)
        tl.create_polygon(x - 5, 18, x + 5, 18, x, 25, fill=GATE, outline="")
        tl.create_text(w - 6, 84, anchor="e", text="wheel: zoom  right-drag: pan  f: fit", fill=FAINT, font=("Helvetica", 7))

    def _tl_click(self, e):
        self.set_time(self.tt(e.x))

    def _tl_zoom(self, e, factor):
        t = self.tt(e.x)
        span = max(20.0, (self.view1 - self.view0) * factor)
        f = (t - self.view0) / max(1e-9, self.view1 - self.view0)
        self.view0 = max(0.0, t - f * span)
        self.view1 = min(float(self.sc.t_end), self.view0 + span)
        self.draw_timeline()

    def _tl_pan_start(self, e):
        self._pan = (e.x, self.view0, self.view1)

    def _tl_pan(self, e):
        x0, v0, v1 = self._pan
        dt = (self.tt(x0) - self.tt(e.x))
        span = v1 - v0
        self.view0 = min(max(0.0, v0 + dt), self.sc.t_end - span)
        self.view1 = self.view0 + span
        self.draw_timeline()

    def fit_time(self):
        j = self.sel
        if j is not None:
            pad = max(20, (j.end - j.start) * 0.15)
            self.view0, self.view1 = max(0, j.start - pad), j.end + j.flits + pad
        else:
            self.view0, self.view1 = 0.0, float(self.sc.t_end)
        self.draw_timeline()

    # ------------------------------------------------------------------ list and details
    def _fill_list(self):
        self.tree.delete(*self.tree.get_children())
        for j in self.sc.journeys:
            if self.only_sr.get() and not j.nsr0:
                continue
            if self.only_drops.get() and j.dropped is None:
                continue
            wp = ",".join("{}{}".format(*w) for w in j.waypoints) or "-"
            end = "DROP" if j.dropped is not None else ("deliv" if j.delivered else ("periph" if j.to_periph else "-"))
            self.tree.insert("", "end", iid=str(j.id), values=(
                j.id, j.start, self.sc.svc_name(j.svc), j.origin_name, j.dest_name, wp,
                (j.exit or "-")[:1], (j.entry or "-")[:1] if j.delivered else "-", end, j.flits))

    def _tree_selected(self, e):
        s = self.tree.selection()
        if s:
            j = self.sc.journeys[int(s[0])]
            if j is not self.sel:
                self.select(j, from_tree=True)

    def select(self, j, from_tree=False):
        self.sel = j
        if j is None:
            self.tree.selection_remove(self.tree.selection())
            self.detail.delete("1.0", "end")
            self._build_events()
            self.fit_time()
            self.redraw()
            return
        if not from_tree and self.tree.exists(str(j.id)):
            self.tree.selection_set(str(j.id))
            self.tree.see(str(j.id))
        self._fill_detail(j)
        self._build_events()
        self.fit_time()
        self.set_time(j.start - 3)

    def _fill_detail(self, j):
        d, sc = self.detail, self.sc
        d.delete("1.0", "end")
        snd, rcv = (j.ids >> 16) & 0xFFFF, j.ids & 0xFFFF
        d.insert("end", "#{} {}  {} -> {}\n".format(j.id, sc.svc_name(j.svc), sc.task_name(snd), sc.task_name(rcv)))
        d.insert("end", "from {} to {}   exit {}   entry {}\n".format(
            j.origin_name, j.dest_name, j.exit or "-", (j.entry if j.delivered else None) or "-"))
        d.insert("end", "target {}  source {:08x}  {} flits, {} source-routing header(s)\n".format(
            "{:08x}".format(j.hdr), j.src, j.flits, j.nsr0))
        # only applications that exist: the IDs flit of a task binary or a kernel message is not a task pair
        known = set(sc.apps) | sc.secure_apps | {z.app for z in sc.zones}
        apps = {t >> 8 for t in (snd, rcv) if t != 0xFFFF and (t >> 8) and (t >> 8) in known}
        for app in sorted(apps):
            d.insert("end", "app {} {}({})\n".format(app, sc.app_name(app) + " " if sc.app_name(app) else "",
                                                     "secure" if app in sc.secure_apps else "not secure"))
        if j.headers:
            d.insert("end", "turns: " + ", ".join("({},{})".format((h >> 8) & 0xFF, h & 0xFF) for h in j.headers) + "\n", "loop")
        d.insert("end", "\n")
        self.detail_lines = []
        origin_seen = False
        for h in j.hops:
            where = "({},{})".format(h.x, h.y)
            if h.dir == "DMNI" and h.nsr > 0:
                text, tag = "into {}'s DMNI, header names it: TURN".format(where), "loop"
            elif h.dir == "DMNI":
                text, tag = "delivered to {}'s DMNI ({} flits)".format(where, h.flits), None
            elif h.port == "L":
                if origin_seen:
                    text, tag = "re-injected by {} ({} header(s) left, {} flits)".format(where, h.nsr, h.flits), "loop"
                else:
                    text, tag = "leaves {}'s DMNI ({} flits, {} header(s))".format(where, h.flits, h.nsr), None
            else:
                dx, dy = FROM[h.port]
                frm = "({},{})".format(h.x + dx, h.y + dy)
                if not (0 <= h.x + dx < sc.mx and 0 <= h.y + dy < sc.my):
                    frm = sc.periph_at(h.x, h.y, h.port)
                text, tag = "enters {} through {} (from {})".format(where, PORT_NAME[h.port], frm), None
                if (h.x + dx, h.y + dy) == j.origin and not any(
                        hh.dir == "IN" and hh.port != "L" for hh in j.hops[:j.hops.index(h)]):
                    text += "  <- exit " + PORT_NAME[OPPOSITE[h.port]]
                    tag = "gate"
                if (h.x, h.y) == j.dest and j.delivered:
                    text += "  <- ENTRY " + PORT_NAME[h.port]
                    tag = "gate"
            origin_seen = True
            line_no = int(d.index("end-1c").split(".")[0])
            d.insert("end", "{:>8} +{:<5} {}\n".format(h.t, h.t - j.start, text), tag or ())
            self.detail_lines.append((line_no, h.t))
            d.tag_add("hop{}".format(line_no), "{}.0".format(line_no), "{}.end".format(line_no))
            d.tag_bind("hop{}".format(line_no), "<Button-1>", lambda e, t=h.t: self.set_time(t))
        if j.dropped is not None:
            dd = j.dropped
            line_no = int(d.index("end-1c").split(".")[0])
            d.insert("end", "{:>8} +{:<5} DROPPED: {}\n".format(dd.t, dd.t - j.start, dd.describe()), "drop")
            self.detail_lines.append((line_no, dd.t))

    def _detail_now(self):
        self.detail.tag_remove("now", "1.0", "end")
        if self.sel is None or not getattr(self, "detail_lines", None):
            return
        cur = None
        for line_no, t in self.detail_lines:
            if t <= self.T:
                cur = line_no
        if cur:
            self.detail.tag_add("now", "{}.0".format(cur), "{}.end".format(cur))

    def step_journey(self, d):
        js = [j for j in self.sc.journeys if (not self.only_sr.get() or j.nsr0) and
              (not self.only_drops.get() or j.dropped is not None)]
        if not js:
            return
        if self.sel is None or self.sel not in js:
            k = 0 if d > 0 else len(js) - 1
        else:
            k = (js.index(self.sel) + d) % len(js)
        self.select(js[k])

    def replay_selected(self):
        j = self.sel
        if j is None:
            return
        self.set_time(j.start - 3)
        self.follow_end = j.end + j.flits + 3
        if not self.playing:
            self.toggle()

    # ------------------------------------------------------------------ time control
    def set_time(self, t):
        self.T = float(min(max(0, t), self.sc.t_end))
        if not (self.view0 <= self.T <= self.view1):
            span = self.view1 - self.view0
            self.view0 = max(0.0, self.T - span / 2)
            self.view1 = self.view0 + span
        self.redraw()

    def step_event(self, d):
        ev = self.sc.event_times
        if not ev:
            return
        if d > 0:
            i = bisect.bisect_right(ev, self.T + 0.5)
            self.set_time(ev[min(i, len(ev) - 1)])
        else:
            i = bisect.bisect_left(ev, self.T - 0.5) - 1
            self.set_time(ev[max(i, 0)])

    def toggle(self):
        self.playing = not self.playing
        self.play_btn.configure(text="Pause" if self.playing else "Play")
        if not self.playing:
            self.follow_end = None

    def _speed_changed(self, *_):
        self.speed = 10 ** self.speed_var.get()
        self.speed_lbl.configure(text="{:,.0f} cycles/s".format(self.speed))

    def _speed_mult(self, f):
        v = min(6, max(0, math.log10(self.speed * f)))
        self.speed_var.set(v)
        self._speed_changed()

    def _goto(self):
        try:
            self.set_time(float(self.goto.get().replace(",", "")))
        except ValueError:
            pass

    def _tick(self):
        if self.playing:
            dt = self.speed / self.fps
            nt = self.T + dt
            fx_busy = False
            if self.layers["fx"].get() and self.ev_times:
                k = bisect.bisect_right(self.ev_times, self.T)
                fx_busy = k > 0 and self.T - self.ev_times[k - 1] < self._cyc(FX_ARRIVE)
                ko = bisect.bisect_right(self.oev_times, self.T)
                fx_busy = fx_busy or (ko > 0 and self.T - self.oev_times[ko - 1] < self._cyc(OSZ_FX_MAX))
            if self.layers["skip"].get() and not fx_busy and not self.active_journeys(self.T) and not self._traffic_active(self.T):
                ev = self.sc.event_times
                i = bisect.bisect_right(ev, self.T + 0.5)
                if i < len(ev) and ev[i] - 4 > nt:
                    nt = ev[i] - 4          # nothing in flight: jump to just before the next packet
            if self.follow_end is not None and nt >= self.follow_end:
                nt = self.follow_end
                self.toggle()
            if nt >= self.sc.t_end:
                nt = self.sc.t_end
                if self.playing:
                    self.toggle()
            self.set_time(nt)
        self.root.after(int(1000 / self.fps), self._tick)

    def _traffic_active(self, T):
        i0 = bisect.bisect_left(self.seg_starts, T - self.max_len - 2)
        i1 = bisect.bisect_right(self.seg_starts, T + 2)
        return any(t0 - 2 <= T <= t1 for t0, t1, *_r in self.segs[i0:i1])

    def _status(self, active):
        names = ", ".join("#{} {}".format(j.id, self.sc.svc_name(j.svc)) for j in active[:6])
        self.status.configure(text="  space play/pause   <- -> previous/next packet event   shift+<- -> 100 cycles   "
                                   "up/down speed   n/p next/prev packet   r replay packet   f fit timeline        "
                                   "in flight: " + (names or "none"))

    def _canvas_click(self, e):
        """Click on a worm head or a path to select that packet."""
        best, bd = None, 18
        for j in self.active_journeys(self.T):
            if self.T > j.times[-1]:
                continue
            hx, hy = self.mv.at(j.times, j.points, self.T)
            d = math.hypot(hx - e.x, hy - e.y)
            if d < bd:
                best, bd = j, d
        if best is not None:
            self.select(best)

    def open_dialog(self):
        d = filedialog.askdirectory(title="Scenario folder (with debug/ and log/)", initialdir=self.sc.path)
        if d:
            self.load(d)

    def load(self, path):
        self.sc = Scenario(path)
        self.sel = None
        self.view0, self.view1 = 0.0, float(self.sc.t_end)
        self.root.title("meshviz - {}".format(self.sc.path))
        self.timeline.configure(height=self._tl_height())
        self._fill_list()
        self._rebuild()
        self.set_time(0)


def main():
    ap = argparse.ArgumentParser(description="Interactive replay of NoC traffic, source routing and OSZ zones (Memphis-V).")
    ap.add_argument("scenario", help="scenario folder, e.g. regression/tc_osz_attack/sc_osz_entrance")
    ap.add_argument("--time", type=float, default=None, help="start at this cycle")
    ap.add_argument("--journey", type=int, default=None, help="select packet number N (see the list)")
    ap.add_argument("--speed", type=float, default=30.0, help="replay speed in cycles per second (default 30)")
    ap.add_argument("--play", action="store_true", help="start playing")
    ap.add_argument("--geometry", default="1500x900", help="window size")
    ap.add_argument("--heat", action="store_true", help="start with the link-load layer on")
    ap.add_argument("--fps", type=float, default=30.0, help="redraws per second (lower it on a slow ssh -X link)")
    ap.add_argument("--no-traffic", action="store_true", help="start with the all-traffic layer off")
    ap.add_argument("--focus", action="store_true", help="effects only for the selected packet's conversation")
    ap.add_argument("--no-fx", action="store_true", help="start with the event effects off")
    ap.add_argument("--no-zones", action="store_true", help="start with the OSZ zone layer off")
    args = ap.parse_args()
    if not os.path.isdir(os.path.join(args.scenario, "debug")):
        sys.exit("{}: no debug/ folder - pass a scenario folder (tc_<name>/sc_<name>)".format(args.scenario))
    sc = Scenario(args.scenario)
    root = tk.Tk()
    root.geometry(args.geometry)
    App(root, sc, args)
    root.mainloop()


if __name__ == "__main__":
    main()
