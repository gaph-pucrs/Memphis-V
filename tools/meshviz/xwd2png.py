#!/usr/bin/env python3
"""
Converts an Xvfb framebuffer dump (XWD format, Xvfb -fbdir) to PNG, with no external modules.
Usage: xwd2png.py <Xvfb_screen0> <out.png> [x y w h]   (optional crop)
"""
import struct
import sys
import zlib


def main():
    data = open(sys.argv[1], "rb").read()
    h = struct.unpack(">25I", data[:100])
    header_size, _, _, depth, width, height = h[0:6]
    byte_order = h[7]
    bpp, bpl = h[11], h[12]
    ncolors = h[19]
    off = header_size + ncolors * 12
    if bpp != 32:
        sys.exit("only 32 bpp supported, got {}".format(bpp))

    x0, y0, w, hh = (0, 0, width, height)
    if len(sys.argv) == 7:
        x0, y0, w, hh = map(int, sys.argv[3:7])

    rows = []
    for y in range(y0, y0 + hh):
        line = data[off + y * bpl + x0 * 4: off + y * bpl + (x0 + w) * 4]
        row = bytearray([0])
        for i in range(0, len(line), 4):
            p = line[i:i + 4]
            if byte_order == 0:          # LSB first: B G R X
                row += bytes((p[2], p[1], p[0]))
            else:                        # MSB first: X R G B
                row += bytes((p[1], p[2], p[3]))
        rows.append(bytes(row))

    def chunk(tag, payload):
        return struct.pack(">I", len(payload)) + tag + payload + struct.pack(">I", zlib.crc32(tag + payload) & 0xFFFFFFFF)

    png = b"\x89PNG\r\n\x1a\n"
    png += chunk(b"IHDR", struct.pack(">IIBBBBB", w, hh, 8, 2, 0, 0, 0))
    png += chunk(b"IDAT", zlib.compress(b"".join(rows), 6))
    png += chunk(b"IEND", b"")
    open(sys.argv[2], "wb").write(png)


if __name__ == "__main__":
    main()
