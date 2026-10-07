CONFIG_DIR ?= ./config
APPLICATIONS ?= ./applications
SCENARIOS	 ?= ./scenarios

hw-%:
	@echo "[Hardware] compiling $* NoC..."
	@mint testcase $(CONFIG_DIR)/testcase_$*.yaml

run-scalar:
	@echo "[Setup] preparing isolated environment for testcase_scalar..."
	@echo "" > ./testcase_scalar/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_scalar APP=naive_scalar_applications SCENARIO=naive_scalar_scenario

run-v64:
	@echo "[Setup] preparing isolated environment for testcase_v64..."
	@echo "VLEN = 64" > ./testcase_v64/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl64b" >> ./testcase_v64/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_v64/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_v64 APP=naive_vector_applications SCENARIO=naive_vector_scenario

run-v128:
	@echo "[Setup] preparing isolated environment for testcase_v128..."
	@echo "VLEN = 128" > ./testcase_v128/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_v128/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_v128/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_v128 APP=naive_vector_applications SCENARIO=naive_vector_scenario

run-v256:
	@echo "[Setup] preparing isolated environment for testcase_v256..."
	@echo "VLEN = 256" > ./testcase_v256/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl256b" >> ./testcase_v256/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_v256/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_v256 APP=naive_vector_applications SCENARIO=naive_vector_scenario

run-3x3-scalar:
	@echo "[Setup] preparing isolated environment for testcase_3x3_scalar..."
	@echo "" > ./testcase_3x3_scalar/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_3x3_scalar APP=3x3_scalar_applications SCENARIO=3x3_scalar_scenario

run-3x3-v64:
	@echo "[Setup] preparing isolated environment for testcase_3x3_v64..."
	@echo "VLEN = 64" > ./testcase_3x3_v64/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl64b" >> ./testcase_3x3_v64/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_3x3_v64/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_3x3_v64 APP=3x3_v64_applications SCENARIO=3x3_v64_scenario

run-3x3-v128:
	@echo "[Setup] preparing isolated environment for testcase_3x3_v128..."
	@echo "VLEN = 128" > ./testcase_3x3_v128/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_3x3_v128/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_3x3_v128/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_3x3_v128 APP=3x3_v128_applications SCENARIO=3x3_v128_scenario

run-3x3-v256:
	@echo "[Setup] preparing isolated environment for testcase_3x3_v256..."
	@echo "VLEN = 256" > ./testcase_3x3_v256/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl256b" >> ./testcase_3x3_v256/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_3x3_v256/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_3x3_v256 APP=3x3_v256_applications SCENARIO=3x3_v256_scenario

run-3x3-hybrid:
	@echo "[Setup] preparing isolated environment for testcase_3x3_hybrid..."
	@echo "VLEN = 128" > ./testcase_3x3_hybrid/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_3x3_hybrid/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_3x3_hybrid/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_3x3_hybrid APP=3x3_hybrid_applications SCENARIO=3x3_hybrid_scenario

_sim: _compile_app _deploy_scenario
	@echo "[Simulation] starting $(ACTIVE_TESTCASE) testcase..."
	@echo "[Simulation] deployed $(SCENARIO) scenario"
	@mint simulate $(ACTIVE_TESTCASE)/$(SCENARIO) --nogui

_compile_app:
	@echo "[Software] compiling $(APPLICATIONS)/$(APP).yaml"
	@mint applications $(ACTIVE_TESTCASE) $(APPLICATIONS)/$(APP).yaml

_deploy_scenario:
	@echo "[Scenario] generating $(SCENARIOS)/$(SCENARIO).yaml..."
	@mint scenario $(ACTIVE_TESTCASE) $(SCENARIOS)/$(SCENARIO).yaml
