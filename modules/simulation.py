from yaml import safe_load
from distutils.dir_util import remove_tree
from os import makedirs
from subprocess import Popen

class Simulation:
    def __init__(self, platform_path, debugger_path, scenario_path, timeout, with_gui):
        self.platform_path = platform_path
        self.debugger_path = debugger_path
        self.scenario_path = scenario_path
        self.timeout = timeout
        self.with_gui = with_gui

        tc_name = self.scenario_path.split("/")
        tc_name = tc_name[len(tc_name) - 2]
        tc_yaml = safe_load(open("{}/../{}.yaml".format(self.scenario_path, tc_name), "r"))

        self.simulator = "verilator"
        try:
            self.simulator = tc_yaml["simulator"]
        except:
            pass

        try:
            remove_tree("{}/log".format(scenario_path))
            makedirs("{}/log".format(scenario_path))
            open("{}/debug/scheduling_report.txt", 'w').close()
            open("{}/debug/traffic_router.txt", 'w').close()
            open("{}/debug/dmni.log", 'w').close()
        except:
            pass

    def run(self):
        if(self.timeout == -1):
            simulation = Popen(["make", "-C", self.scenario_path, self.simulator])
        else:
            raise NotImplementedError("Timeout is not implemented yet.")

        if self.with_gui:
            debugger = Popen(["java", "-jar", "{}/Memphis_Debugger.jar".format(self.debugger_path), "{}/debug/platform.cfg".format(self.scenario_path)])

        try:
            simulation.wait()
            if self.with_gui:
                debugger.wait()
        except KeyboardInterrupt:
            pass
