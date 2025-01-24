#!/usr/bin/env python3
from shutil import copytree
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
		links, 
		parameters
	):
		self.platform_path 			= platform_path
		self.testcase_path 			= testcase_path
		self.PKG_PAGE_SIZE_INST		= page_size_inst
		self.PKG_PAGE_SIZE_DATA		= page_size_data
		self.PKG_MAX_LOCAL_TASKS 	= max_local_tasks
		self.PKG_N_PE_X 			= n_pe_x
		self.PKG_N_PE_Y 			= n_pe_y
		self.peripherals			= peripherals
		self.links					= links
		self.parameters				= parameters

	def copy(self):
		copytree("{}/Phivers".format(self.platform_path), "{}/Phivers".format(self.testcase_path), dirs_exist_ok=1)
		self.__generate_definitions()

	def __generate_definitions(self):
		definitions = HardwareDefinitions()
		definitions.define("N_PE_X", str(self.PKG_N_PE_X))
		definitions.define("N_PE_Y", str(self.PKG_N_PE_Y))
		definitions.define("TASKS_PER_PE", str(self.PKG_MAX_LOCAL_TASKS))
		definitions.define("IMEM_PAGE_SZ", str(self.PKG_PAGE_SIZE_INST))
		definitions.define("DMEM_PAGE_SZ", str(self.PKG_PAGE_SIZE_DATA))

		definitions.define("RAM_DEBUG",     int(self.__param_or_default("RAM_DEBUG",     "False") == "True"))
		definitions.define("RS5_DEBUG",     int(self.__param_or_default("RS5_DEBUG",     "False") == "True"))
		definitions.define("UART_DEBUG",    int(self.__param_or_default("UART_DEBUG",     "True") == "True"))
		definitions.define("SCHED_DEBUG",   int(self.__param_or_default("SCHED_DEBUG",    "True") == "True"))
		definitions.define("PIPE_DEBUG",    int(self.__param_or_default("PIPE_DEBUG",     "True") == "True"))
		definitions.define("TRAFFIC_DEBUG", int(self.__param_or_default("TRAFFIC_DEBUG",  "True") == "True"))
		definitions.define("DMNI_DEBUG",    int(self.__param_or_default("DMNI_DEBUG",    "False") == "True"))
		definitions.define("SAFE_DEBUG",    int(self.__param_or_default("SAFE_DEBUG",     "True") == "True"))

		ports = ["" for x in range(self.PKG_N_PE_X) for y in range(self.PKG_N_PE_Y) for p in range(5)]
		for link in self.links:
			ports[5*(link[0][0] + self.PKG_N_PE_X*link[0][1]) + self.__port_val(link[0][2])] = link[1][0]
			if link[1][0] == "rs":
				with open("{}/link/rs{}x{}-{}.cfg".format(self.testcase_path, link[0][0], link[0][1], link[0][2]), "w") as file:
					file.write("{}\n".format(self.__link_param_or_default(link[1][1], "tick_begin",   500000)))
					file.write("{}\n".format(self.__link_param_or_default(link[1][1], "interval_min",      2)))
					file.write("{}\n".format(self.__link_param_or_default(link[1][1], "interval_max",      5)))
					file.write("{}\n".format(self.__link_param_or_default(link[1][1], "cycle_min",       100)))
					file.write("{}\n".format(self.__link_param_or_default(link[1][1], "cycle_max",       500)))
			else:
				raise Exception("Invalid link type at {}x{}-{}".format(link[0][0], link[0][1], link[0][2]))

		port_param = "{"
		for port in ports[:-1]:
			port_param += "\"{}\",".format(port)

		port_param += "\"{}\"}}".format(ports[-1])

		definitions.define("string LINK_CFG [N_PE_X*N_PE_Y*HERMES_NPORT]", port_param)

		for peripheral in self.peripherals:
			addr = self.peripherals[peripheral][0]
			port = self.peripherals[peripheral][1]
			definitions.add_peripheral(peripheral, addr[0], addr[1], port)

		definitions.write("{}/Phivers/sim/PhiversPkg.sv".format(self.testcase_path))

	def build(self, simulator="verilator", trace=False):
		NCPU = cpu_count()

		make_env = environ.copy()
		make_env["TRACE"]  = "1" if trace else "0"

		target = "default"
		if (simulator == "vsim"):
			target = "work/phivers/_lib.qdb"

		make = run(["make", "-C", "{}/Phivers/sim".format(self.testcase_path), "-j", str(NCPU), target], env=make_env)

		if make.returncode != 0:
			raise Exception("Error building hardware.")
	
	def __param_or_default(self, key, default):
		try:
			return self.parameters[key]
		except:
			return default

	def __link_param_or_default(self, dict, key, default):
		try:
			return dict[key]
		except:
			return default
		
	def __port_val(self, port):
		if port == "E":
			return 0
		elif port == "W":
			return 1
		elif port == "N":
			return 2
		elif port == "S":
			return 3
		elif port == "L":
			return 4
		else:
			raise Exception("Invalid port name: {}".format(port))

class HardwareDefinitions:
	def __init__(self):
		self.lines = []
		self.lines.append("`ifndef PHIVERS_PKG\n")
		self.lines.append("`define PHIVERS_PKG\n")
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
		self.lines.append("`endif\n")
		file = open(path, "w")
		file.writelines(self.lines)
		file.close()
