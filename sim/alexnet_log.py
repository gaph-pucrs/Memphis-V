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

--checksums also saves the checksums, one row per inference, in <scenario>_checksums.csv.
--compare also prints, for each checksum, whether every run has the same value, and exits
with 1 if one differs. Give it the runs with a glob: testcase_4x4_alexnet_*/alexnet_*_scenario.
--layers saves, in experiments/layer_cycles.csv, one column per run with the compute cycles of
each layer (x10^6): the slowest conv PE plus the join; fc6-8: the classifier. Its last row,
total, is the whole run from the mapper's "App 1 started" to "App 1 terminated". Only runs
with one inference are supported.
--print prints the tables.

Usage: python3 alexnet_log.py [--rebuild] [--print] [--sim <dir>] <run> [<run> ...]
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

# the check steps, in network order: the joins' and the classifier's CHECKs
CHECKSUMS = ["conv1", "pool1", "conv2", "pool2", "conv3", "conv4", "conv5", "pool5",
             "fc6", "fc7", "fc8", "class", "val"]


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


def run_name(run):
    """testcase_4x4_alexnet_v128/alexnet_v128_scenario -> 4x4_alexnet_v128"""
    testcase = os.path.dirname(os.path.normpath(run))
    return testcase.removeprefix("testcase_")


def table_path(run, sim=SIM):
    """sim/experiments/<testcase without testcase_>/<scenario>.csv"""
    scenario = os.path.basename(os.path.normpath(run))
    return os.path.join(sim, "experiments", run_name(run), scenario + ".csv")


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


def checksums(rows):
    """One row per inference, one column per checksum, in network order"""
    checks = rows[rows.kind == "check"]
    table  = checks.pivot(index="inf", columns="step", values="value")

    # steps a run doesn't have (no classifier, no val) are left out
    columns = [step for step in CHECKSUMS if step in table.columns]
    table   = table[columns]

    table.columns.name = None
    return table.reset_index()


def compare(sums):
    """Prints whether each checksum is the same in every run; True if they all are.

    sums is {run name: checksums table}. A checksum is compared only in the runs that have it
    (the conv-only runs have no fc6..class).
    """
    table     = pd.concat(sums, names=["run"]).reset_index(level="run")
    all_match = True

    for step in CHECKSUMS:
        if step not in table.columns:
            continue

        # per inference, the runs that have this checksum
        inferences = table.dropna(subset=[step]).groupby("inf")
        differ     = [(inf, runs) for inf, runs in inferences if runs[step].nunique() > 1]

        if not differ:
            print(f"{step:6} match")
            continue

        all_match = False
        for inf, runs in differ:
            values = "   ".join(f"{run} {value}" for run, value in zip(runs.run, runs[step]))
            print(f"{step:6} DIFFER  inference {inf}:   {values}")

    return all_match


def layer_cycles(rows):
    """Compute cycles of each layer: the slowest conv PE plus the join; FC: the classifier"""
    if rows.inf.nunique() > 1:
        sys.exit("layer cycles: only runs with one inference are supported")

    compute = rows[rows.kind == "compute"]
    tasks   = compute.groupby("task").cycles.sum()  # task -> its compute cycles

    layers = {}
    for layer in range(1, 6):
        conv_pes = tasks[tasks.index.str.fullmatch(f"c{layer}_\\d+")]
        layers[f"conv{layer}"] = conv_pes.max() + tasks[f"j{layer}"]

    # the conv-only runs have no classifier
    layers["fc6-8"] = tasks.get("classifier")

    return pd.Series(layers)


def app_cycles(scenario_dir):
    """The whole run, communication included: App 1 started -> terminated (the mapper's log)"""
    start = end = None

    for path in log_files(scenario_dir):
        for line in open(path, errors="replace"):
            if m := re.search(r"App 1 started at (-?\d+)", line):
                start = int(m.group(1)) % 2**32  # printed as a signed 32-bit int
            elif m := re.search(r"App 1 terminated at time (-?\d+)", line):
                end = int(m.group(1)) % 2**32

    if start is None or end is None:
        return None
    return end - start


def save(table, path):
    """Writes a table derived from the rows, next to the rows' table"""
    print(f"saving {path}", file=sys.stderr)
    table.to_csv(path, index=False)


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
    parser.add_argument("--print", action="store_true",
                        help="print the tables")
    parser.add_argument("--checksums", action="store_true",
                        help="save the checksums in <scenario>_checksums.csv")
    parser.add_argument("--compare", action="store_true",
                        help="check that every run has the same checksums (implies --checksums)")
    parser.add_argument("--layers", action="store_true",
                        help="save the compute cycles per layer of every run in "
                             "experiments/layer_cycles.csv")
    args = parser.parse_args()

    pd.set_option("display.max_rows", None)
    pd.set_option("display.width", None)

    sums   = {}  # run name -> checksums table, for --compare
    layers = {}  # run name -> cycles per layer, for --layers

    for run in args.runs:
        rows   = load(run, args.rebuild, args.sim)
        tables = {"rows": rows}

        if args.checksums or args.compare:
            tables["checksums"] = checksums(rows)
            sums[run_name(run)] = tables["checksums"]
            save(tables["checksums"], table_path(run, args.sim).replace(".csv", "_checksums.csv"))

        if args.layers:
            cycles          = layer_cycles(rows)
            cycles["total"] = app_cycles(find_scenario(run, args.sim))
            layers[run_name(run)] = cycles

        if args.print:
            for name, table in tables.items():
                print(f"{run}: {name}")
                print(table.to_string(index=False))

    if args.layers:
        # one row per layer, one column per run, in millions of cycles
        table = pd.DataFrame(layers).astype(float).div(1e6).round(2)
        table = table.rename_axis("layer").reset_index()

        save(table, os.path.join(args.sim, "experiments", "layer_cycles.csv"))
        if args.print:
            print("layer cycles (x10^6)")
            print(table.to_string(index=False))

    if args.compare and not compare(sums):
        sys.exit(1)
