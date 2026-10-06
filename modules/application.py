#!/usr/bin/env python3
from shutil import copytree
from os import listdir, environ
from subprocess import run, check_output
from multiprocessing import cpu_count
from repository import Repository
from yaml import safe_load
from hashlib import blake2s

class Application:
	def __init__(self, app_name, instance, platform_path, base_path, testcase_path, definitions=None, start_ms=None, mapping=None):
		self.app_name = app_name
		self.testcase_path = testcase_path

		self.definitions = definitions
		self.start_ms = start_ms
		self.mapping = mapping
   
		self.instance = instance
		self.source_path = "{}/applications/{}".format(platform_path, self.app_name)
		self.base_path = base_path
		self.app_path = "{}_{}".format(self.app_name, instance)

		try:
			files = listdir(self.source_path)
		except:
			raise Exception("Application {} not found or has 0 tasks.".format(self.app_name))

		self.tasks = []
		for file in files:
			if file.endswith(".c"):
				task = file.split(".")[0]
				self.tasks.append(task)

		self.tasks.sort()

		self.ctg = {}
		try:
			self.ctg = safe_load(open("{}/config.yaml".format(self.source_path)))["ctg"]
		except:
			print("CTG for app {} not provided".format(self.app_name))
			pass

	def copy(self):
		copytree(self.source_path, "{}/{}".format(self.base_path, self.app_path), dirs_exist_ok=1)
		self.generate_ids()

	def generate_ids(self):
		ids = ApplicationIds()

		ids.add(self.tasks)

		ids.write("{}/{}/id_tasks.h".format(self.base_path, self.app_path))

	def build(self):
		NCPU = cpu_count()
    
		make_env = environ.copy()

		CFLAGS = ""
		for definition in self.definitions:
			CFLAGS += "-D"+str(list(definition.keys())[0])+"="+str(list(definition.values())[0])+" "

		make_env["CFLAGS"] = CFLAGS+"--include id_tasks.h"
		  
		make = run(["make", "-C", "{}/{}".format(self.base_path, self.app_path), "-j", str(NCPU)], env=make_env)
		if make.returncode != 0:
			raise Exception("Error building application {}.".format(self.app_name))

	def check_size(self, size_inst, size_data):
		self.text_sizes = {}
		self.data_sizes = {}
		self.bss_sizes	= {}
		self.entry_points = {}

		for task in self.tasks:
			path = "{}/{}/{}.elf".format(self.base_path, self.app_path, task)

			out = check_output(["riscv64-elf-size", path, "-G"]).split(b'\n')[1].split(b'\t')[0].split(b' ')
			out = list(filter(lambda c: c != b'', out))

			self.text_sizes[task] = int(out[0])
			self.data_sizes[task] = int(out[1])
			self.bss_sizes[task] = int(out[2])

			out = check_output(["riscv64-elf-readelf", path, "-h"]).split(b'\n')[10].split(b' ')[-1]
			self.entry_points[task] = int(out, 16)
			
		print("\n******************** {} page size report ********************".format(self.app_name.center(20)))
		for task in self.tasks:
			isize = self.text_sizes[task]
			dsize = self.data_sizes[task] + self.bss_sizes[task]
			if isize <= size_inst and dsize <= size_data:
				print("Task {} instruction memory usage {}/{} bytes".format(task.rjust(29), str(isize).rjust(6), str(size_inst).ljust(6)))
				print("Task {}        data memory usage {}/{} bytes".format(task.rjust(29), str(dsize).rjust(6), str(size_data).ljust(6)))
			else:
				if isize > size_inst:
					raise Exception("Task {} instruction memory usage of {} is bigger than page size of {}".format(task, isize, size_inst))
				else:
					raise Exception("Task {} data memory usage of {} is bigger than page size of {}".format(task, dsize, size_data))
		print("****************** End {} page size report ******************".format(self.app_name.center(20)))

	def generate_descr(self, repodebug):
		descr = Repository()

		dep_list, dep_list_len = self.__get_dep_list()

		descr.add(blake2s(self.app_name.encode(), digest_size=4, usedforsecurity=False).hexdigest(), "Application name ({}) hash".format(self.app_name))
		descr.add("{}".format(len(self.tasks)), "Number of tasks")
		descr.add("{}".format(dep_list_len), "Graph size")

		for t in range(len(self.tasks)):
			for c in range(len(dep_list[t])):
					successor = dep_list[t][c] + 1
					if c == len(dep_list[t]) - 1:
						successor *= -1	
					descr.add("{}".format(successor), "Task {} is successor of task {}".format(self.tasks[dep_list[t][c]], self.tasks[t]))

			if len(dep_list[t]) == 0:
				descr.add("{}".format(0), "Task {} has no successors".format(self.tasks[t]))

		for task in self.tasks:
			descr.add(task, "Task name")

		descr.write("{}/{}.txt".format(self.base_path, self.get_full_name()))

		if repodebug:
			descr.write_debug("{}/{}_debug.txt".format(self.base_path, self.get_full_name()))

	def get_tasks(self):
		return self.tasks

	def get_full_name(self):
		return "{}_{}".format(self.app_name, self.instance)

	def __get_dep_list(self):
		dep_list = []

		dep_list_len = 0
		for task in self.tasks:
			successors_list = []

			successors = {}
			try:
				successors = self.ctg[task]["successors"]
			except:
				pass
			
			for successor in successors:
				successors_list.append(self.tasks.index(successor))

			successors_list.sort()

			dep_list.append(successors_list)
			dep_list_len += len(successors_list)
			if len(successors_list) == 0:
				dep_list_len += 1

		return dep_list, dep_list_len

class ApplicationIds:
	def __init__(self):
		self.lines = []
		self.lines.append("#pragma once\n")

	def add(self, tasks):
		for id_seq in range(len(tasks)):
			self.lines.append("#define\t"+tasks[id_seq]+"\t"+str(id_seq)+"\n")

	def write(self, path):
		file = open(path, "w")
		file.writelines(self.lines)
		file.close()
