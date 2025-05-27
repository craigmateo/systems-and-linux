# Part 1: Linux Shell Practice

####  Check Kernel Version
    uname -r


#### List Active Processes
    ps aux | less


#### Inspect the Scheduler for a Given Process
    ps -o pid,ppid,ni,pri,rtprio,comm -p <PID>

#### View Mounted File Systems
    df -hT

#### Explore /proc
    ls /proc
    cat /proc/cpuinfo
    cat /proc/meminfo

#### Check Disk Usage of Your Home Directory
    du -sh ~

#### Virtualization Check (if in VM)
    systemd-detect-virt


#### Priority
    ps -eo pid,pri,ni,comm

- `PRI` is the process priority.
- `NI` is the nice value (lower is higher priority).
- `comm` is the command name.

Output:

    PID PRI  NI COMMAND
        1  19   0 init(Ubuntu)
        4  19   0 init
        7  19   0 SessionLeader
        8  19   0 bash
      706  19   0 ps

# Part 2: C Program – Read System Info from /proc

📄 `system_info.c`

Write a simple C program that reads:
- CPU info from `/proc/cpuinfo`
- Memory info from `/proc/meminfo`
- Kernel version from `uname` system call

#### Output:

    === System Info ===
    Kernel: 4.4.0-26100-Microsoft
    CPU: Intel(R) Core(TM) i7-10750H CPU @ 2.60GHz
    Memory:        16604212 kB