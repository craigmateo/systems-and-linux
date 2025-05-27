# 🧠 OS Code Structure: Layered View

┌──────────────────────────────────────────────────────────────┐
│                        User Programs                         │
│ (e.g., Firefox, Terminal, Text Editor)                       │
├──────────────────────────────────────────────────────────────┤
│             User-space Libraries and System Calls            │
│ (e.g., glibc, POSIX APIs, stdio.h, unistd.h)                 │
├──────────────────────────────────────────────────────────────┤
│            System Call Interface (SCI / API Boundary)        │
│  (Traps into kernel mode, validates & dispatches calls)      │
├──────────────────────────────────────────────────────────────┤
│                         Kernel Space                         │
│ ┌──────────────────────────────────────────────────────────┐ │
│ │ 1. Process & Thread Manager (scheduler, IPC, signals)    │ │
│ │ 2. Memory Manager (paging, allocation, virtual memory)   │ │
│ │ 3. File System (ext4, FAT, VFS layer)                    │ │
│ │ 4. Device Drivers (keyboard, disk, network)              │ │
│ │ 5. Network Stack (TCP/IP implementation)                 │ │
│ │ 6. System Call Handlers (dispatches from SCI)            │ │
│ │ 7. Security (capabilities, access control, namespaces)   │ │
│ └──────────────────────────────────────────────────────────┘ │
├──────────────────────────────────────────────────────────────┤
│                         Hardware Abstraction Layer           │
│    (Translates OS calls to CPU, memory, devices, etc.)       │
├──────────────────────────────────────────────────────────────┤
│                            Hardware                          │
│     (CPU, RAM, Disk, Network Card, Display, etc.)            │
└──────────────────────────────────────────────────────────────┘

## 🔍 Explanation of Layers

| Layer                     | What It Does             | Example Source Code (Linux)             |
| ------------------------- | ------------------------ | --------------------------------------- |
| **User Programs**         | Apps run by the user     | *Not part of OS*                        |
| **Libraries**             | Wrap system calls        | `glibc`, `/usr/include/unistd.h`        |
| **System Call Interface** | Entry point to kernel    | `syscall_table.S`, `sys.c`              |
| **Kernel Subsystems**     | Manage core resources    | `/kernel/`, `/mm/`, `/fs/`, `/drivers/` |
| **Hardware Abstraction**  | Talks to actual devices  | `/arch/x86/`, `/arch/arm/`              |
| **Hardware**              | Real physical components | CPU, disk, etc.                         |

## 🖥️ Real Example: Linux Source Tree
If you look in the [Linux kernel source](https://github.com/torvalds/linux), you'll see:

- `kernel/` → Process management
- `mm/` → Memory management
- `fs/` → File systems
- `drivers/` → Device drivers
- `net/` → Networking
- `arch/x86/` → CPU and architecture-specific code

