# AlexNet, row streaming

Same tasks and split as `applications/alexnet` (contiguous blocks of input channels per conv PE),
but every task works one row at a time, so all conv layers run at once:

- **Conv PE:** goes over its output rows in order. As soon as it has the input rows under output
  row y (rows up to y*s+K-1-p), it computes the partial sum of row y over its input channels, for
  every output channel, and sends it to the join. Input rows come from the previous join, one
  message per row with the PE's block of channels. conv1's image is compiled in.
- **Join:** adds the PEs' partials of row y, applies the shift, bias and relu, and sends each
  next-layer conv PE its block of channels of every output row that is now complete: row y, or,
  after a maxpool, each pooled row whose 3x3 window ends at row y. j5 sends the classifier the
  whole pool5 output in one message, as before.

The joins keep their output as [H][C][W], so a row's channel block is contiguous; j5's output is
CHW, as the classifier expects. The checksums must match the ones of `applications/alexnet`.

## Generating the headers

`params/` and `dataset/` are not tracked. They are the same as the ones of `applications/alexnet`
(same split); to generate them:

```
cd Memphis-V/applications/alexnet-rows
make headers PYTHON=<python with torch, torchvision, numpy>
```

The first run downloads ImageNetV2 (about 2.4 GB) and the AlexNet weights.
