# Module 9y: CPU

## Overview 
This module introduces the **Central Processing Unit (CPU)** and its main components, explaining its role in processing data and executing instructions in a computer. It covers how data and instructions are prepared and handled within the CPU and provides insight into the functions of compilers, which are important for programmers. The module also offers a brief overview of **multitasking** (parallel computing).

### Learning Outcomes
By the end of the module, you will be able to:

- Understand the primary functions and key parts of the CPU  
- Gain an introduction to multitasking and parallel computing concepts  

### Key Concept
- **CPU:** The Central Processing Unit is the computer’s main processing unit, performing most computations, analogous to the brain in a human body.

# CPU

The **Central Processing Unit (CPU)** is the main processing unit of a computer that does most of the computations, similar to the brain in the human body. It receives input through input devices, executes instructions with the inputs, and processes the information, sending the results to output devices.

---

### Central Processing Unit (CPU): Parts, Definition & Function

*Paul Zandbergen, 4m55s*  
[Click here to open in new window to watch the first two minutes.]

The CPU is the brain of your computer. It handles all instructions provided to the computer, and the faster it does this, the better. Learn how a CPU processes instructions and how computer engineers continuously develop ways to improve its performance.  

There is a variety of CPU architectures available on the market, produced by different manufacturers. They offer different features and specifications aimed at enhancing computation capabilities. Different architectures optimize instruction execution and data transfer in different ways.

---

### The Two Basic Parts in Any CPU

**1. Arithmetic Logic Unit (ALU):**  
- Performs all calculations in the processing unit.  
- Can manipulate data in various ways.  
- Categorized into three classes:  
  - Arithmetic calculations on binary numbers: addition, subtraction, multiplication, division.  
  - Logical operations: OR, AND, NOT.  
  - Retains data entering and exiting the CPU, acting as a gate for the CPU.

**2. Control Unit:**  
- Extracts information/instructions from memory.  
- Decodes and executes the instructions.

---

### Other Key CPU Components

- **Registers:** Provide very fast access to data compared to other types of memory in a computer.  
- **Immediate Access Store (IAS):** Also called Random Access Memory (RAM) or primary memory. Temporarily holds data in queue, ready for processing.  
- **Bus:** Communication system connecting all internal parts of the CPU. Facilitates data transfer between different CPU parts. Also known as internal memory bus, front-side bus, system bus, or memory bus.  
- **Clock:** Measures CPU speed (number of clock cycles per second). Measured in Hertz (Hz), commonly in gigahertz (GHz) for commercial CPUs.

## Multitasking

Modern computers utilize more than one physical processing unit, where each unit has an independent interface, cache, and other processing components. Multiple processors increase the computation capacity of a computer and facilitate intensive parallel program execution (i.e., multitasking).

> **Note:**  
> Multitasking refers to the concept of multiprocessing or distributed memory execution of instructions in parallel. Instructions and/or data are decomposed and packaged into what are called *tasks*. These tasks are then assigned to different processors to be executed in parallel, which can reduce computation time.
