#!/usr/bin/env python3
"""Checks a simulated OSZ scenario.

usage: osz_check.py SCENARIO_DIR RUN_LOG [--drops N] [--residue clean|dirty]

SCENARIO_DIR is the folder mint creates for the scenario (TESTCASE/SCENARIO),
RUN_LOG the console output of the simulation. The region is read from the
testcase copy mint keeps next to it. Checks:

  - the simulation ended and every application terminated
  - no kernel ERROR/FATAL line, no mapper WARNING line
  - the number of packets the zone wrapper dropped ([OSZ] ... dropped)
  - with a region:
      placement: secure tasks only inside the region, non-secure only at x >= X+1
      entrance:  every packet entering or leaving a secure application's rows
                 crosses the east port of PE (X-1, hi) of that application,
                 and no packet crosses between rows of different applications
  - with --residue, the osz_probe verdict (PAGE CLEAN / PAGE DIRTY)

Exits 0 when every check passes, 1 otherwise.
"""

import argparse
import glob
import os
import re
import sys

import yaml


def fail(failures, msg):
    failures.append(msg)
    print("   FAIL " + msg)


def ok(msg):
    print("   ok   " + msg)


def read_logs(d):
    logs = {}
    for f in glob.glob(os.path.join(d, "log", "log*.txt")):
        logs[f] = open(f, errors="ignore").read()
    return logs


def region_of(scenario_dir):
    tc_dir = os.path.dirname(os.path.normpath(scenario_dir))
    tc_name = os.path.basename(tc_dir)
    tc = yaml.safe_load(open(os.path.join(tc_dir, tc_name + ".yaml")))
    window = tc["hw"].get("osz_window")
    return (window[0], window[1]) if window else (0, 0)


def check_placement(logs, X, Y, failures):
    secure = set()
    place = {}
    for text in logs.values():
        secure.update(int(a) for a in re.findall(r"App (\d+) is secure", text))
        for x, y, app, task in re.findall(r"^\$\$\$_(\d+)x(\d+)_(\d+)_(\d+)_", text, re.M):
            app = int(app)
            if app != 0:
                place.setdefault(app, set()).add((int(task), int(x), int(y)))

    bad = []
    for app, pes in place.items():
        s = app in secure
        for task, x, y in pes:
            if (s and not (x < X and y < Y)) or (not s and x <= X):
                bad.append("app {} task {} on {},{} ({})".format(app, task, x, y, "secure" if s else "non-secure"))

    if bad:
        fail(failures, "placement: " + "; ".join(bad[:5]))
    else:
        ok("placement: {} application(s), every task on its side of the region".format(len(place)))


def check_entrance(scenario_dir, logs, X, Y, failures):
    claims = {}
    for text in logs.values():
        for a, lo, hi, t in re.findall(r"App (\d+) claimed region row\(s\) (\d+)\.\.(\d+) at (\d+)", text):
            claims[int(a)] = [int(lo), int(hi), int(t), float("inf")]
        for a, lo, hi, t in re.findall(r"App (\d+) released region row\(s\) (\d+)\.\.(\d+) at (\d+)", text):
            claims[int(a)][3] = int(t)

    def owner(row, t):
        for a, (lo, hi, t0, t1) in claims.items():
            if lo <= row <= hi and t0 <= t <= t1:
                return a, hi
        return None, None

    def inside(x, y):
        return x < X and y < Y

    nb = {0: (1, 0), 2: (-1, 0), 4: (0, 1), 6: (0, -1)}   # input port -> neighbour
    bad, hops = [], 0
    for line in open(os.path.join(scenario_dir, "debug", "traffic_router.txt")):
        f = line.split()
        if len(f) < 7:
            continue
        t, router, port = int(f[0]), int(f[1]), int(f[5])
        if port % 2 == 1 or port == 8:
            continue                    # BrLite entry, or re-injected by the local DMNI
        hops += 1
        x, y = router >> 8, router & 0xFF
        nx, ny = x + nb[port][0], y + nb[port][1]
        here, there = inside(x, y), inside(nx, ny)
        row = y if here else ny
        if here != there and owner(row, t)[0] is None:
            continue                    # A row owned by no app uses its own east port
        if here and not there:
            a, hi = owner(y, t)
            if not (port == 0 and x == X - 1 and y == hi):
                bad.append("t={} entered at {},{} port {}".format(t, x, y, port))
        elif there and not here:
            a, hi = owner(ny, t)
            if not (port == 2 and x == X and ny == hi):
                bad.append("t={} left from {},{} into {},{}".format(t, nx, ny, x, y))
        elif here and there and ny != y:
            if owner(y, t)[0] is None or owner(y, t)[0] != owner(ny, t)[0]:
                bad.append("t={} crossed rows {} -> {} at {},{}".format(t, ny, y, x, y))

    if bad:
        fail(failures, "entrance: {} violation(s): {}".format(len(bad), "; ".join(bad[:5])))
    else:
        ok("entrance: {} packet hop(s), all through the applications' entrances".format(hops))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("scenario_dir")
    ap.add_argument("run_log")
    ap.add_argument("--drops", type=int, default=0)
    ap.add_argument("--residue", choices=["clean", "dirty"])
    args = ap.parse_args()

    failures = []
    run = open(args.run_log, errors="ignore").read()

    if not os.path.isdir(os.path.join(args.scenario_dir, "log")):
        error = re.search(r"^ERROR:.*$", run, re.M)
        fail(failures, "scenario was not simulated" + (": " + error.group(0) if error else ""))
        return 1

    logs = read_logs(args.scenario_dir)
    alltext = "\n".join(logs.values())

    sim = re.search(r"Simulation time: ([\d.]+ms)", run)
    if sim:
        ok("simulation ended at " + sim.group(1))
    else:
        fail(failures, "simulation did not end")

    sc_name = os.path.basename(os.path.normpath(args.scenario_dir))
    sc = yaml.safe_load(open(os.path.join(args.scenario_dir, sc_name + ".yaml")))
    expected_apps = len(sc.get("apps") or [])
    terminated = len(set(re.findall(r"App (\d+) terminated at", alltext)))
    if terminated == expected_apps:
        ok("{} application(s) terminated".format(terminated))
    else:
        fail(failures, "{} of {} application(s) terminated".format(terminated, expected_apps))

    errors = re.findall(r"^.*(?:ERROR|FATAL).*$", alltext, re.M)
    if errors:
        fail(failures, "{} kernel ERROR/FATAL line(s): {}".format(len(errors), errors[0].strip()))
    else:
        ok("no kernel ERROR/FATAL")

    warnings = re.findall(r"^.*WARNING.*$", alltext, re.M)
    if warnings:
        fail(failures, "{} WARNING line(s): {}".format(len(warnings), warnings[0].strip()))
    else:
        ok("no WARNING")

    drops = len(re.findall(r"\[OSZ\].*dropped packet", run))
    if drops == args.drops:
        ok("{} packet(s) dropped by the zone wrapper, as expected".format(drops))
    else:
        fail(failures, "{} packet(s) dropped by the zone wrapper, expected {}".format(drops, args.drops))

    X, Y = region_of(args.scenario_dir)
    if X:
        check_placement(logs, X, Y, failures)
        check_entrance(args.scenario_dir, logs, X, Y, failures)

    if args.residue:
        verdicts = re.findall(r"PAGE (CLEAN|DIRTY)", alltext)
        want = args.residue.upper()
        if verdicts and all(v == want for v in verdicts):
            ok("residue: {} probe(s) report PAGE {}".format(len(verdicts), want))
        else:
            fail(failures, "residue: probes report {}, expected PAGE {}".format(verdicts or "nothing", want))

    return 1 if failures else 0


if __name__ == "__main__":
    sys.exit(main())
