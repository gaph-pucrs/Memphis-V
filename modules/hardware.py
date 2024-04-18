#!/usr/bin/env python3
from distutils.dir_util import copy_tree
from subprocess import run
from multiprocessing import cpu_count
from os import environ

class Hardware:
	def __init__(
		self, 
		platform_path, 
		testcase_path, 
		page_size_inst, 
		page_size_data, 
		max_local_tasks, 
		n_pe_x, 
		n_pe_y, 
		peripherals, 
		definitions
	):
		self.platform_path 			= platform_path
		self.testcase_path 			= testcase_path
		self.PKG_PAGE_SIZE_INST		= page_size_inst
		self.PKG_PAGE_SIZE_DATA		= page_size_data
		self.PKG_MAX_LOCAL_TASKS 	= max_local_tasks
		self.PKG_N_PE_X 			= n_pe_x
		self.PKG_N_PE_Y 			= n_pe_y
		self.peripherals			= peripherals
		self.definitions			= definitions

	def copy(self):
		copy_tree("{}/Phivers".format(self.platform_path), "{}/Phivers".format(self.testcase_path), update=1)
		self.generate_definitions()

	def generate_definitions(self):
		definitions = HardwareDefinitions()
		definitions.define("N_PE_X", str(self.PKG_N_PE_X))
		definitions.define("N_PE_Y", str(self.PKG_N_PE_Y))
		definitions.define("TASKS_PER_PE", str(self.PKG_MAX_LOCAL_TASKS))
		definitions.define("IMEM_PAGE_SZ", str(self.PKG_PAGE_SIZE_INST))
		definitions.define("DMEM_PAGE_SZ", str(self.PKG_PAGE_SIZE_DATA))
					 
		for peripheral in self.peripherals:
			addr = self.peripherals[peripheral][0]
			port = self.peripherals[peripheral][1]
			definitions.add_peripheral(peripheral, addr[0], addr[1], port)

		definitions.write("{}/Phivers/sim/PhiversPkg.sv".format(self.testcase_path))

	def build(self, simulator="verilator", trace=False):
		NCPU = cpu_count()
		CFLAGS = ""

		for definition in self.definitions:
			CFLAGS = CFLAGS + "-D"+str(list(definition.keys())[0])+"="+str(list(definition.values())[0])+" "

		make_env = environ.copy()
		make_env["CFLAGS"] = CFLAGS
		make_env["TRACE"]  = "1" if trace else "0"

		target = "default"
		if (simulator == "vsim"):
			target = "work/phivers/_lib.qdb"

		make = run(["make", "-C", "{}/Phivers/sim".format(self.testcase_path), "-j", str(NCPU), target], env=make_env)

		if make.returncode != 0:
			raise Exception("Error building hardware.")

class HardwareDefinitions:
	def __init__(self):
		self.lines = []
		self.lines.append("package PhiversPkg;\n")
		self.lines.append("\timport HermesPkg::*;\n")

	def define(self, key, value, lint_off=None):
		if lint_off is not None:
			self.lines.append("/* verilator lint_off {} */\n".format(lint_off))

		self.lines.append("\tparameter {} = {};\n".format(key, value))

		if lint_off is not None:
			self.lines.append("/* verilator lint_on {} */\n".format(lint_off))

	def add_peripheral(self, peripheral, x, y, port):
		self.lines.append("\tparameter logic [15:0] ADDR_{} = 16'h{:02x}{:02x};\n".format(peripheral, x, y))
		self.lines.append("\tparameter hermes_port_t PORT_{} = {};\n".format(peripheral, port))

	def write(self, path):
		self.lines.append("endpackage\n")
		file = open(path, "w")
		file.writelines(self.lines)
		file.close()
