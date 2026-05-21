CONFIG_DIR ?= ./config

ACTIVE_TESTCASE ?= $(shell cat .active_testcase 2>/dev/null || echo testcase_scalar)

all:

vector:
	@echo "testcase_vector" > .active_testcase
	@$(MAKE) sim

scalar:
	@echo "testcase_scalar" > .active_testcase
	@echo "" > .active_config.mk
	@$(MAKE) sim

v%:
	@echo "testcase_v$*" > .active_testcase
	@echo "VLEN = $*" > .active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl$*b" >> .active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> .active_config.mk
	@$(MAKE) sim

sim: testcase lmfrnet_applications lmfrnet_scenario
	@memphi5 simulate $(ACTIVE_TESTCASE)/lmfrnet_scenario --nogui

testcase:
	@memphi5 testcase $(CONFIG_DIR)/$(ACTIVE_TESTCASE).yaml

lmfrnet_applications:
	@memphi5 applications $(ACTIVE_TESTCASE) lmfrnet_applications.yaml

lmfrnet_scenario:
	@memphi5 scenario $(ACTIVE_TESTCASE) lmfrnet_scenario.yaml

clean:
	rm -r $(ACTIVE_TESTCASE)

debug:
	cat $(ACTIVE_TESTCASE)/lmfrnet_scenario/log/log0x1.txt