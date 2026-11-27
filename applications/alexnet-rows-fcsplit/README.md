# AlexNet, row streaming, fc layers split

Same as `applications/alexnet-rows` (contiguous blocks of input channels per conv PE, every conv
layer streaming row by row), but fc6, fc7 and fc8 run on 8, 4 and 4 fc tasks instead of a single
classifier task (`FC<L>_PES` in `alexnet_split.h`):

- **fc task `fL_i`** (`fc_pe.h`): computes a contiguous block of `FC<L>_OUT/FC<L>_PES` output
  neurons over the layer's whole input: the fc, then the shift and bias, then the relu (none after
  fc8). Its weights are that block of rows of `fcL_weight`, `[OUT/P][IN]`.
- **Inputs:** j5 sends pool5 whole (CHW) to every f6. Every f6 sends its 512 fc6 outputs to every
  f7, and every f7 its 1024 fc7 outputs to every f8.
- **End:** f8_1..3 send their blocks to f8_0, which takes the class and then tells every other task
  that the app is done (`LAST` in `alexnet_split.h`), so they print their tables.
- **Checksums:** f7_0 and f8_0 hold the whole fc6 and fc7 outputs as their input, so they take those
  checksums; f8_0 also takes fc8's, the class and its score. They must match `applications/alexnet`.

The fc tasks run only after j5, when the conv tasks are done, so they take a third slot on the
conv PEs: 46 tasks + mapper_task need 3 tasks/PE. The largest task is now an f6 (about 18.6 MiB)
instead of the classifier (224 MiB), so the testcases use 32 MiB pages
(`sim/config/testcase_4x4_alexnet_fcsplit_*.yaml`).

## Generating the headers

`params/` and `dataset/` are not tracked. The conv slices and the dataset are the same as the ones
of `applications/alexnet-rows`; the fc weights are written in blocks (`gen_slices.py --fc-pes`).
To generate them:

```
cd Memphis-V/applications/alexnet-rows-fcsplit
make headers PYTHON=<python with torch, torchvision, numpy>
```

The first run downloads ImageNetV2 (about 2.4 GB) and the AlexNet weights.
