include ../../active_config.mk

include ../common/common.mk

# params/ and dataset/ are generated, not tracked. Regenerate them from the source tree with
#   make -C applications/lmfrnet-naive headers PYTHON=<python with torch>
# The lmfrnet-utils scripts read checkpoint/ relative to the cwd, so they run from $(UTILS).
UTILS  ?= ../../tools/lmfrnet-utils
PYTHON ?= python3
CIFAR   = $(UTILS)/autodl-tmp/data-cifar10/cifar-10-batches-py/test_batch

# images.h includes image1..image20
headers: $(CIFAR)
	cd $(UTILS) && $(PYTHON) fused_weights.py --output-dir $(CURDIR)/params
	cd $(UTILS) && $(PYTHON) gen_dataset.py --num-images 20 --output-dir $(CURDIR)/dataset

$(CIFAR):
	cd $(UTILS) && $(PYTHON) download_dataset.py

.PHONY: headers
