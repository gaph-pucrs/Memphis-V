#!/usr/bin/env python3
from yaml import safe_load
from os import makedirs
from distutils.dir_util import remove_tree, copy_tree
from shutil import copyfile, copy
from management import Management
from application import Application
from repository import Repository
from os.path import exists
from filecmp import cmp

class Scenario:
	def __init__(self, platform_path, testcase_path, scenario_file):
		print("Loading scenario...")

		self.platform_path = platform_path
		self.testcase_path = testcase_path

		self.base = scenario_file

		name = self.base.split(".yaml")[0].split("/")
		name = name[len(name) - 1]

		self.base_dir = self.testcase_path+"/"+name
		self.file = "{}/{}.yaml".format(self.base_dir, name)

		yaml = safe_load(open(self.base, "r"))

		tc_name = self.testcase_path.split("/")
		tc_name = tc_name[len(tc_name) - 1]

		tc_yaml = safe_load(open("{}/{}.yaml".format(self.testcase_path, tc_name), "r"))
		self.PKG_PAGE_SIZE_INST 	= tc_yaml["hw"]["page_size_inst_KB"] * 1024
		self.PKG_PAGE_SIZE_DATA 	= tc_yaml["hw"]["page_size_data_KB"] * 1024

		self.simulator = "verilator"
		try:
			self.simulator = tc_yaml["simulation"]["simulator"]
		except:
			pass

		self.management = Management(self.platform_path, self.base_dir, self.testcase_path, yaml["management"])

		self.applications = []
		instances = {}

		try:
			for app in yaml["apps"]:
				app_name = app["name"]
				try:
					instances[app_name] += 1
				except:
					instances[app_name] = 0
     
				self.applications.append(Application(app, app_name, instances[app_name], self.platform_path, self.base_dir, self.testcase_path))

			self.applications.sort(key=lambda x: x.start_ms)
		except:
			pass

		print("Scenario {}.yaml loaded.".format(name))
		
	def copy(self, skipdebug):
		print("Copying scenario...")

		if self.__is_obsolete():
			remove_tree(self.base_dir)

		makedirs(self.base_dir+"/debug/pipe", exist_ok=True)
		makedirs(self.base_dir+"/debug/request", exist_ok=True)
		makedirs(self.base_dir+"/debug/available", exist_ok=True)
		makedirs(self.base_dir+"/debug/ram", exist_ok=True)
		makedirs(self.base_dir+"/debug/cpu", exist_ok=True)
		makedirs(self.base_dir+"/log", exist_ok=True)
		makedirs(self.base_dir+"/flit_sniffer", exist_ok=True)
		makedirs(self.base_dir+"/management", exist_ok=True)
		makedirs(self.base_dir+"/management/ma", exist_ok=True)
		makedirs(self.base_dir+"/applications", exist_ok=True)

		copyfile("{}/Phivers/sim/Makefile".format(self.testcase_path), "{}/Makefile".format(self.base_dir))
		copyfile("{}/Phivers/sim/vsim.mk".format(self.testcase_path), "{}/vsim.mk".format(self.base_dir))
		copyfile("{}/Phivers/sim/verilator.mk".format(self.testcase_path), "{}/verilator.mk".format(self.base_dir))

		if (self.simulator == "verilator"):
			copy("{}/Phivers/sim/phivers".format(self.testcase_path), "{}/phivers".format(self.base_dir))
		elif (self.simulator == "vsim"):
			copy_tree("{}/Phivers/sim/work".format(self.testcase_path), "{}/work".format(self.base_dir))
			copyfile("{}/Phivers/sim/wave.do".format(self.testcase_path), "{}/wave.do".format(self.base_dir))
		
		copyfile("{}/MAestro/ikernel.bin".format(self.testcase_path), "{}/ikernel.bin".format(self.base_dir))
		copyfile("{}/MAestro/dkernel.bin".format(self.testcase_path), "{}/dkernel.bin".format(self.base_dir))

		copy_tree("{}/applications/common".format(self.platform_path), "{}/applications/common".format(self.base_dir))

		open("{}/debug/traffic_router.txt".format(self.base_dir), "w").close()
		copyfile(self.base, self.file)

		if not skipdebug:
			copyfile("{}/services.cfg".format(self.testcase_path), "{}/debug/services.cfg".format(self.base_dir))
			copyfile("{}/cpu.cfg".format(self.testcase_path), "{}/debug/cpu.cfg".format(self.base_dir))
			copyfile("{}/platform.cfg".format(self.testcase_path), "{}/debug/platform.cfg".format(self.base_dir))
			self.__append_platform()

		self.management.copy()

		for app in self.applications:
			app.copy()

		print("Scenario copied.")

	def build(self, repodebug):
		print("Building scenario...")

		self.management.build()
		for app in self.applications:
			app.build()

		self.management.check_size(self.PKG_PAGE_SIZE_INST, self.PKG_PAGE_SIZE_DATA)
		for app in self.applications:
			app.check_size(self.PKG_PAGE_SIZE_INST, self.PKG_PAGE_SIZE_DATA)

		self.management.generate_descr(self.base_dir, repodebug)
		graph_sizes = []
		for app in self.applications:
			graph_size = app.generate_descr(repodebug)
			graph_sizes.append(graph_size)

		self.management.generate_start(self.base_dir, repodebug)
		self.__generate_app_start(graph_sizes, repodebug)

		print("Scenario built.")

	def __generate_app_start(self, graph_sizes, repodebug):
		start = Repository()

		for idx, app in enumerate(self.applications):
			start.add(app.get_full_name(), "App name")
			
			start.add("{}".format(app.start_ms), "Start time (ms)")

			start.add("{}".format(graph_sizes[idx]), "Graph size")

			tasks = app.get_tasks()
			task_cnt = len(tasks)
			start.add("{}".format(task_cnt), "Number of tasks")

			for task in app.mapping:
				if task not in tasks:
					raise Exception("Task {} in static_mapping list not present in application {}".format(task, app.app_name))
		
			for task in tasks:
				address = 0xffffffff
				map_comment = ""
				if task in app.mapping:
					addr_x = app.mapping[task][0]
					addr_y = app.mapping[task][1]
					address = addr_x << 8 | addr_y
					map_comment = "statically mapped to PE {}x{}".format(addr_x, addr_y)
				else:
					map_comment = "dinamically mapped"
				
				start.add("{:04x}".format(address), "Task {} is {}".format(task, map_comment))
		
		start.write(self.base_dir+"/app_start.txt")
		
		if repodebug:
			start.write_debug(self.base_dir+"/app_start_debug.txt")

	def __append_platform(self):

		task_lines = []
		app_lines = []

		app_id = 1

		for app in self.applications:
			app_lines.append("{}\t{}\n".format(app.get_full_name(), app_id))
			
			tasks = app.get_tasks()
			for t in range(len(tasks)):
				task_lines.append("{} {}\n".format(tasks[t], app_id << 8 | t))

			app_id += 1


		cfg = open("{}/debug/platform.cfg".format(self.base_dir), "a")

		cfg.write("BEGIN_task_name_relation\n")

		ma_tasks = self.management.get_tasks()
		for t in range(len(ma_tasks)):
			cfg.write("{} {}\n".format(ma_tasks[t], t))

		cfg.writelines(task_lines)
		cfg.write("END_task_name_relation\n")

		cfg.write("BEGIN_app_name_relation\n")

		cfg.write("management\t0\n")
		cfg.writelines(app_lines)

		cfg.write("END_app_name_relation\n")

		cfg.close()
  
	def __is_obsolete(self):
		if exists(self.file):
			if not cmp(self.base, self.file):
				return True
		
		return False
