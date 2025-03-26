#!/usr/bin/env python3
from os.path import exists
from filecmp import cmp
from os import makedirs
from shutil import copyfile, rmtree
from yaml import safe_load
from libs import Libs
from kernel import Kernel
from hardware import Hardware
from management import Management

class Testcase:
	def __init__(self, platform_path, testcase_base):
		print("Loading testcase...")

		self.platform_path = platform_path
		self.path = platform_path
		self.base = testcase_base

		name = self.base.split(".yaml")[0].split("/")
		name = name[len(name) - 1]

		self.base_dir = name
		self.file = "{}/{}.yaml".format(self.base_dir, name)

		yaml = safe_load(open(self.base, "r"))

		self.PKG_N_PE_X = yaml["hw"]["mpsoc_dimension"][0]
		self.PKG_N_PE_Y = yaml["hw"]["mpsoc_dimension"][1]
		self.PKG_PAGE_SIZE_INST 	= yaml["hw"]["page_size_inst_KB"] * 1024
		self.PKG_PAGE_SIZE_DATA 	= yaml["hw"]["page_size_data_KB"] * 1024
		PKG_MAX_LOCAL_TASKS	= yaml["hw"]["tasks_per_PE"]

		self.simulator = "verilator"
		try:
			self.simulator = yaml["simulation"]["simulator"]
		except:
			pass

		self.trace = False
		try:
			self.trace = yaml["simulation"]["trace"]
		except:
			pass
				
		peripherals = {}
		for peripheral in yaml["hw"]["Peripherals"]:
			x = int(peripheral["pe"][0])
			y = int(peripheral["pe"][2])
			port = self.__port_code(peripheral["port"])
			peripherals[peripheral["name"]] = ((x, y), port)

		links = []
		try:
			for link in yaml["hw"]["links"]:
				param = {}
				try:
					param = link["parameters"]
				except:
					pass
				links.append(((link["pe"][0], link["pe"][1], link["port"]), (link["trojan"], param)))
		except:
			pass
				
		parameters = {}
		try:
			for parameter in yaml["hw"]["parameters"]:
				parameters[str(list(parameter.keys())[0])] = str(list(parameter.values())[0])
		except:
			pass

		self.libs = Libs(self.platform_path, self.base_dir)
		self.kernel = Kernel(self.platform_path, self.base_dir)

		self.hardware = Hardware(
			self.platform_path, 
			self.base_dir, 
			self.PKG_PAGE_SIZE_INST, 
			self.PKG_PAGE_SIZE_DATA, 
			PKG_MAX_LOCAL_TASKS, 
			self.PKG_N_PE_X, 
			self.PKG_N_PE_Y, 
			peripherals, 
			links, 
			parameters
		)

		self.management = Management(self.platform_path, self.base_dir)

		print("Testcase {}.yaml loaded.".format(name))
		
	def copy(self, skipdebug):
		print("Copying testcase...")

		# If testcase has been updated, delete to rebuild everything
		if self.__is_obsolete():
			rmtree(self.base_dir)

		makedirs(self.base_dir, exist_ok=True)
		copyfile(self.base, self.file)

		makedirs("{}/link".format(self.base_dir), exist_ok=True)

		self.libs.copy()
		self.kernel.copy()
		self.hardware.copy()
		self.management.copy()

		if not skipdebug:
			makedirs("{}/debug".format(self.base_dir), exist_ok=True)
			self.__create_platform()
			self.__create_services()
			self.__create_cpu()

		print("Testcase copied.")

	def build(self):
		print("Building testcase...")
		
		self.libs.build()
		
		self.kernel.build()
		self.management.build()

		self.hardware.build(self.simulator, self.trace)

		self.kernel.check_size(self.PKG_PAGE_SIZE_INST, self.PKG_PAGE_SIZE_DATA)
		self.management.check_size(self.PKG_PAGE_SIZE_INST, self.PKG_PAGE_SIZE_DATA)

		print("Testcase built.")

	def __is_obsolete(self):
		if exists(self.file):
			if not cmp(self.base, self.file):
				return True
		
		return False

	def __create_platform(self):
		with open("{}/debug/platform.cfg".format(self.base_dir), "w") as cfg:
			cfg.write("router_addressing XY\n")
			cfg.write("channel_number {}\n".format(2))
			cfg.write("mpsoc_x {}\n".format(self.PKG_N_PE_X))
			cfg.write("mpsoc_y {}\n".format(self.PKG_N_PE_Y))
			cfg.write("flit_size {}\n".format(32))
			cfg.write("clock_period_ns {}\n".format(10))

			# Legacy lines. This will 'trick' the debugger into assigning no master
			cfg.write("cluster_x {}\n".format(self.PKG_N_PE_X))
			cfg.write("cluster_y {}\n".format(self.PKG_N_PE_Y))
			cfg.write("manager_position_x {}\n".format(self.PKG_N_PE_X))
			cfg.write("manager_position_y {}\n".format(self.PKG_N_PE_Y))

		
	def __create_services(self):
		with open("{}/libmemphis/src/include/memphis/services.h".format(self.base_dir), "r") as services:
			with open("{}/debug/services.cfg".format(self.base_dir), "w") as cfg:
				for line in services:
					words = line.split()
					if "#define" in words and len(words) > 2:
						key = words[1]
						value = 0
						value = int(words[2], base=16)
						cfg.write("{} {:x}\n".format(key, value))

				services.close()

				cfg.write("\n")
				cfg.write("$TASK_ALLOCATION_SERVICE 40 23\n")
				cfg.write("$TASK_TERMINATED_SERVICE 70 23\n")

	def __create_cpu(self):
		with open("{}/debug/cpu.cfg".format(self.base_dir), "w") as cfg:
			cfg.write("Interruption\t65536\n")
			cfg.write("Scheduler\t262144\n")
			cfg.write("Idle\t524288\n")

	def __port_code(self, char):
		if char == 'E':
			return "HERMES_EAST"
		if char == 'W':
			return "HERMES_WEST"
		if char == 'N':
			return "HERMES_NORTH"
		if char == 'S':
			return "HERMES_SOUTH"
		if char == 'L':
			return "HERMES_LOCAL"
		return 5
