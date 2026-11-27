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

# alexnet with the classifier: 256 MiB pages (RamArray), ~24 GiB of host RAM per run
run-4x4-alexnet-scalar:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_scalar..."
	@echo "" > ./testcase_4x4_alexnet_scalar/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_scalar APP=alexnet_scalar_applications SCENARIO=alexnet_scalar_scenario

run-4x4-alexnet-v128:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_v128..."
	@echo "VLEN = 128" > ./testcase_4x4_alexnet_v128/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_4x4_alexnet_v128/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_v128/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_v128 APP=alexnet_v128_applications SCENARIO=alexnet_v128_scenario

run-4x4-alexnet-v64:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_v64..."
	@echo "VLEN = 64" > ./testcase_4x4_alexnet_v64/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl64b" >> ./testcase_4x4_alexnet_v64/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_v64/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_v64 APP=alexnet_v64_applications SCENARIO=alexnet_v64_scenario

run-4x4-alexnet-v256:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_v256..."
	@echo "VLEN = 256" > ./testcase_4x4_alexnet_v256/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl256b" >> ./testcase_4x4_alexnet_v256/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_v256/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_v256 APP=alexnet_v256_applications SCENARIO=alexnet_v256_scenario

# alexnet-overlap (round-robin channels, joins stream channel by channel): same testcases and mapping as alexnet
run-4x4-alexnet-overlap-scalar:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_scalar..."
	@echo "" > ./testcase_4x4_alexnet_scalar/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_scalar APP=alexnet_overlap_scalar_applications SCENARIO=alexnet_overlap_scalar_scenario

run-4x4-alexnet-overlap-v64:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_v64..."
	@echo "VLEN = 64" > ./testcase_4x4_alexnet_v64/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl64b" >> ./testcase_4x4_alexnet_v64/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_v64/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_v64 APP=alexnet_overlap_v64_applications SCENARIO=alexnet_overlap_v64_scenario

run-4x4-alexnet-overlap-v128:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_v128..."
	@echo "VLEN = 128" > ./testcase_4x4_alexnet_v128/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_4x4_alexnet_v128/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_v128/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_v128 APP=alexnet_overlap_v128_applications SCENARIO=alexnet_overlap_v128_scenario

run-4x4-alexnet-overlap-v256:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_v256..."
	@echo "VLEN = 256" > ./testcase_4x4_alexnet_v256/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl256b" >> ./testcase_4x4_alexnet_v256/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_v256/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_v256 APP=alexnet_overlap_v256_applications SCENARIO=alexnet_overlap_v256_scenario

# alexnet-rows (every task streams row by row, all layers at once): same testcases as alexnet, own mapping
run-4x4-alexnet-rows-scalar:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_scalar..."
	@echo "" > ./testcase_4x4_alexnet_scalar/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_scalar APP=alexnet_rows_scalar_applications SCENARIO=alexnet_rows_scalar_scenario

run-4x4-alexnet-rows-v64:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_v64..."
	@echo "VLEN = 64" > ./testcase_4x4_alexnet_v64/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl64b" >> ./testcase_4x4_alexnet_v64/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_v64/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_v64 APP=alexnet_rows_v64_applications SCENARIO=alexnet_rows_v64_scenario

run-4x4-alexnet-rows-v128:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_v128..."
	@echo "VLEN = 128" > ./testcase_4x4_alexnet_v128/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_4x4_alexnet_v128/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_v128/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_v128 APP=alexnet_rows_v128_applications SCENARIO=alexnet_rows_v128_scenario

run-4x4-alexnet-rows-v256:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_v256..."
	@echo "VLEN = 256" > ./testcase_4x4_alexnet_v256/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl256b" >> ./testcase_4x4_alexnet_v256/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_v256/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_v256 APP=alexnet_rows_v256_applications SCENARIO=alexnet_rows_v256_scenario

# alexnet-rows-fcsplit (alexnet-rows with fc6-8 split over 16 fc tasks): own testcases (3 tasks/PE, 32 MiB pages)
run-4x4-alexnet-rows-fcsplit-scalar:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_fcsplit_scalar..."
	@echo "" > ./testcase_4x4_alexnet_fcsplit_scalar/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_fcsplit_scalar APP=alexnet_rows_fcsplit_scalar_applications SCENARIO=alexnet_rows_fcsplit_scalar_scenario

run-4x4-alexnet-rows-fcsplit-v64:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_fcsplit_v64..."
	@echo "VLEN = 64" > ./testcase_4x4_alexnet_fcsplit_v64/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl64b" >> ./testcase_4x4_alexnet_fcsplit_v64/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_fcsplit_v64/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_fcsplit_v64 APP=alexnet_rows_fcsplit_v64_applications SCENARIO=alexnet_rows_fcsplit_v64_scenario

run-4x4-alexnet-rows-fcsplit-v128:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_fcsplit_v128..."
	@echo "VLEN = 128" > ./testcase_4x4_alexnet_fcsplit_v128/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl128b" >> ./testcase_4x4_alexnet_fcsplit_v128/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_fcsplit_v128/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_fcsplit_v128 APP=alexnet_rows_fcsplit_v128_applications SCENARIO=alexnet_rows_fcsplit_v128_scenario

run-4x4-alexnet-rows-fcsplit-v256:
	@echo "[Setup] preparing isolated environment for testcase_4x4_alexnet_fcsplit_v256..."
	@echo "VLEN = 256" > ./testcase_4x4_alexnet_fcsplit_v256/active_config.mk
	@echo "ARCH = rv32imc_zicsr_zve32x_zvl256b" >> ./testcase_4x4_alexnet_fcsplit_v256/active_config.mk
	@echo "VFLAGS = -mrvv-vector-bits=zvl" >> ./testcase_4x4_alexnet_fcsplit_v256/active_config.mk
	@$(MAKE) _sim ACTIVE_TESTCASE=testcase_4x4_alexnet_fcsplit_v256 APP=alexnet_rows_fcsplit_v256_applications SCENARIO=alexnet_rows_fcsplit_v256_scenario

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
