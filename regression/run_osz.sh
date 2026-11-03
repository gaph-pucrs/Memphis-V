#!/usr/bin/env bash
#
# OSZ regression: builds and simulates every OSZ case and checks it with
# osz_check.py. Each case runs in its own folder under WORK_DIR, so they can
# run in parallel.
#
# usage: run_osz.sh [-j JOBS] [--long] [WORK_DIR]
#   -j JOBS   cases run at the same time (default 4)
#   --long    also run sc_osz_rows (about 20 minutes)
#   WORK_DIR  default ./osz_runs
#
# Needs the toolchain and mint already set up, e.g.:
#   source /usr/share/Modules/init/bash
#   module load riscv64-elf/15.2.0-gaph verilator/5.024-CXX20
#   source /opt/rh/gcc-toolset-13/enable
#   source ~/memphis-venv/bin/activate
#   export MEMPHIS_PATH=<path to Memphis-V>

set -u

JOBS=4
LONG=0
WORK=./osz_runs
while [ $# -gt 0 ]; do
	case "$1" in
		-j) JOBS="$2"; shift 2;;
		--long) LONG=1; shift;;
		*) WORK="$1"; shift;;
	esac
done

HERE=$(cd "$(dirname "$0")" && pwd)
mkdir -p "$WORK"
WORK=$(cd "$WORK" && pwd)

# name  testcase  scenario  checker options
CASES=(
	"basic     tc_osz        sc_osz           --drops 0"
	"entrance  tc_osz        sc_osz_entrance  --drops 0"
	"noosz     tc_noosz      sc_osz           --drops 0"
	"attack    tc_osz_attack sc_osz_entrance  --drops 4"
	"clear     tc_osz        sc_osz_clear     --drops 0 --residue clean"
	"dirty     tc_noosz      sc_osz_clear     --drops 0 --residue dirty"
	"abort     tc_osz        sc_osz_abort     --drops 0"
)
[ "$LONG" = 1 ] && CASES+=("rows      tc_osz        sc_osz_rows      --drops 0")

run_case() {
	local name=$1 tc=$2 sc=$3; shift 3
	local dir="$WORK/$name"
	rm -rf "$dir"; mkdir -p "$dir"; cd "$dir"
	mint all "$HERE/$tc.yaml" "$HERE/apps_osz.yaml" "$HERE/$sc.yaml" --nogui --skipdebug > run.log 2>&1
	{
		echo "== $name: $tc + $sc"
		python3 "$HERE/osz_check.py" "$dir/$tc/$sc" run.log "$@"
		echo "result=$?"
	} > check.log 2>&1
}

running=0
for c in "${CASES[@]}"; do
	run_case $c &
	running=$((running + 1))
	if [ "$running" -ge "$JOBS" ]; then
		wait -n
		running=$((running - 1))
	fi
done
wait

status=0
echo
for c in "${CASES[@]}"; do
	name=${c%% *}
	cat "$WORK/$name/check.log"
	grep -q "^result=0$" "$WORK/$name/check.log" || status=1
done

echo
for c in "${CASES[@]}"; do
	name=${c%% *}
	if grep -q "^result=0$" "$WORK/$name/check.log"; then
		printf "PASS  %s\n" "$name"
	else
		printf "FAIL  %s  (see %s)\n" "$name" "$WORK/$name"
	fi
done

exit $status
