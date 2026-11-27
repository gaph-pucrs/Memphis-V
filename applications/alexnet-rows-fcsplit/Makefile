include ../../active_config.mk

include ../common/common.mk

# params/ and dataset/ are generated, not tracked. Regenerate them from the source tree with
#   make -C applications/alexnet-rows-fcsplit headers PYTHON=<python with torch>
UTILS  ?= ../../tools/alexnet-utils
PYTHON ?= python3
comma   = ,
PES     = $(shell awk '/^\#define CONV[1-5]_PES/ { print $$3 }' alexnet_split.h | paste -sd,)
FC_PES  = $(shell awk '/^\#define FC[6-8]_PES/ { print $$3 }' alexnet_split.h | paste -sd,)
IMAGENET = $(UTILS)/autodl-tmp/data-imagenetv2/imagenetv2-matched-frequency-format-val

# the conv1 input is split over the conv1 PEs, one block of channels each; the fc weights over
# the fc tasks, one block of output neurons each
headers: $(IMAGENET)
	$(PYTHON) $(UTILS)/gen_slices.py --pes $(PES) --fc-pes $(FC_PES) --output-dir params
	$(PYTHON) $(UTILS)/gen_dataset.py --num-images 1 --split-channels $(firstword $(subst $(comma), ,$(PES))) --output-dir dataset

$(IMAGENET):
	$(PYTHON) $(UTILS)/download_dataset.py

.PHONY: headers
