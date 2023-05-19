#!/usr/bin/env python3
from distutils.dir_util import copy_tree
from os import environ
from subprocess import run, check_output
from multiprocessing import cpu_count
from descriptor import Descriptor
from repository import Repository
from shutil import copyfile

class Management:
	def __init__(self, platform_path, scenario_path, testcase_path, management):
		self.management = management
		self.testcase_path = testcase_path

		self.tasks = []
		self.task_names = []
		self.unique_tasks = []
		for task in management:
			self.tasks.append(task)
			self.task_names.append(task["task"])
		
		self.unique_tasks = set(self.task_names)

		self.source_path = "{}/management".format(platform_path)
		self.base_path = "{}/management".format(scenario_path)

	def copy(self):
		copy_tree("{}/common".format(self.source_path), "{}/common".format(self.base_path), update=1)
		for task in self.unique_tasks:
			copy_tree("{}/{}".format(self.source_path, task), "{}/{}".format(self.base_path, task), update=1)

		self.generate_ids()

	def task_index(self, lst, element):
		result = []
		offset = -1
		while True:
			try:
				offset = lst.index(element, offset+1)
			except ValueError:
				return result
			result.append(offset)

	def generate_ids(self):
		ids = ManagementIds()
		
		sizes = []
		task_ids = []
		output_tasks = []

		for task in self.tasks:
			name = task["task"]
			if name in output_tasks:
				continue

			output_tasks.append(name)
			sizes.append(self.tasks.count(name))
			task_ids.append(self.task_index(self.tasks, name))

		for i in range(len(output_tasks)):
			ids.add(output_tasks[i], sizes[i], task_ids[i])

		if output_tasks[0] != "mapper_task":
			raise Exception("Mapper task must be the first in the management list")

		ids.write("{}/id_tasks.h".format(self.base_path))

	def build(self):
		NCPU = cpu_count()

		make_env = environ.copy()
		# make_env["CFLAGS"] = CFLAGS
		
		CFLAGS = ""
		make_env["CFLAGS"] = CFLAGS+"--include ../id_tasks.h"

		for task in self.unique_tasks:
			make = run(["make", "-C", "{}/{}".format(self.base_path, task), "-j", str(NCPU)], env=make_env)
			if make.returncode != 0:
				raise Exception("Error build MA task {}.".format(task))

	def check_size(self, size_inst, size_data):
		self.text_sizes = {}
		self.data_sizes = {}
		self.bss_sizes	= {}
		self.entry_points = {}

		for task in self.unique_tasks:
			path = "{}/{}/{}.elf".format(self.base_path, task, task)

			out = check_output(["riscv64-elf-size", path, "-G"]).split(b'\n')[1].split(b'\t')[0].split(b' ')
			out = list(filter(lambda c: c != b'', out))

			self.text_sizes[task] = int(out[0])
			self.data_sizes[task] = int(out[1])
			self.bss_sizes[task] = int(out[2])

			out = check_output(["riscv64-elf-readelf", path, "-h"]).split(b'\n')[10].split(b' ')[-1]
			self.entry_points[task] = int(out, 16)
			
		print("\n***************************** MA page size report *****************************")
		for task in self.unique_tasks:
			isize = self.text_sizes[task]
			dsize = self.data_sizes[task] + self.bss_sizes[task]
			if isize <= size_inst and isize <= size_data:
				print("Task {} instruction memory usage {}/{} bytes".format(task.rjust(29), str(isize).rjust(6), str(size_inst).ljust(6)))
				print("Task {}        data memory usage {}/{} bytes".format(task.rjust(29), str(dsize).rjust(6), str(size_data).ljust(6)))
			else:
				if isize > size_inst:
					raise Exception("Task {} instruction memory usage of {} is bigger than page size of {}".format(task, isize, size_inst))
				else:
					raise Exception("Task {} data memory usage of {} is bigger than page size of {}".format(task, dsize, size_data))
		print("*************************** End MA page size report ***************************")

	def generate_descr(self, scenario_path, repodebug):
		descr = Repository()

		for task in self.tasks:
			descr.add(task["task"], "Task name")
			copyfile("{}/management/{}/{}.txt".format(scenario_path, task["task"], task["task"]), "{}/management/ma/{}.txt".format(scenario_path, task["task"]))
		
		descr.write      ("{}/management/ma.txt".format(scenario_path))

		if repodebug:
			descr.write_debug("{}/management/ma_debug.txt".format(scenario_path))

	def generate_start(self, scenario_path, repodebug):
		start = Repository()

		start.add(str(len(self.tasks)), "Number of tasks")
		for task in self.tasks:
			name = task["task"]

			try:
				address = task["static_mapping"]
				addr_x = int(address[0])
				addr_y = int(address[1])
				address = addr_x << 8 | addr_y
				map_comment = "statically mapped to PE {}x{}".format(addr_x, addr_y)
				start.add("{:04x}".format(address), "Task {} is {}".format(name, map_comment))
			except:
				raise Exception("All management tasks must be STATICALLY MAPPED")
			
			try:
				descr = Descriptor("{}/{}/config.yaml".format(self.base_path, task["task"]), task["task"])
				task_type = descr.get_type()
				start.add("{:08x}".format(task_type), "Task type tag")
			except:
				raise Exception("All management tasks must have a config.yaml with its task type tag")
		
		start.write("{}/ma_start.txt".format(scenario_path))
		if repodebug:
			start.write_debug("{}/ma_start_debug.txt".format(scenario_path))

	def get_tasks(self):
		return self.task_names

class ManagementIds:
	def __init__(self):
		self.lines = []
		self.lines.append("#pragma once\n")

	def add(self, task, size, ids):
		self.lines.append("#define\t"+task+"_size"+"\t"+str(size)+"\n")
		self.lines.append("static const int "+task+"[] = {")
		for id_seq in ids:
			self.lines.append(str(id_seq)+",")
		self.lines.append("};\n")

	def write(self, path):
		file = open(path, "w")
		file.writelines(self.lines)
		file.close()
