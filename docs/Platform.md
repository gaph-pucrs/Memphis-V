# Memphis-V platform

## Adding new peripherals

Memphis-V is bundled with AppInjector and MAInjector peripherals.
To create your own peripheral, check the [guide to add new peripherals](AddPeripheral.md).

## Packets

A data packet, in the figure below, from the NoC point of view, has a header and a payload.
The packet header contains the target router address and the payload size.
From the task point of view, a message contains: (i) message header: encapsulates the packet and service header (e.g., message reception, task mapping, request for a message); (ii) message payload: optional field. 
It may contain, for example, user data or object code of a task.

![Packet](fig/packet.png)

## Message Protocol

Each message exchanged between task to kernel, task to peripheral, and management task to management task, and vice-versa, uses a privileged communication API described in the picture below.

![Communication](fig/communication.png)

In the picture above, each step is:

1. The producer task calls a `Send` syscall, storing the message payload in a buffer and sending a `data available` packet to the consumer;
2. Upon receiving the `data available` packet, the consumer kernel stores in a buffer the producer ID and location;
3. Calling a `Receive` syscall, the consumer checks the FIFO buffer of `data available` messages for a ID and location to request a message via the `message request` packet;
4. The producer kernel, on receiving the `message request` packet, dispaches the message in its buffer with a `message delivery` packet.

## Applications

Memphis-V runs _applications_ composed of _tasks_. 
A standard set of applications is included in [applications directory](/applications).
Each .c file inside an application folder is generated as a task.
The image below shows a communicating task graph model of almost all applications included:

![ctg](fig/ctg.png)

To add a new application to Memphis-V, you can add it directly to the [applications directory](/applications), or inside the application directory of a generated testcase.

## Management Application

The Memphis-V main differential is being Application-managed.
The Management Application can be distributed between various many-cores.
The main advantage is leveraging the parallelism in management, by pipelining it into observation, decision and actuation tasks.
Another possibility is to parallelize the management into functions, i.e., separating, for example, DVFS management from migration management.
Memphis-V is bundled with the following MA tasks:

* **RT Monitor (Obvservation):** Receives messages periodically from the kernel LLM (Low-Level Monitor) and detects if a deadline from a real-time task has been violated to send this information to the Decision task.
* **QoS Migration (Decision):** Stores information about the latest missed deadlines.
Upon accumulating parametrizable misses, requests for a task migration to the actuator.
* **Mapper Task (Actuation):** This task is responsible for task mapping and migration actuation.

Note that it is possible to have more than one of the same task in the system.
For example, with multiple QoS Observation tasks, the mapper will indicate to the kernel which is the nearest to send messages to.
Please also note that the mapper task should be the first in the yaml management list and should have its mapping static (to any desired PE).

## Adding new management tasks

It is possible to add new management tasks to the platform.
Check the [guide to add new management tasks](AddManagement.md).

## Adding new peripherals

TODO
