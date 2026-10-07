"""Per-PE memory footprint of a Memphis-V testcase.

Each PE owns a private IMEM and DMEM, sized IMEM_PAGE_SZ * (TASKS_PER_PE + 1)
and DMEM_PAGE_SZ * (TASKS_PER_PE + 1) in Phivers/sim/PhiversTB.sv. Page 0 holds
MAestro, pages 1..TASKS_PER_PE hold one task each. This script reports, for
every PE, how much of that provisioned memory the mapped tasks actually use.

Per-task sizes come from the <task>.txt header the app Makefile emits:
  line 1: .text size   -> instruction page
  line 2: .data size   -> data page (rodata + data)
  line 3: _end - __bss_start (.bss)
  line 4: entry point
The stack starts at the top of the data page and grows down; the heap starts at
_end and grows up (MAestro/src/task_control.c:71,87), so data+bss is the static
floor of the data-page occupancy, not the peak.

If the testcase was built with MEM_PROFILE enabled, <scenario>/debug/ram holds a
per-PE occupancy profile measured during the run. It is merged in, giving the
measured footprint including heap and stack.

Usage: python3 mem_analysis.py [testcase_dir] [scenario_name]
"""

import csv
import os
import sys

import yaml

sim_dir = os.path.dirname(os.path.abspath(__file__))
testcase = sys.argv[1] if len(sys.argv) > 1 else "testcase_3x3_hybrid"
scenario = sys.argv[2] if len(sys.argv) > 2 else "3x3_hybrid_scenario"

tc_path = os.path.join(sim_dir, testcase)
sc_path = os.path.join(tc_path, scenario, "{}.yaml".format(scenario))

with open(os.path.join(sim_dir, "config", "{}.yaml".format(testcase))) as f:
    tc_yaml = yaml.safe_load(f)

with open(sc_path) as f:
    sc_yaml = yaml.safe_load(f)

page_inst = tc_yaml["hw"]["page_size_inst_KB"] * 1024
page_data = tc_yaml["hw"]["page_size_data_KB"] * 1024
tasks_per_pe = tc_yaml["hw"]["tasks_per_PE"]
n_x, n_y = tc_yaml["hw"]["mpsoc_dimension"]

imem_sz = page_inst * (tasks_per_pe + 1)
dmem_sz = page_data * (tasks_per_pe + 1)


def task_sizes(txt):
    """(text, data, bss) from the first three lines of a task .txt."""
    with open(txt) as f:
        head = [int(next(f).strip(), 16) for _ in range(3)]
    return tuple(head)


def kernel_sizes():
    """(text, data, bss) of MAestro, which occupies page 0 of every PE."""
    text = os.path.getsize(os.path.join(tc_path, "MAestro", "ikernel.bin"))
    data = os.path.getsize(os.path.join(tc_path, "MAestro", "dkernel.bin"))
    syms = {}
    with os.popen("nm {}".format(os.path.join(tc_path, "MAestro", "kernel.elf"))) as p:
        for line in p:
            parts = line.split()
            if len(parts) == 3:
                syms[parts[2]] = int(parts[0], 16)
    return text, data, syms["_end"] - syms["__bss_start"]


def read_profile():
    """Runtime occupancy from MEM_PROFILE, keyed by (x, y, "I"/"D", page).

    Absent if the testcase was built without MEM_PROFILE.
    """
    ram_dir = os.path.join(tc_path, scenario, "debug", "ram")
    profile = {}
    if not os.path.isdir(ram_dir):
        return profile
    for name in os.listdir(ram_dir):
        if not name.endswith("_profile.csv"):
            continue
        pe, mem, _ = name.rsplit("_", 2)
        x, y = (int(v) for v in pe.split("x"))
        with open(os.path.join(ram_dir, name)) as f:
            for row in csv.DictReader(f):
                profile[(x, y, mem, int(row["page"]))] = {
                    k: int(v) for k, v in row.items()
                }
    return profile


profile = read_profile()


# task name -> (x, y), from the scenario static mappings
mapping = {}
for app in sc_yaml.get("apps", []):
    for task, pe in app.get("static_mapping", {}).items():
        mapping[(app["name"], task)] = tuple(pe)
for entry in sc_yaml.get("management", []):
    if "static_mapping" in entry:
        mapping[("management", entry["task"])] = tuple(entry["static_mapping"])


def task_txt(app, task):
    if app == "management":
        return os.path.join(tc_path, "management", task, "{}.txt".format(task))
    apps = os.path.join(tc_path, "applications")
    for d in os.listdir(apps):
        if not os.path.isdir(os.path.join(apps, d)):
            continue
        if d == app or d.startswith("{}_".format(app)):
            return os.path.join(apps, d, "{}.txt".format(task))
    raise FileNotFoundError(app)


k_text, k_data, k_bss = kernel_sizes()


def match_pages(x, y, entries):
    """Assign profiled data pages to tasks.

    MAestro always owns page 0; the remaining pages are handed out by
    page_acquire() in allocation order, which the scenario file does not
    record. A task's profiled low_run_end is its .data + .bss + heap
    high-water mark, so the page whose low_run_end is the smallest value
    still at or above the task's static .data + .bss is its page.
    """
    pages = sorted(
        p for (px, py, mem, p) in profile
        if (px, py, mem) == (x, y, "D") and p != 0
    )
    free = set(pages)
    owner = {0: "MAestro"}
    for name, _, static_d in sorted(entries, key=lambda e: -e[2]):
        if name == "MAestro":
            continue
        fits = [
            p for p in free
            if profile[(x, y, "D", p)]["low_run_end"] >= static_d
        ]
        if not fits:
            continue
        best = min(fits, key=lambda p: profile[(x, y, "D", p)]["low_run_end"])
        owner[best] = name
        free.discard(best)
    return owner


rows = []
for y in range(n_y):
    for x in range(n_x):
        tasks = sorted(k for k, v in mapping.items() if v == (x, y))
        entries = [("MAestro", k_text, k_data + k_bss)]
        for app, task in tasks:
            t, d, b = task_sizes(task_txt(app, task))
            entries.append((task, t, d + b))

        inst = sum(e[1] for e in entries)
        data = sum(e[2] for e in entries)

        row = {
            "pe": "{}x{}".format(x, y),
            "tasks": " ".join(e[0] for e in entries),
            "imem_static_B": inst,
            "imem_size_B": imem_sz,
            "dmem_static_B": data,
            "dmem_size_B": dmem_sz,
            "total_static_B": inst + data,
            "detail": "; ".join(
                "{}:i={}B,d={}B".format(n, i, d) for n, i, d in entries
            ),
            "entries": entries,
        }

        if profile:
            owner = match_pages(x, y, entries)
            imem_meas = sum(
                v["bytes_touched"] for (px, py, mem, _), v in profile.items()
                if (px, py, mem) == (x, y, "I")
            )
            dmem_meas = sum(
                v["bytes_touched"] for (px, py, mem, _), v in profile.items()
                if (px, py, mem) == (x, y, "D")
            )
            stack = sum(
                v["page_sz"] - v["high_run_start"]
                for (px, py, mem, _), v in profile.items()
                if (px, py, mem) == (x, y, "D")
            )
            row.update({
                "imem_measured_B": imem_meas,
                "dmem_measured_B": dmem_meas,
                "stack_B": stack,
                "total_measured_B": imem_meas + dmem_meas,
                "total_measured_MB": round(
                    (imem_meas + dmem_meas) / 1e6, 3
                ),
                "owner": owner,
            })
        rows.append(row)

measured = bool(profile)

print("testcase {} / scenario {}".format(testcase, scenario))
print("page: inst={}B data={}B, tasks_per_PE={} -> IMEM={}B DMEM={}B per PE".format(
    page_inst, page_data, tasks_per_pe, imem_sz, dmem_sz))
print("MAestro (page 0 of every PE): text={}B data={}B bss={}B".format(
    k_text, k_data, k_bss))
if measured:
    blk = next(iter(profile.values()))["block_sz"]
    print("MEM_PROFILE granularity: {}B blocks".format(blk))
else:
    print("MEM_PROFILE not found: static sizes only, no heap or stack")
print()

if measured:
    hdr = "{:<5} {:<24} {:>10} {:>10} {:>11} {:>11} {:>9} {:>7}"
    print(hdr.format("PE", "tasks", "IMEM(B)", "IMEM~(B)", "DMEM(B)",
                     "DMEM~(B)", "stack(B)", "%DMEM"))
    for r in rows:
        print(hdr.format(
            r["pe"], r["tasks"], r["imem_static_B"], r["imem_measured_B"],
            r["dmem_static_B"], r["dmem_measured_B"], r["stack_B"],
            round(100.0 * r["dmem_measured_B"] / dmem_sz, 3)))
    print()
    print("(static columns are .text / .data+.bss; ~ columns are measured,")
    print(" rounded up to {}B blocks, and include heap and stack)".format(blk))
else:
    hdr = "{:<5} {:<24} {:>10} {:>8} {:>11} {:>8} {:>11}"
    print(hdr.format("PE", "tasks", "IMEM(B)", "%", "DMEM(B)", "%", "total(B)"))
    for r in rows:
        print(hdr.format(
            r["pe"], r["tasks"], r["imem_static_B"],
            round(100.0 * r["imem_static_B"] / imem_sz, 4),
            r["dmem_static_B"],
            round(100.0 * r["dmem_static_B"] / dmem_sz, 4),
            r["total_static_B"]))

key = "dmem_measured_B" if measured else "dmem_static_B"
print()
print("peak DMEM PE: {} ({} B)".format(
    max(rows, key=lambda r: r[key])["pe"], max(r[key] for r in rows)))

if measured:
    print()
    print("per-page detail (data pages; low_run_end = data+bss+heap,")
    print("stack = page_sz - high_run_start)")
    phdr = "  {:<5} {:>5} {:<14} {:>12} {:>12} {:>10}"
    print(phdr.format("PE", "page", "owner", "static(B)", "low_run_end", "stack(B)"))
    for r in rows:
        x, y = (int(v) for v in r["pe"].split("x"))
        static = {n: d for n, _, d in r["entries"]}
        for p in sorted(pp for (px, py, mem, pp) in profile
                        if (px, py, mem) == (x, y, "D")):
            v = profile[(x, y, "D", p)]
            name = r["owner"].get(p, "-")
            print(phdr.format(
                r["pe"], p, name, static.get(name, 0), v["low_run_end"],
                v["page_sz"] - v["high_run_start"]))

# Pages are independent, so the minimum viable page size is set by the single
# largest page, not by the per-PE sum.
if measured:
    max_page_i = max(
        v["hi_addr"] for (_, _, mem, _), v in profile.items() if mem == "I")
    max_page_d = max(
        v["low_run_end"] + (v["page_sz"] - v["high_run_start"])
        for (_, _, mem, _), v in profile.items() if mem == "D")
else:
    max_page_i = max(e[1] for r in rows for e in r["entries"])
    max_page_d = max(e[2] for r in rows for e in r["entries"])
print()
print("largest single page: inst={}B data={}B".format(max_page_i, max_page_d))
print("minimum page_size_*_KB that still fits: inst={} data={}".format(
    -(-max_page_i // 1024), -(-max_page_d // 1024)))

out = os.path.join(sim_dir, "results", "lmfrnet_3x3", "memory_per_pe.csv")
os.makedirs(os.path.dirname(out), exist_ok=True)
with open(out, "w", newline="") as f:
    skip = ("entries", "owner")
    fields = [k for k in rows[0] if k not in skip]
    w = csv.DictWriter(f, fieldnames=fields, extrasaction="ignore")
    w.writeheader()
    w.writerows(rows)
print("wrote {}".format(out))
