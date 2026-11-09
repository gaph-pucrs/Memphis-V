"""Reads the table the AlexNet tasks print (applications/alexnet/debug.h) from a run's logs.

After MAestro's prefix, every task prints a header and one row per measurement:

    $$$_<pe>_<app>_<task id>_hdr,task,inf,kind,step,peer,bytes,to,tf,cycles,mul,vmac,value
    $$$_<pe>_<app>_<task id>_row,c2_5,1,recv,,26,23328,66523911,169255207,102731296,0,0,

read_logs() puts the rows of every PE's log in one table, adds the pe and task id from the
prefix and replaces the peer ids by task names.

A run is a scenario, given as its path relative to sim/
(testcase_4x4_alexnet_v128/alexnet_v128_scenario). Its table is saved in

    results/alexnet/<testcase without testcase_>/<scenario>.csv

and read from there afterwards. It is rebuilt from the logs when a log is newer than the
table, or with --rebuild. --sim points at another sim/ dir: the runs are read from it and
the tables saved in its results/alexnet/.

--checksums also saves the checksums, one row per inference, in <scenario>_checksums.csv.
--compare also prints, for each checksum, whether every run has the same value, and exits
with 1 if one differs. Give it the runs with a glob: testcase_4x4_alexnet_*/alexnet_*_scenario.
--layers adds the runs to results/alexnet/layer_cycles.csv, which has one column per run with the
compute cycles of each layer (x10^6): the slowest conv PE plus the join; fc6-8: the
classifier. Its last row, total, is the whole run from the mapper's "App 1 started" to
"App 1 terminated". Only runs with one inference are supported. It also saves
results/alexnet/layer_breakdown.csv: each layer's cycles split into conv/FC (conv, psum and bias
steps; fc and bias), relu and maxpool, with the speedup over the scalar run. The runs already
in the tables stay in them, rebuilt from their saved tables; to start over, delete
layer_breakdown.csv.
--comm adds the runs to results/alexnet/comm.csv: one row per link (c2_* -> j2) and run, with
its messages, bytes, send and transfer cycles (see comm()). Runs stay in it like in --layers.
--print prints the tables.

Usage: python3 alexnet_log.py [options] <run> [<run> ...]   (see alexnet_log.md)
"""

import argparse
import glob
import io
import os
import re
import sys

import pandas as pd


SIM = os.path.dirname(os.path.abspath(__file__))

# where the tables are saved, relative to sim/
RESULTS = os.path.join("results", "alexnet")

# $$$_<pe>_<app>_<task id>_<kind>,<fields>
LINE = re.compile(r"\$\$\$_(\d+x\d+)_\d+_(\d+)_(hdr|row|row-overflow),(.*)")

# integer columns; peer is an id in the logs but a task name in the saved tables
INTS = ["id", "inf", "bytes", "to", "tf", "cycles", "mul", "vmac", "value"]

# the check steps, in network order: the joins' and the classifier's CHECKs
CHECKSUMS = ["conv1", "pool1", "conv2", "pool2", "conv3", "conv4", "conv5", "pool5",
             "fc6", "fc7", "fc8", "class", "val"]

# the parts of a layer's compute cycles, for --layers
PARTS = ["conv_fc", "relu", "maxpool"]


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
    """sim/results/alexnet/<testcase without testcase_>/<scenario>.csv"""
    scenario = os.path.basename(os.path.normpath(run))
    return os.path.join(sim, RESULTS, run_name(run), scenario + ".csv")


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


def part(step):
    """The part of its layer a compute step is counted in"""
    if step.startswith("relu"):
        return "relu"
    if step == "pool":
        return "maxpool"
    return "conv_fc"  # conv, psum, bias; fc6..8, bias6..8


def layer_parts(rows):
    """Compute cycles of each layer, split into PARTS.

    A conv layer is its slowest conv PE (all conv_fc) plus its join; fc6-8 is the classifier.
    """
    if rows.inf.nunique() > 1:
        sys.exit("layer cycles: only runs with one inference are supported")

    compute         = rows[rows.kind == "compute"].copy()
    compute["part"] = compute.step.map(part)

    # task -> its compute cycles in each part
    tasks = compute.pivot_table(index="task", columns="part", values="cycles", aggfunc="sum")
    tasks = tasks.reindex(columns=PARTS).fillna(0)

    layers = {}
    for layer in range(1, 6):
        conv_pes = tasks.conv_fc[tasks.index.str.fullmatch(f"c{layer}_\\d+")]

        join            = tasks.loc[f"j{layer}"].copy()
        join["conv_fc"] += conv_pes.max()
        layers[f"conv{layer}"] = join

    # the conv-only runs have no classifier
    if "classifier" in tasks.index:
        layers["fc6-8"] = tasks.loc["classifier"]

    table          = pd.DataFrame(layers).T
    table["total"] = table.sum(axis=1)
    return table


def layer_cycles(rows):
    """Compute cycles of each layer: the slowest conv PE plus the join; FC: the classifier"""
    return layer_parts(rows)["total"]


def breakdown(parts):
    """One row per layer and run: the cycles of each part (x10^6) and the speedup over scalar.

    parts is {run name: layer_parts table}. A run's scalar run is its name with the VLEN
    replaced by scalar (4x4_alexnet_v128 -> 4x4_alexnet_scalar); without it the speedups are
    empty.
    """
    columns = PARTS + ["total"]

    table = pd.concat(parts, names=["run", "layer"]).reset_index()
    table = table.sort_values("layer", kind="stable")  # conv1..conv5, fc6-8; runs in order

    # the scalar run's cycles next to each row
    table["scalar_run"] = table.run.str.replace(r"v\d+", "scalar", regex=True)
    scalar = table[["run", "layer"] + columns].rename(columns={"run": "scalar_run"})
    table  = table.merge(scalar, on=["scalar_run", "layer"], how="left",
                         suffixes=("", "_scalar"))

    for column in columns:
        table[column + "_speedup"] = (table[column + "_scalar"] / table[column]).round(2)
        table[column]              = (table[column] / 1e6).round(2)

    speedups = [column + "_speedup" for column in columns]
    return table[["layer", "run"] + columns + speedups]


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


def messages(rows):
    """One row per message: its send next to its receive.

    A send is matched with the receive of the same sender, receiver and inference. Columns:
    inf, sender, receiver, then pe, bytes, to, tf and cycles with _send and _recv, plus
      local:    sender and receiver on the same PE, so the message does not cross the NoC
      transfer: recv tf - max(recv to, send tf), the receive without the wait for the sender
    """
    columns = ["inf", "sender", "receiver", "pe", "bytes", "to", "tf", "cycles"]

    sends = rows[rows.kind == "send"].rename(columns={"task": "sender", "peer": "receiver"})
    recvs = rows[rows.kind == "recv"].rename(columns={"task": "receiver", "peer": "sender"})

    msgs = sends[columns].merge(recvs[columns], on=["inf", "sender", "receiver"],
                                suffixes=("_send", "_recv"), validate="one_to_one")

    msgs["local"]    = msgs.pe_send == msgs.pe_recv
    msgs["transfer"] = msgs.tf_recv - msgs[["to_recv", "tf_send"]].max(axis=1)
    return msgs


def link(task):
    """c2_3 -> c2_*: the conv PEs of a layer are one end of a link"""
    return re.sub(r"_\d+$", "_*", task)


def comm(rows):
    """One row per link (c2_* -> j2), in pipeline order: its messages, bytes and cycles.

    send:      send tf - to, the cycles memphis_send blocks the sender
    transfer:  see messages(); the messages within a PE are left out
    send_pct_compute: each sender's send cycles on the link as a % of its compute cycles,
               averaged over the link's senders
    """
    msgs         = messages(rows).sort_values("to_send")
    msgs["link"] = msgs.sender.map(link) + " -> " + msgs.receiver.map(link)

    links = msgs.groupby("link", sort=False)
    noc   = msgs[~msgs.local].groupby("link", sort=False)

    table = pd.DataFrame({
        "messages":                links.size(),
        "bytes_per_msg":           links.bytes_send.first(),
        "send_cycles_per_msg":     links.cycles_send.mean().round(),
        "transfer_cycles_per_msg": noc.transfer.mean().round(),
    })
    table["total_bytes"]              = table.messages * table.bytes_per_msg
    table["transfer_bytes_per_cycle"] = (table.bytes_per_msg
                                         / table.transfer_cycles_per_msg).round(2)

    # each sender's sends on the link, as a % of its compute
    compute    = rows[rows.kind == "compute"].groupby("task").cycles.sum()
    sends      = msgs.groupby(["link", "sender"]).cycles_send.sum().reset_index()
    sends["%"] = 100 * sends.cycles_send / sends.sender.map(compute)

    table["send_pct_compute"] = sends.groupby("link")["%"].mean().round(1)
    return table


def by_link(links):
    """One row per link and run, from {run name: comm table}; links in pipeline order"""
    table = pd.concat(links, names=["run", "link"]).reset_index()

    order = list(dict.fromkeys(table.link))  # as they first appear
    table = table.sort_values("link", key=lambda links: links.map(order.index), kind="stable")

    columns = [column for column in table.columns if column not in ("link", "run")]
    return table[["link", "run"] + columns]


def saved_run(name, sim=SIM):
    """4x4_alexnet_v128 -> testcase_4x4_alexnet_v128/<scenario>, from its table in RESULTS"""
    tables = glob.glob(os.path.join(sim, RESULTS, name, "*.csv"))
    tables = [table for table in tables if not table.endswith("_checksums.csv")]

    if len(tables) != 1:
        sys.exit(f"{name}: expected one saved table in {RESULTS}/{name}/, found {len(tables)}")

    scenario = os.path.basename(tables[0]).removesuffix(".csv")
    return f"testcase_{name}/{scenario}"


def table_runs(path, runs, sim=SIM):
    """The runs already in a saved table (its run column) and the given ones, sorted by VLEN"""
    saved = []
    if os.path.exists(path):
        names = pd.read_csv(path).run.unique()
        saved = [saved_run(name, sim) for name in names]

    runs = [os.path.normpath(run) for run in saved + runs]
    runs = list(dict.fromkeys(runs))  # without repeats
    return sorted(runs, key=vlen)


def vlen(run):
    """The run's VLEN, 0 for scalar: sorts the runs scalar, v64, v128, v256"""
    m = re.search(r"_v(\d+)", run_name(run))
    if m is None:
        return 0
    return int(m.group(1))


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
                        help="add the runs to results/alexnet/layer_cycles.csv and "
                             "layer_breakdown.csv")
    parser.add_argument("--comm", action="store_true",
                        help="add the runs to results/alexnet/comm.csv")
    args = parser.parse_args()

    pd.set_option("display.max_rows", None)
    pd.set_option("display.width", None)

    sums   = {}  # run name -> checksums table, for --compare
    layers = {}  # run name -> cycles per layer, for --layers
    parts  = {}  # run name -> cycles per layer and part, for --layers

    for run in args.runs:
        rows   = load(run, args.rebuild, args.sim)
        tables = {"rows": rows}

        if args.checksums or args.compare:
            tables["checksums"] = checksums(rows)
            sums[run_name(run)] = tables["checksums"]
            save(tables["checksums"], table_path(run, args.sim).replace(".csv", "_checksums.csv"))

        if args.print:
            for name, table in tables.items():
                print(f"{run}: {name}")
                print(table.to_string(index=False))

    results = os.path.join(args.sim, RESULTS)

    if args.layers:
        # the runs already in the layer tables stay in them
        for run in table_runs(os.path.join(results, "layer_breakdown.csv"), args.runs,
                              args.sim):
            rows = load(run, sim=args.sim)

            cycles          = layer_cycles(rows)
            cycles["total"] = app_cycles(find_scenario(run, args.sim))
            layers[run_name(run)] = cycles
            parts[run_name(run)]  = layer_parts(rows)

        # one row per layer, one column per run, in millions of cycles
        table = pd.DataFrame(layers).astype(float).div(1e6).round(2)
        table = table.rename_axis("layer").reset_index()

        save(table, os.path.join(results, "layer_cycles.csv"))
        if args.print:
            print("layer cycles (x10^6)")
            print(table.to_string(index=False))

        table = breakdown(parts)

        save(table, os.path.join(results, "layer_breakdown.csv"))
        if args.print:
            print("layer breakdown (x10^6)")
            print(table.to_string(index=False))

    if args.comm:
        path  = os.path.join(results, "comm.csv")
        links = {}  # run name -> comm table

        # the runs already in comm.csv stay in it
        for run in table_runs(path, args.runs, args.sim):
            links[run_name(run)] = comm(load(run, sim=args.sim))

        table = by_link(links)

        save(table, path)
        if args.print:
            print("communication per link")
            print(table.to_string(index=False))

    if args.compare and not compare(sums):
        sys.exit(1)
