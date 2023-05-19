#!/usr/bin/env python3
from yaml import safe_load
from os import makedirs
from distutils.dir_util import remove_tree
from shutil import copyfile
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

		apps_dir = "{}/applications".format(testcase_path)
		self.applications = []

		try:
			for app in yaml["apps"]:
				app_name = app["name"]

				app_inst = "default"
				try:
					app_inst = app["instance"]
				except:
					pass

				start_ms = 0
				try:
					start_ms = app["start_time_ms"]
				except:
					print("Using 0 ms as starting time for app {}".format(app_name))

				mapping = []
				try:
					mapping = app["static_mapping"]
				except:
					print("Using pure dinamic mapping for app {}".format(app_name))
					
				self.applications.append(Application(app_name, app_inst, platform_path, apps_dir, testcase_path, start_ms=start_ms, mapping=mapping))

			self.applications.sort(key=lambda x: x.start_ms) # Sort by start time
		except:
			pass

		print("Scenario {}.yaml loaded.".format(name))
		
	def copy(self, skipdebug):
		print("Copying scenario...")

		if self.__is_obsolete():
			remove_tree(self.base_dir)

		# Maybe change this block to simulation
		makedirs(self.base_dir+"/debug/pipe", exist_ok=True)
		makedirs(self.base_dir+"/debug/request", exist_ok=True)
		makedirs(self.base_dir+"/debug/available", exist_ok=True)
		makedirs(self.base_dir+"/debug/ram", exist_ok=True)
		makedirs(self.base_dir+"/debug/cpu", exist_ok=True)
		makedirs(self.base_dir+"/log", exist_ok=True)
		open("{}/debug/traffic_router.txt".format(self.base_dir), "w").close()
		# end

		makedirs(self.base_dir+"/management", exist_ok=True)
		makedirs(self.base_dir+"/management/ma", exist_ok=True)

		# Change to symbolic link?
		copyfile("{}/Phivers/sim/sim.mk".format(self.testcase_path), "{}/sim.mk".format(self.base_dir))
		copyfile(self.base, self.file)

		# Maybe change to symbolic link
		if not skipdebug:
			copyfile("{}/services.cfg".format(self.testcase_path), "{}/debug/services.cfg".format(self.base_dir))
			copyfile("{}/cpu.cfg".format(self.testcase_path), "{}/debug/cpu.cfg".format(self.base_dir))
			copyfile("{}/platform.cfg".format(self.testcase_path), "{}/debug/platform.cfg".format(self.base_dir))
			self.__append_platform()

		self.management.copy()
		print("Scenario copied.")

	def build(self, repodebug):
		print("Building scenario...")

		self.management.build()
		self.management.check_size(self.PKG_PAGE_SIZE_INST, self.PKG_PAGE_SIZE_DATA)
		self.management.generate_descr(self.base_dir, repodebug)
		self.management.generate_start(self.base_dir, repodebug)

		self.__generate_app_start(repodebug)

		print("Scenario built.")

	def __generate_app_start(self, repodebug):
		start = Repository()

		for app in self.applications:
			start.add(app.get_full_name(), "App name")
			start.add(app.start_ms, "Start time (ms)")

			tasks = app.get_tasks()
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
