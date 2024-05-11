# Memphis-V

Many-core Modeling Platform for Phivers (Processor Hive for RS5)

## About

Memphis-V is a full many-core model with:
* [Phivers](https://github.com/gaph-pucrs/MAestro): hardware modeled in SystemVerilog
* [MAestro](https://github.com/gaph-pucrs/MAestro): an operating system for many-cores 
* [libmemphis](https://github.com/gaph-pucrs/libmemphis) and [libmutils](https://github.com/gaph-pucrs/libmutils): standard set of support libraries
* Standard set of applications
* Standard Management Application
* Scenario generation tools
* [Debug tools](https://github.com/gaph-pucrs/GraphicalDebugger)

The chip area is divided in two regions: GPPC (General Purpose Processing Cores) and Peripherals.
For more information, check the [platform documentation](/docs/Platform.md).

Memphis-V is derived from several years of research in many-core platforms.
It is also the 5th major version since [HeMPS](https://github.com/gaph-pucrs/hemps), hence the "V" suffix.
The versions that contributed to Memphis-V are:
* (1) [HeMPS](https://github.com/gaph-pucrs/hemps): Hermes Multiprocessor System on Chip (Cluster-based-management, MIPS core, SystemC/VHDL)
* (2) [Memphis](https://github.com/gaph-pucrs/Memphis): HeMPS with peripherals (SystemC/VHDL)
* (3) [HHeMPS](https://github.com/aedalzotto/hemps): Hybrid HeMPS RISC-V/MIPS (SystemC)
* (3) [MMemphis](https://github.com/gaph-pucrs/MMemphis): Memphis without clustering (SystemC/VHDL)
* (4) [MA-Memphis](https://github.com/gaph-pucrs/MA-Memphis): Application-Managed MMemphis with RISC-V and broadcast NoC (SystemC)
* (5) [Memphis-V](https://github.com/gaph-pucrs/Memphis-5): RTL-modeled MA-Memphis (SystemVerilog)

## Installation

Memphis-V runs in a Linux environment.
It is possible, although not supported to run under a Mac environment.
It is possible to use the WSL to run Memphis-V platform under Windows.

### Pre-requisites

* riscv64-elf-gcc (to build OS, libraries and applications, check [how to obtain RISCV cross-compiler](/docs/riscv.md))
* Python and needed libraries (to generate platform, check [how to obtain Python](/docs/python.md))
* Graphical Debugger (optional, check [how to obtain Debugger](/docs/Debugger.md))
* Either Verilator ([how to obtain Verilator](/docs/verilator.md)) or [Questa](https://eda.sw.siemens.com/en-US/ic/questa/simulation/advanced-simulator/)

### Obtaining Memphis-V

Clone this repository **with submodules**.
The master branch contains the latest release without development commits.
In this example we chose the home directory to clone Memphis-V.

```console
cd ~
git clone https://github.com/gaph-pucrs/Memphis-5.git --recurse-submodules
```

Export the environment variable:
* `PATH=~/Memphis-5/bin:$PATH`

Here we do it persistently with .bashrc. You can export in .zshrc or other environment file according to your needs.
```console
echo -e "# Memphis-V\nexport PATH=~/Memphis-5/bin:\${PATH}\n" >> ~/.bashrc
```

Remember to close and reopen the terminal after running or source the environment file (e.g. `source ~/.bashrc`).

## Generating the model

Memphis-V separates _testcase_, _applications_ and _scenario_ build.
A testcase contains a description of the hardware and operating system of the platform.
Create a new yaml file in a sandbox folder. 
Here the example name will be example_testcase.yaml.
The file should contain:
```yaml
simulation:                 # Optional: simulation parameters
  simulator: verilator      # Optional: verilator (default) or vsim
  trace: no                 # Optional: generate wave trace (default is off)
hw:                         # Hardware properties
  page_size_inst_KB: 32     # Size of each instruction memory page (maximum task instruction size)
  page_size_data_KB: 16     # Size of each task memory page (maximum task data size)
  tasks_per_PE: 4           # Maximum number of tasks in the same PE (will define memory size)
  mpsoc_dimension: [3,3]    # Dimension of the many-core [X, Y]
  Peripherals:              # Attached peripherals
    - name: MA_INJ          # Requided: MA Injector peripheral
      pe: 0,0               # is connected at border PE 0x0
      port: S               # Connected at port SOUTH. Note to use a border port.
    - name: APP_INJ         # Required: Application Injector peripheral
      pe: 2,2               # is at border PE 2x2
      port: N               # Connected at port NORTH. Note to use a border port.
  parameters:               # Optional: list of parameters to be passed to hardware build
    - TRAFFIC_DEBUG: yes    # Optional: enable NoC traffic debugging (default is on)
    - UART_DEBUG: yes       # Optional: enable application stdout to log files (default is on)
    - SCHED_DEBUG: yes      # Optional: enable scheduler debugging (default is on)
    - PIPE_DEBUG: yes       # Optional: enable messagin protocol debug (default is on)
    - RAM_DEBUG: no         # Optional: enable RAM access debug (default is off)
    - RS5_DEBUG: no         # Optional: enable core register bank debug (default is off)
```

The applications description contains a list of **possible** applications to evaluate in a scenario.
You can create multiple different variations of an application by changing its definitions.
Create a new yaml file next to the example_testcase.yaml. 
Here this new file will be called example_applications.yaml.
The file should contain:
```yaml
apps:                             # Application properties
  - name: synthetic               # Add application "synthetic"
  - name: prod_cons               # Add application "prod_cons"
    instance: custom              # Optional: name of the instance (default is "default")
    definitions:                  # Optional: list of definitions to customize your instance
      - PROD_CONS_MSG_SIZE: 64    # Optional: this defines PROD_CONS_MSG_SIZE as 64
      - PROD_CONS_ITERATIONS: 100 # Optional: this defines PROD_CONS_ITERATIONS as 100
```

The scenario contains the list of applications instances that will be evaluated in the platform.
Create a new yaml file next to the example_applications.yaml and example_testcase.yaml.
Here this new file will be called example_scenario.yaml.
This file should contain:
```yaml
management:                 # Management application properties
  - task: mapper_task       # Required: the first management task should be mapper_task
    static_mapping: [0,0]   # Required: map mapper_task to 0x0
  - task: migration_task    # Optional: migration_task is a QoS decider for real-time applications
    static_mapping: [0,1]   # Required: all management tasks should be statically mapped
  - task: rt_monitor        # Optional: rt_monitor is a QoS observer for real-time applications
    static_mapping: [0,2]   # Required: all management tasks should be statically mapped
apps:                       # Application properties
  - name: synthetic         # Optional: add instance of application "synthetic"
  - name: prod_cons
    instance: custom        # Optional: define the instance we want to add (from applications yaml)
  - name: prod_cons
    instance: custom        # We can add multiple runs of the same application instance (e.g. prod_cons custom)
    start_time_ms: 5        # Optional: application start time (default is 0)
    static_mapping:         # Optional: static mapping (default is dynamic)
      prod: [1,1]           # Optional: task "prod" is mapped to 1x1
```

After creating the description of the testcase and the scenario, the testcase should be generated.
This step builds the support libraries, the kernel, and all management tasks:
```console
memphi5 testcase example_testcase.yaml
```

Then, generate the application instances inside the testcase folder with the yaml description:
```
memphi5 applications example_testcase example_applications.yaml
```

Then, the scenario should be generated for the testcase folder previously created:
```console
memphi5 scenario example_testcase example_scenario.yaml 
```

## Simulating

To simulate the generated model, run the simulation for the generated scenario folder:

```console
memphi5 simulate example_testcase/example_scenario
```

If the graphical debugger is properly installed, it should open automatically.
Otherwise, run the simulation without the graphical debugger:
```console
memphi5 simulate example_testcase/example_scenario --nogui
```

The simulation will automatically stop once all applications in the scenario are evaluated.
You can also set a timeout for the simulation (in milliseconds):
```console
memphi5 simulate example_testcase/example_scenario --timeout 50
```

## Evaluating and Debugging

To open the debugger manually after a simulation is already done, run:

```console
memphi5 debug example_testcase/example_scenario
```

### Main window

The main window contains the informations described in the image below.
Additional functionalities are:

* [Communication Overview](#communication-overview) (Tools->Communication Overview)
* [Task Mapping Overview](#task-mapping-overview) (Tools->Task Mapping Overview)
* [Debug Log Reader for MPSoCs (Deloream)](#debug-log-reader-for-mpsocs-deloream) (Tools->Deloream)
* PE Information (Click the desired PE)
  * [PE Log](#pe-log) (Log->Continuous Reading)
  * [Scheduling](#scheduling) (Scheduling->Open Scheduling Graph)

![MainWindow](docs/fig/MainWindow.png)

### Communication Overview

Shows the NoC traffic distributed among PEs.

### Task Mapping Overview

Shows tasks running in each mapped PE or tasks that already terminated.

### Debug Log Reader for MPSoCs (Deloream)

Shows by application and task the debug messages produced.

### PE Log

Shows all messages produced by the PE (including the kernel).

### Scheduling

Shows a scheduling graph of the selected PE.

### Further reading

Check the [GraphicalDebugger](https://github.com/gaph-pucrs/GraphicalDebugger) repository for more information.
A [video](https://youtu.be/nvgtvFcCc60) in portuguese is available showing all features of the Debugger.

# Acknowledgements

* MA-Memphis
```
Dalzotto, A. E., Ruaro, M., Erthal, L. V., and Moraes, F. G. (2021). Management Application - a New Approach to Control Many-Core Systems. In Proceedings of the Symposium on Integrated Circuits and Systems Design (SBCCI), pages 1-6.
```

* MA Paradigm
```
Ruaro, M., Santana, A., Jantsch, A., and Moraes, F. G. (2021). Modular and Distributed Management of Manycore SoCs. ACM Transactions on Computer Systems (TOCS), 38(1-2):1-16.
```

* Memphis
```
Ruaro, M., Caimi, L. L., Fochi, V., and Moraes, F. G. (2019). Memphis: a framework for heterogeneous many-core SoCs generation and validation. Design Automation for Embedded Systems, 23(3-4):103-122.
```

* Graphical debugger
```
Ruaro, M., Carara, E. A., and Moraes, F. G. (2014). Tool-set for NoC-based MPSoC debugging—A protocol view perspective. In Proceedings of the IEEE International Symposium on Circuits and Systems (ISCAS), pages 2531-2534.
```

* Generation framework
```
Castilhos, G., Wachter, E., Madalozzo, G., Erichsen, A., Monteiro, T., and Moraes, F. (2014). A framework for mpsoc generation and distributed applications evaluation. In Proceedings of the International Symposium on Quality Electronic Design (ISQED), pages 408-411.
```

* HeMPS
```
Carara, E. A., De Oliveira, R. P., Calazans, N. L., and Moraes, F. G. (2009). HeMPS-a framework for NoC-based MPSoC generation. In Proceedings of the IEEE International Symposium on Circuits and Systems (ISCAS), pages 1345-1348.
```
