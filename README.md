# Memphis-V

Manycore Modeling Platform for Phivers (Processor Hive for RS5)

## About

Memphis-V is a full manycore model with:
* [Phivers](https://github.com/gaph-pucrs/Phivers): hardware modeled in SystemVerilog
* [MAestro](https://github.com/gaph-pucrs/MAestro): an operating system for many-cores 
* [libmemphis](https://github.com/gaph-pucrs/libmemphis) and [libmutils](https://github.com/gaph-pucrs/libmutils): standard set of support libraries
* [mint](https://github.com/gaph-pucrs/mint): CLI generation tools
* [Debug tools](https://github.com/gaph-pucrs/GraphicalDebugger)
* Standard set of applications
* Standard Management Application

The chip area is divided in two regions: GPPE (General Purpose Processing Elements) and Peripherals.
For more information, check the [platform documentation](/docs/Platform.md) and all submodules linked above.

Memphis-V is derived from several years of research in manycore platforms.
It is also the 5th major version since [HeMPS](https://github.com/gaph-pucrs/hemps), hence the "V" suffix.
The versions that contributed to Memphis-V are:
* (1) [HeMPS](https://github.com/gaph-pucrs/hemps): Hermes Multiprocessor System on Chip (Cluster-based-management, MIPS core, SystemC/VHDL)
* (2) [Memphis](https://github.com/gaph-pucrs/Memphis): HeMPS with peripherals (SystemC/VHDL)
* (3) [HHeMPS](https://github.com/aedalzotto/hemps): Hybrid HeMPS RISC-V/MIPS (SystemC)
* (3) [MMemphis](https://github.com/gaph-pucrs/MMemphis): Memphis without clustering (SystemC/VHDL)
* (4) [MA-Memphis](https://github.com/gaph-pucrs/MA-Memphis): Application-Managed MMemphis with RISC-V and broadcast NoC (SystemC)
* (5) [Memphis-V](https://github.com/gaph-pucrs/Memphis-V): RTL-modeled MA-Memphis (SystemVerilog)

## Installation

Memphis-V runs in a Linux environment.
It is possible, although not supported to run under a Mac environment.
It is possible to use the WSL to run Memphis-V platform under Windows.

### Pre-requisites

* riscv64-elf-gcc (to build OS, libraries and applications, check [how to obtain RISCV cross-compiler](/docs/riscv.md))
* Graphical Debugger (optional, check [how to obtain Debugger](/docs/Debugger.md))
* Either Verilator ([how to obtain Verilator](/docs/verilator.md)) or [Questa](https://eda.sw.siemens.com/en-US/ic/questa/simulation/advanced-simulator/)

The Verilator build uses `--binary`, which needs C++20 coroutines in the host compiler (GCC 10 or newer).
On a host whose default GCC is older, load a C++20-capable Verilator and a newer GCC before building, e.g.:
```sh
source /usr/share/Modules/init/bash
module load riscv64-elf/15.2.0-gaph verilator/5.024-CXX20
source /opt/rh/gcc-toolset-13/enable
```

### Obtaining Memphis-V

Clone this repository **with submodules**.
The master branch contains the latest release without development commits.
In this example we chose the home directory to clone Memphis-V.

```sh
cd ~
git clone https://github.com/gaph-pucrs/Memphis-V.git --recurse-submodules
```

Install `mint` according to the [README](https://github.com/gaph-pucrs/mint).

Export the environment variable to the cloned `Memphis-V` directory:
```sh
export MEMPHIS_PATH=~/Memphis-V
```

## Generating the model

Memphis-V separates _testcase_, _applications_ and _scenario_ build.
A testcase contains a description of the hardware and operating system of the platform.
Create a new yaml file in a sandbox folder. 
Here the example name will be example_testcase.yaml.
The file should contain:
```yaml
simulation:                   # Optional: simulation parameters
  simulator: verilator        # Optional: verilator (default) or vsim
  trace: no                   # Optional: generate wave trace (default is off)
hw:                           # Hardware properties
  page_size_inst_KB: 32       # Size of each instruction memory page (maximum task instruction size)
  page_size_data_KB: 16       # Size of each task memory page (maximum task data size)
  tasks_per_PE: 4             # Maximum number of tasks in the same PE (will define memory size)
  mpsoc_dimension: [3,3]      # Dimension of the many-core [X, Y]
  Peripherals:                # Attached peripherals
    - name: MA_INJ            # Requided: MA Injector peripheral
      pe: 0,0                 # is connected at border PE 0x0
      port: S                 # Connected at port SOUTH. Note to use a border port.
    - name: APP_INJ           # Required: Application Injector peripheral
      pe: 2,2                 # is at border PE 2x2
      port: N                 # Connected at port NORTH. Note to use a border port.
  parameters:                 # Optional: list of parameters to be passed to hardware build
    - TRAFFIC_DEBUG: yes      # Optional: enable NoC traffic debugging (default is on)
    - UART_DEBUG: yes         # Optional: enable application stdout to log files (default is on)
    - SCHED_DEBUG: yes        # Optional: enable scheduler debugging (default is on)
    - PIPE_DEBUG: yes         # Optional: enable messagin protocol debug (default is on)
    - RAM_DEBUG: no           # Optional: enable RAM access debug (default is off)
    - RS5_DEBUG: no           # Optional: enable core register bank debug (default is off)
    - DMNI_DEBUG: no          # Optional: enable DMNI timing debug (default is off)
    - MEM_PROFILE: no         # Optional: per-PE memory occupancy profiling (default is off)
    - MEM_PROFILE_BLOCK: 4096 # Optional: profiling granularity in bytes (default is 4096)
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

### Secure region (OSZ)

A testcase can reserve a region of PEs for secure applications.
`osz_window: [X, Y]` gives its size; the region always starts at PE 0x0 and covers x from 0 to X-1 and y from 0 to Y-1.
For example, `[3,2]` covers PEs 0x0, 0x1, 1x0, 1x1, 2x0 and 2x1.
Column X, right next to the region, is always left free: non-secure applications, including the management application, may only use PEs with x >= X+1.
On a 5x5 mesh with `[2,2]`, the region is 0x0 to 1x1, column 2 is free, and non-secure tasks run at x >= 3.
Omit the key to disable the region.
```yaml
hw:
  mpsoc_dimension: [5,5]
  osz_window: [2,2]           # Optional: secure region size [X, Y] starting at PE 0x0 (default is none)
  Peripherals:
    - name: APP_INJ
      pe: 4,4                 # Peripherals must be outside the region; top-right is recommended
      port: E
    - name: MA_INJ
      pe: 4,4
      port: N
```

The mapper places secure applications by whole region rows.
Each region row is X PEs wide and holds X * tasks_per_PE tasks.
A secure application claims the lowest block of contiguous free rows that fits all its tasks (and covers its statically mapped ones).
A row is never shared between applications: slots left free in a claimed row stay reserved until the application terminates.
A secure application that finds no free block waits until enough rows are released.
Secure tasks are not migrated.

Each secure application has a single entrance: the east port of PE (X-1, hi), where hi is the top row it claimed.
The kernels route every packet through it with source routing (the DMNI SR flag, header bit 27):
* Into the application: the packet first goes to PE (X, hi) in the free column, which turns it into row hi through the entrance, and it then reaches its target inside the application.
* Out of the application: a task in row hi leaves directly through the entrance; a task in a lower row first goes up to row hi in its own column, turns there, and leaves through the entrance.
* Inside the application and between non-secure PEs, packets follow plain XY routing.

The mapper broadcasts which rows each secure application claims (`OSZ_ROWS`), and the application injector adds the same turn to the task binaries it sends.
We recommend placing the mapper task and both injectors at the top-right PE of the mesh, so that management traffic runs along the top row and down the free column, away from the rows the secure applications use.

In the scenario, each application entry can be marked secure, so the same application can run as secure in one entry and non-secure in another:
```yaml
apps:
  - name: prod_cons
    secure: yes               # Optional: run this instance as secure (default is no)
    static_mapping:
      prod: [0,0]             # Secure applications may only be pinned inside the region
  - name: prod_cons           # Same application, non-secure
    static_mapping:
      prod: [3,1]             # Non-secure applications may only be pinned at x >= X+1
```

mint checks, when generating:
* X is at most the mesh width minus 2 (the free column plus at least one column for non-secure tasks); Y is at most the mesh height.
* No peripheral is on a PE inside the region.
* Management tasks and statically mapped tasks of non-secure applications are at x >= X+1.
* Statically mapped tasks of secure applications are inside the region, within as many rows as the application claims.
* A secure application fits in the region (its tasks need at most Y rows), and a non-secure application fits in the PEs at x >= X+1.
* If an application is marked secure but the testcase has no `osz_window`, mint prints a warning and runs it as non-secure.

#### Closing the zone

Every region row is always inside a closed zone: the zone of the secure application that claimed it, or, while no application owns it, a one-row zone of its own.
The links on a zone's edge are blocked by a wrapper around each PE's external ports (`Phivers/rtl/PhiversOszFilter.sv`), which the kernel drives through the `DMNI_OSZ_BLOCK` register:
* A packet arriving at, or leaving through, a blocked port is dropped whole, and the simulation log shows one `[OSZ] ... dropped packet` line for it. A port changes mode only between packets.
* The east port of the entrance PE (X-1, hi) is the zone's access point. For now it accepts only task binaries from the application injector and messages whose source is the mapper or an injector; this stands in for a shared-key check.
* A task of a secure application is released only once its PE belongs to the application's closed zone.

The mapper's PE is learned once, from the first `RELEASE_PERIPHERAL` broadcast (sent when the management application is mapped, before any other application runs). Only that PE may change the zones (`OSZ_ROWS`, `OSZ_ZONE_CLEAR`).

#### Teardown

When a task of a secure application ends, its kernel clears what the task leaves on the PE (the whole data page, which also holds `.rodata`, the saved registers, pending messages) and reports `OSZ_TASK_DONE` over the broadcast network.
When the application has no task left, after a normal end or an abort, the mapper broadcasts `OSZ_ZONE_CLEAR` for its rows; every PE of the zone clears what remains and replies `OSZ_ZONE_CLEARED`.
The rows are released for another application only after one reply from each PE of the zone.
The text page is not cleared: instruction memory can only be written by the DMNI, and tasks cannot read it as data.

#### Examples and regression

Complete examples are in `regression/`:
* `tc_osz.yaml`, and `tc_noosz.yaml` (the same platform without the region)
* `apps_osz.yaml`: the applications the scenarios use
* `sc_osz.yaml`, `sc_osz_rows.yaml` (secure applications competing for rows), `sc_osz_entrance.yaml` (a two-row secure application and its single entrance)
* `sc_osz_clear.yaml`: `osz_mark` fills its data pages with a pattern and `osz_probe`, on the same PEs afterwards, counts what is left (`PAGE CLEAN` on `tc_osz.yaml`, `PAGE DIRTY` on `tc_noosz.yaml`)
* `sc_osz_abort.yaml`: teardown after an abort
* `tc_osz_attack.yaml`: `tc_osz.yaml` with `OSZ_ATTACK: yes`, a simulation-only test that injects packets ignoring the single entrance from unused mesh-edge ports; every one must be dropped

`regression/run_osz.sh` builds and simulates all of them and checks each with `regression/osz_check.py` (placement, entrance routing, dropped packets, residue, errors):
```sh
cd regression
./run_osz.sh -j 4          # add --long for sc_osz_rows (about 20 minutes)
```

After creating the description of the testcase and the scenario, the testcase should be generated.
This step builds the support libraries, the kernel, and all management tasks:
```console
mint testcase example_testcase.yaml
```

Then, generate the application instances inside the testcase folder with the yaml description:
```
mint applications example_testcase example_applications.yaml
```

Then, the scenario should be generated for the testcase folder previously created:
```console
mint scenario example_testcase example_scenario.yaml 
```

## Simulating

To simulate the generated model, run the simulation for the generated scenario folder:

```console
mint simulate example_testcase/example_scenario
```

If the graphical debugger is properly installed, it should open automatically.
Otherwise, run the simulation without the graphical debugger:
```console
mint simulate example_testcase/example_scenario --nogui
```

The simulation will automatically stop once all applications in the scenario are evaluated.
You can also set a timeout for the simulation (in milliseconds):
```console
mint simulate example_testcase/example_scenario --timeout 50
```

## Evaluating and Debugging

To open the debugger manually after a simulation is already done, run:

```console
mint debug example_testcase/example_scenario
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

* Migration heuristic
```
Dalzotto, A. E., Borges, C. S., Ruaro, M., and Moraes, F. G. (2022). Leveraging NoC-based Many-core Performance Through Runtime Mapping Defragmentation. In Proceedings of the International Conference on Electronics, Circuits, and Systems (ICECS), pages 1-6.
```

* Mapping heuristic
```
Dalzotto, A. E., Ruaro, M., Erthal, L. V., and Moraes, F. G. (2021). Dynamic Mapping for Many-cores using Management Application Organization. In Proceedings of the International Conference on Electronics, Circuits, and Systems (ICECS), pages 1-6.
```

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
