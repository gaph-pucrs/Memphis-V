from yaml import safe_load
from shutil import rmtree
from subprocess import Popen
from os import environ, makedirs

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
                raise Exception("Wave viewer is enabled but trace is not enabled in the testcase.")

        # Clear files that are written in append mode
        open("{}/debug/scheduling_report.txt".format(scenario_path), 'w').close()
        open("{}/debug/traffic_router.txt"   .format(scenario_path), 'w').close()

    def run(self):
        make_env = environ.copy()
        make_env["TRACE"] = "1" if self.with_wave else "0"

        sim_timeout = "SIM_TIMEOUT=run -all"
        if self.simulator == "verilator":
            sim_timeout = "SIM_TIMEOUT=+timeout={}".format(self.timeout)
        elif sim_timeout != 0:
            sim_timeout = "SIM_TIMEOUT=run {}ms".format(self.timeout)

        simulation = Popen(["make", "-C", self.scenario_path, "-f", "sim.mk", self.simulator, sim_timeout], env=make_env)

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
