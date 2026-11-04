#!/bin/bash
# Screenshot of meshviz on a virtual display (Xvfb), for documentation and checks without X.
# Usage: tools/meshviz/viz_shot.sh <out.png> <seconds to wait> <meshviz args...>
# The framebuffer goes to $TMPDIR (default tools/meshviz/.tmp, on the same disk as the repository):
# the root disk holding /tmp is shared and often full. The display is :79, or $VIZ_DISPLAY.
HERE=$(cd $(dirname $0) && pwd)
OUT=$1; WAIT=$2; shift 2
export TMPDIR=${TMPDIR:-$HERE/.tmp}
DISP=${VIZ_DISPLAY:-:79}
FB=$TMPDIR/viz_fb
mkdir -p $FB
Xvfb $DISP -screen 0 1600x1000x24 -fbdir $FB > /dev/null 2>&1 &
XPID=$!
sleep 2
DISPLAY=$DISP timeout $((WAIT + 5)) python3 $HERE/meshviz.py "$@" --geometry 1600x1000+0+0 > $FB/meshviz.log 2>&1 &
sleep $WAIT
python3 $HERE/xwd2png.py $FB/Xvfb_screen0 $OUT
kill $XPID 2> /dev/null
wait 2> /dev/null
tail -3 $FB/meshviz.log
echo "saved $OUT"
