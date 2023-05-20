#!/usr/bin/env python3
from distutils.dir_util import copy_tree
from os import listdir
from os.path import isdir
from subprocess import run, check_output
from multiprocessing import cpu_count

class Management:
	def __init__(self, platform_path, testcase_path):
		self.testcase_path = testcase_path
		
		self.source_path = "{}/management".format(platform_path)
		self.base_path = "{}/management".format(testcase_path)

	def copy(self):
		copy_tree(self.source_path, self.base_path, update=1)

	def build(self):
		NCPU = cpu_count()

		for task in listdir(self.base_path):
			if not isdir(task) or task == "common":
				continue
			make = run(["make", "-C", "{}/{}".format(self.base_path, task), "-j", str(NCPU)])
			if make.returncode != 0:
				raise Exception("Error build MA task {}.".format(task))

	def check_size(self, size_inst, size_data):
		self.text_sizes = {}
		self.data_sizes = {}
		self.bss_sizes	= {}
		self.entry_points = {}

		for task in listdir(self.base_path):
			if not isdir(task) or task == "common":
				continue
			path = "{}/{}/{}.elf".format(self.base_path, task, task)

			out = check_output(["riscv64-elf-size", path, "-G"]).split(b'\n')[1].split(b'\t')[0].split(b' ')
			out = list(filter(lambda c: c != b'', out))

			self.text_sizes[task] = int(out[0])
			self.data_sizes[task] = int(out[1])
			self.bss_sizes[task] = int(out[2])

			out = check_output(["riscv64-elf-readelf", path, "-h"]).split(b'\n')[10].split(b' ')[-1]
			self.entry_points[task] = int(out, 16)
			
		print("\n***************************** MA page size report *****************************")
		for task in listdir(self.base_path):
			if not isdir(task) or task == "common":
				continue
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
		print("*************************** End MA page size report ***************************")
