#!/usr/bin/env python3
from distutils.dir_util import copy_tree
from subprocess import run
from multiprocessing import cpu_count

class Libs:
	def __init__(self, platform_path, testcase_path):
		self.platform_path = platform_path
		self.testcase_path = testcase_path

	def copy(self):
		copy_tree("{}/libmemphis".format(self.platform_path), "{}/libmemphis".format(self.testcase_path), update=1)
		copy_tree("{}/libmutils".format(self.platform_path), "{}/libmutils".format(self.testcase_path), update=1)

	def build(self):
		NCPU = cpu_count()

		make = run(["make", "-C", "{}/libmutils".format(self.testcase_path), "-j", str(NCPU)])
		if make.returncode != 0:
			raise Exception("Error building libraries.")
		
		make = run(["make", "-C", "{}/libmemphis".format(self.testcase_path), "-j", str(NCPU)])
		if make.returncode != 0:
			raise Exception("Error building libraries.")
