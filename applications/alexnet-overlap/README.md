# AlexNet, overlapped

Same tasks and split as `applications/alexnet`, with two changes:

- **Round robin:** conv PE i of a layer with P conv PEs gets the input channels i, i+P, i+2P, ..
  instead of a contiguous block. `make headers` passes `--round-robin` to `gen_slices.py`.
- **Overlap, one output channel at a time:** each conv PE computes the partial sum of output
  channel c over its input channels (`conv_partial`, the local sum) and sends it to the join. The
  join adds the PEs' partials of c, applies the shift, bias, relu and maxpool, and sends c to the
  next layer's conv PE c % P, while the conv PEs compute c+1. A conv PE starts once it has all its
  input channels. The classifier still gets pool5 in one message.

The checksums must match the ones of `applications/alexnet`.

## Generating the headers

`params/` and `dataset/` are not tracked. Generate them before building the app:

```
cd Memphis-V/applications/alexnet-overlap
make headers PYTHON=<python with torch, torchvision, numpy>
```

The first run downloads ImageNetV2 (about 2.4 GB) and the AlexNet weights.
