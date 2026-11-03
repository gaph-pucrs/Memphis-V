"""Reads the table the AlexNet tasks print (applications/alexnet/debug.h) from a run's logs.

After MAestro's prefix, every task prints a header and one row per measurement:

    $$$_<pe>_<app>_<task id>_hdr,task,inf,kind,step,peer,bytes,to,tf,cycles,mul,vmac,value
    $$$_<pe>_<app>_<task id>_row,c2_5,1,recv,,26,23328,66523911,169255207,102731296,0,0,

read_logs() puts the rows of every PE's log in one table, adds the pe and task id from the
prefix and replaces the peer ids by task names.

A run is a scenario, given as its path relative to sim/
(testcase_4x4_alexnet_v128/alexnet_v128_scenario). Its table is saved in

    experiments/<testcase without testcase_>/<scenario>.csv

and read from there afterwards. It is rebuilt from the logs when a log is newer than the
table, or with --rebuild. --sim points at another sim/ dir, e.g. one with test logs: the runs
are read from it and the tables saved in its experiments/.

Usage: python3 alexnet_log.py [--rebuild] [--sim <dir>] <run> [<run> ...]
"""

import argparse
import glob
import io
import os
import re
import sys

import pandas as pd


SIM = os.path.dirname(os.path.abspath(__file__))

# $$$_<pe>_<app>_<task id>_<kind>,<fields>
LINE = re.compile(r"\$\$\$_(\d+x\d+)_\d+_(\d+)_(hdr|row|row-overflow),(.*)")

# integer columns; peer is an id in the logs but a task name in the saved tables
INTS = ["id", "inf", "bytes", "to", "tf", "cycles", "mul", "vmac", "value"]


def to_signed(v):
    """debug.h prints every value with %u: back to a signed 32-bit int"""
    if v >= 2**31:
        return v - 2**32
    return v


def read_csv(source, ints=INTS):
    """A table, from the logs' rows or from a saved file"""
    dtypes = {column: "Int64" for column in ints}
    return pd.read_csv(source, dtype=dtypes)


def log_files(scenario_dir):
    """Every PE's log of the scenario"""
    return sorted(glob.glob(os.path.join(scenario_dir, "log", "log*.txt")))


def read_logs(scenario_dir):
    """One row per measurement of every task in the scenario"""
    header = None
    lines  = []

    for path in log_files(scenario_dir):
        for line in open(path, errors="replace"):
            m = LINE.match(line.rstrip("\n"))
            if not m:
                continue

            pe, task_id, kind, fields = m.groups()

            if kind == "hdr":
                header = "pe,id," + fields
            elif kind == "row":
                lines.append(f"{pe},{task_id},{fields}")
            else:
                task, dropped = fields.split(",")
                print(f"warning: {task} dropped {dropped} rows", file=sys.stderr)

    if header is None:
        sys.exit(f"{scenario_dir}: no table in the logs")

    csv  = "\n".join([header] + lines)
    rows = read_csv(io.StringIO(csv), INTS + ["peer"])

    # peer ids -> task names
    names = rows.groupby("id").task.first()
    rows["peer"] = rows.peer.map(names)

    # the classifier's score is signed
    val = (rows.kind == "check") & (rows.step == "val")
    rows.loc[val, "value"] = rows.loc[val, "value"].map(to_signed)

    return rows


def find_scenario(run, sim=SIM):
    """sim/<testcase>/<scenario>: the scenario dir"""
    scenario_dir = os.path.join(sim, run)

    if not os.path.isdir(os.path.join(scenario_dir, "log")):
        sys.exit(f"{run}: no logs in {scenario_dir}")

    return scenario_dir


def table_path(run, sim=SIM):
    """sim/experiments/<testcase without testcase_>/<scenario>.csv"""
    testcase, scenario = os.path.split(os.path.normpath(run))
    testcase = testcase.removeprefix("testcase_")
    return os.path.join(sim, "experiments", testcase, scenario + ".csv")


def is_outdated(table, scenario_dir):
    """True if the table was never saved, or a log changed after it was"""
    if not os.path.exists(table):
        return True

    saved = os.path.getmtime(table)
    return any(os.path.getmtime(log) > saved for log in log_files(scenario_dir))


def load(run, rebuild=False, sim=SIM):
    """The run's table: read from its saved file, or rebuilt from the logs and saved"""
    scenario_dir = find_scenario(run, sim)
    table        = table_path(run, sim)

    if rebuild or is_outdated(table, scenario_dir):
        print(f"building {table}", file=sys.stderr)

        rows = read_logs(scenario_dir)
        os.makedirs(os.path.dirname(table), exist_ok=True)
        rows.to_csv(table, index=False)
        return rows

    print(f"reading {table}", file=sys.stderr)
    return read_csv(table)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("runs", nargs="+",
                        help="scenario, relative to sim/ "
                             "(testcase_4x4_alexnet_v128/alexnet_v128_scenario)")
    parser.add_argument("--rebuild", action="store_true",
                        help="rebuild the tables from the logs")
    parser.add_argument("--sim", default=SIM,
                        help="the sim/ dir to read the runs from and save the tables in "
                             "(default: the one this script is in)")
    args = parser.parse_args()

    pd.set_option("display.max_rows", None)
    pd.set_option("display.width", None)

    for run in args.runs:
        print(run)
        print(load(run, args.rebuild, args.sim).to_string(index=False))
