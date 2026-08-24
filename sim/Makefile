CONFIG_DIR ?= ./config
APPLICATIONS ?= ./applications
SCENARIOS	 ?= ./scenarios

ACTIVE_TESTCASE ?= $(shell cat .active_testcase 2>/dev/null || echo testcase_scalar)

APP      	 ?= dijkstra_applications
SCENARIO 	 ?= dijkstra_scenario

hw-%:
	@echo "[Hardware] compiling $* NoC..."
	@memphi5 testcase $(CONFIG_DIR)/testcase_$*.yaml

run-debug:
	@echo "[Setup] preparing isolated environment for testcase_debug..."
	@echo "VLEN = 128" > ./testcase_debug/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_debug/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_debug/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_debug APP=$(APP) SCENARIO=$(SCENARIO)

run-lmfrnet:
	@echo "[Setup] preparing isolated environment for testcase_lmfrnet..."
	@echo "VLEN = 128" > ./testcase_lmfrnet/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_lmfrnet/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_lmfrnet/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_lmfrnet APP=lmfrnet_applications SCENARIO=lmfrnet_scenario

run-v128:
	@echo "[Setup] preparing isolated environment for testcase_v128..."
	@echo "VLEN = 128" > ./testcase_v128/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_v128/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_v128/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_v128 APP=naive_applications SCENARIO=naive_scenario

run-v256:
	@echo "[Setup] preparing isolated environment for testcase_v256..."
	@echo "VLEN = 256" > ./testcase_v256/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl256b" >> ./testcase_v256/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_v256/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_v256 APP=naive_applications SCENARIO=naive_scenario

run-scalar:
	@echo "[Setup] preparing isolated environment for testcase_scalar..."
	@echo "" > ./testcase_scalar/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_scalar APP=$(APP) SCENARIO=$(SCENARIO)

_sim: _compile_app _deploy_scenario
	@echo "[Simulation] starting $(ACTIVE_TESTCASE) testcase..."
	@echo "[Simulation] deployed $(SCENARIO) scenario"
	@memphi5 simulate $(ACTIVE_TESTCASE)/$(SCENARIO) --nogui

_compile_app:
	@echo "[Software] compiling $(APPLICATIONS)/$(APP).yaml"
	@memphi5 applications $(ACTIVE_TESTCASE) $(APPLICATIONS)/$(APP).yaml

_deploy_scenario:
	@echo "[Scenario] generating $(SCENARIOS)/$(SCENARIO).yaml..."
	@memphi5 scenario $(ACTIVE_TESTCASE) $(SCENARIOS)/$(SCENARIO).yaml