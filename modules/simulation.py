from yaml import safe_load
from distutils.dir_util import remove_tree
from os import makedirs
from subprocess import Popen
from os import environ

class Simulation:
    def __init__(self, platform_path, debugger_path, scenario_path, timeout, with_gui, with_wave):
        self.platform_path = platform_path
        self.debugger_path = debugger_path
        self.scenario_path = scenario_path
        self.timeout = timeout
        self.with_gui = with_gui
        self.with_wave = with_wave

        tc_name = self.scenario_path.split("/")
        tc_name = tc_name[len(tc_name) - 2]
        tc_yaml = safe_load(open("{}/../{}.yaml".format(self.scenario_path, tc_name), "r"))

        self.simulator = "verilator"
        try:
            self.simulator = tc_yaml["simulation"]["simulator"]
        except:
            pass

        if with_wave:
            wave_enabled = False
            try:
                wave_enabled = tc_yaml["simulation"]["trace"]
            except:
                pass
            if not wave_enabled:
                raise Exception("ERROR: Wave viewer is enabled but trace is not enabled in the scenario.")

        try:
            remove_tree("{}/log".format(scenario_path))
            makedirs("{}/log".format(scenario_path))
            open("{}/debug/scheduling_report.txt", 'w').close()
            open("{}/debug/traffic_router.txt", 'w').close()
            open("{}/debug/dmni.log", 'w').close()
        except:
            pass

    def run(self):
        make_env = environ.copy()
        make_env["TRACE"] = "1" if self.with_wave else "0"

        if(self.timeout == -1):
            simulation = Popen(["make", "-C", self.scenario_path, self.simulator], env=make_env)
        else:
            raise NotImplementedError("Timeout is not implemented yet.")

        if self.with_gui:
            debugger = Popen(["java", "-jar", "{}/Memphis_Debugger.jar".format(self.debugger_path), "{}/debug/platform.cfg".format(self.scenario_path)])

        wave_run = False
        try:
            simulation.wait()
            if self.with_wave and self.simulator == "verilator":
                wave = Popen(["gtkwave", "-f", "{}/trace.fst".format(self.scenario_path)])
                wave_run = True
                wave.wait()
            elif self.with_gui:
                debugger.wait()
        except KeyboardInterrupt:
            if not wave_run and self.with_wave and self.simulator == "verilator":
                wave = Popen(["gtkwave", "-f", "{}/trace.fst".format(self.scenario_path)])
                wave.wait()
