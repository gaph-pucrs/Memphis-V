#!/usr/bin/env python3
from distutils.dir_util import copy_tree
from distutils.file_util import copy_file
from subprocess import run, check_output
from multiprocessing import cpu_count

class Kernel:
	def __init__(self, platform_path, testcase_path, page_size_inst, page_size_data):
		self.platform_path = platform_path
		self.testcase_path = testcase_path

		self.page_size_inst = page_size_inst
		self.page_size_data = page_size_data

	def copy(self):
		copy_tree("{}/MAestro".format(self.platform_path),          "{}/MAestro".format(self.testcase_path), 	      update=1)
		copy_file("{}/MAestro/Makefile".format(self.platform_path), "{}/MAestro/Makefile".format(self.testcase_path), update=1)

	def build(self):
		NCPU = cpu_count()
		make = run(["make", "-C", "{}/MAestro".format(self.testcase_path), "-j", str(NCPU)])
		if make.returncode != 0:
			raise Exception("Error building kernel.")

	def check_size(self):
		path = "{}/MAestro/kernel.elf".format(self.testcase_path)

		out = check_output(["riscv64-elf-size", path]).split(b'\n')[1].split(b'\t')

		size = self.__get_txt_size()*4 + int(out[2])# + self.stack_size
					
		print("\n******************* Kernel page size report *******************")
		if size <= self.page_size:
			print("Kernel memory usage {}/{} bytes".format(str(size).rjust(30), str(self.page_size).ljust(6)))
		else:
			raise Exception("Kernel memory usage of {} is bigger than page size of {}".format(size, self.page_size))
		print("***************** End kernel page size report *****************")

	def __get_txt_size(self):
		return sum(1 for line in open(self.testcase_path+"/MAestro/kernel.txt"))
