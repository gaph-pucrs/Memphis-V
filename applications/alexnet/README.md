# AlexNet

## Generating the headers

`params/` and `dataset/` are not tracked. Generate them before building the app:

```
git clone --recurse-submodules -b lmfrnet-port git@github.com:gaph-pucrs/Memphis-V.git
cd Memphis-V/applications/alexnet
make headers PYTHON=<python with torch, torchvision, numpy>
```

The first run downloads ImageNetV2 (about 2.4 GB) and the AlexNet weights.
