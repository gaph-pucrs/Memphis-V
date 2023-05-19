#!/usr/bin/env python3
from yaml import safe_load
from os import makedirs
from distutils.dir_util import remove_tree, copy_tree
from shutil import copyfile
from application import Application
from os.path import exists
from filecmp import cmp

class Applications:
	def __init__(self, platform_path, testcase_path, applications_file):
		self.platform_path = platform_path
		self.testcase_path = testcase_path

		self.app_file = applications_file

		name = self.app_file.split(".yaml")[0].split("/")
		name = name[len(name) - 1]

		self.apps_dir = "{}/applications".format(testcase_path)
		self.file = "{}/{}.yaml".format(self.apps_dir, name)

		yaml = safe_load(open(self.app_file, "r"))

		self.applications = {}

		try:
			for app in yaml["apps"]:
				app_name = app["name"]
				app_inst = "default"
				try:
					app_inst = app["instance"]
				except:
					pass
				definitions = []
				try:
					definitions = app["definitions"]
				except:
					pass
				app_key = (app_name, app_inst)
				try:
					if self.applications[app_key] is not None:
						raise Exception("App {} has multiple {} instances".format(app_name, app_inst))
				except:
					self.applications[app_key] = Application(app_name, app_inst, self.platform_path, self.apps_dir, self.testcase_path, definitions=definitions)
		except:
			pass

		tc_name = self.testcase_path.split("/")
		tc_name = tc_name[len(tc_name) - 1]

		tc_yaml = safe_load(open("{}/{}.yaml".format(self.testcase_path, tc_name), "r"))
		self.size_inst		= tc_yaml["hw"]["page_size_inst_KB"]*1024
		self.size_data		= tc_yaml["hw"]["page_size_data_KB"]*1024

	def copy(self):
		if self.__is_obsolete():
			remove_tree(self.apps_dir)

		makedirs(self.apps_dir, exist_ok=True)
		copy_tree("{}/applications/common".format(self.platform_path), "{}/common".format(self.apps_dir))
		copyfile(self.app_file, self.file)

		for app in self.applications:
			self.applications[app].copy()

	def build(self, repodebug):
		for app in self.applications:
			self.applications[app].build()

		for app in self.applications:
			self.applications[app].check_size(self.size_inst, self.size_data)

		for app in self.applications:
			self.applications[app].generate_descr(repodebug)

	def __is_obsolete(self):
		if exists(self.file):
			if not cmp(self.app_file, self.file):
				return True
		
		return False
