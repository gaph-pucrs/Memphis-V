#!/usr/bin/env python3

class Repository:
	def __init__(self):
		self.lines = []
		self.commentary = []

	def add(self, line, commentary):
		self.lines.append("{}\n".format(line))
		self.commentary.append("{}\t{}\n".format(line, commentary))

	def write(self, path):
		file = open(path, "w")
		file.writelines(self.lines)
		file.close()

	def write_debug(self, path):
		file = open(path, "w")
		file.writelines(self.commentary)
		file.close()
