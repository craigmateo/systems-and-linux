# Module 8: Boolean Operations

## Overview

This module introduces the concept of logical operations on bits and understanding bits in computer memory. It describes different types of basic Boolean operations (AND, OR, NOT, EXCLUSIVE OR, etc.) and their different representations while in use.

You will explore how logical operations are carried out on bits as a unit of storage and operation in computers. You will learn and understand the following logic functions and their different representations:

- AND  
- OR  
- NOT  
- NAND  
- NOR  
- XOR  
- XNOR  

Boolean operations are beneficial in programming and computer coding for writing different logic.

The Boolean Operations module details:

- Bit operations and how different functions respond to combinations of bit inputs  
- Different representation techniques used to represent different gates  
- Comprehensive details on AND, OR, NOT, NAND, NOR, XOR, and XNOR logic functions  

---

### Learning Outcomes

By the end of this module, you should be able to:

- Understand bits and the application of operations on bits  
- Explain different types of basic Boolean operations (AND, OR, NOT, EXCLUSIVE OR, etc.)  
- Explain and understand different representations of Boolean operations  

---

### Key Terms and Concepts

Click on the title to view more about the Key Terms and Concepts:

- **Boolean Operation**  
  The logical operations performed on a bit or bits are called Boolean operations and are named after George Boole.

- **Logic Gate**  
  A Logic Gate is an idealized or physical electronic device implementing a Boolean function, a logical/Boolean operation performed on one or more binary inputs that produces a single binary output.

## Boolean Operation

- A **bit** is the smallest unit of data stored in a computer.  
- It stores a single binary digit: either **1** or **0**.  
- Depending on context, a bit can represent:  
  - high/low  
  - on/off  
  - true/false  
  - yes/no  
  - activated/deactivated  

- Operations performed on bits (individually or in combination) are called **Boolean operations**.  
- Named after George Boole (1815–1864), an English mathematician, philosopher, and logician.  
- Boolean operations are also called **Boolean functions** or **logic functions**.  
- These functions provide predefined responses to input bits regardless of original values.  

- Boolean gates are classified into two categories:  
  - **Basic Gates**  
  - **Derived Gates**  

- Common Boolean gates include:  
  - AND  
  - OR  
  - NOT  
  - XOR  
  - NAND  
  - NOR  
  - XNOR  

- The first three (AND, OR, NOT) are **basic gates**.  
- The others are **derived gates**, constructed from basic gates.  
- Originally used in electronic circuit design, now also used in logic code for processors mimicking circuit behavior.  

---

## Representations of Logic Functions

Logic functions can be represented in three main ways:  

- Algebraically  
- Truth tables  
- Electronic circuits  

Example:  
- The OR logic of inputs A and B is algebraically represented as:  
  - **A + B**  

---

## Truth Table (Example)

Inputs: A, B  
Outputs for each gate:

- A=0, B=0  
  - AND: 0  
  - NAND: 1  
  - OR: 0  
  - NOR: 1  
  - XOR: 0  
  - XNOR: 1  

- A=0, B=1  
  - AND: 0  
  - NAND: 1  
  - OR: 1  
  - NOR: 0  
  - XOR: 1  
  - XNOR: 0  

- A=1, B=0  
  - AND: 0  
  - NAND: 1  
  - OR: 1  
  - NOR: 0  
  - XOR: 1  
  - XNOR: 0  

- A=1, B=1  
  - AND: 1  
  - NAND: 0  
  - OR: 1  
  - NOR: 0  
  - XOR: 0  
  - XNOR: 1  

---

## Electronic Circuit Representations

There are two ways to represent Boolean functions in electronic circuits:  

- **Distinctive-shape**  
- **Rectangular-shape**  

Examples of three basic gates in circuit form:

| Boolean Operation | Distinctive Shape         | Rectangular Shape                   |
|-------------------|--------------------------|-----------------------------------|
| AND               | Distinctive shape AND    | Rectangular shape AND (with & symbol)   |
| OR                | Distinctive shape OR     | Rectangular shape OR (with ≥1 symbol)   |
| NOT               | Distinctive shape NOT    | Rectangular shape NOT (with 1 symbol)   |

---

## Boolean Function Gates
### AND Gate
This operation is performed on two inputs, let’s say A and B. The output of this function is 1 only if both inputs, A and B are 1. In all other cases, the output is 0.

For instance, if an organization requires the signature on a cheque from both the president and the treasurer to be processed, then the relationship between the two signatures is AND. For the cheque to be processed, both signatures must be present (output = 1). If either signature is missing (input = 0), or both are missing, the cheque will not be processed (output = 0).

| A | B | A • B |
| - | - | ----- |
| 0 | 0 | 0     |
| 0 | 1 | 0     |
| 1 | 0 | 0     |
| 1 | 1 | 1     |


### OR Gate
This operation is performed on two inputs, A and B. The output is 1 if at least one input is 1. If both inputs are 0, output is 0.

For example, if a job requires either an undergraduate degree with 2 years experience or a graduate degree, then the relationship is OR. If either condition is met (output = 1), the person is qualified.

| A | B | A + B |
| - | - | ----- |
| 0 | 0 | 0     |
| 0 | 1 | 1     |
| 1 | 0 | 1     |
| 1 | 1 | 1     |


### NOT Gate
This operation is performed on a single input A. The output is 1 if the input is 0, and 0 if the input is 1.

For instance, a thermostat set to 20°C to turn an AC on: if the temperature falls below 20 (input = 1), the AC turns off (output = 0).

| A | Ā |
| - | - |
| 0 | 1 |
| 1 | 0 |


### NAND Gate
NAND stands for NOT AND. It is an AND operation followed by a NOT. The output is 1 if at least one input is 0. Output is 0 only when both inputs are 1.

For example, to operate a water pump or heater but not both at the same time due to high power consumption, the relationship is NAND. If either device is off (input 0), output is 1 (power socket ON).

| A | B | NAND (¬(A•B)) |
| - | - | ------------- |
| 0 | 0 | 1             |
| 0 | 1 | 1             |
| 1 | 0 | 1             |
| 1 | 1 | 0             |

### NOR Gate
NOR stands for NOT OR. It is an OR operation followed by a NOT. The output is 1 only if both inputs are 0; otherwise, output is 0.

For example, to pass airport security, you must have no unauthorized items on your person (A=0) and no unauthorized items in your bag (B=0). Security clearance is NOR between these conditions.

| A | B | NOR (¬(A+B)) |
| - | - | ------------ |
| 0 | 0 | 1            |
| 0 | 1 | 0            |
| 1 | 0 | 0            |
| 1 | 1 | 0            |

### XOR Gate
XOR stands for Exclusive OR. It outputs 1 only if exactly one input is 1. If both inputs are the same (both 0 or both 1), output is 0.

For example, if you want a beverage, either hot tea or Coke, but not both simultaneously, the relationship is XOR.

| A | B | XOR (A⊕B) |
| - | - | --------- |
| 0 | 0 | 0         |
| 0 | 1 | 1         |
| 1 | 0 | 1         |
| 1 | 1 | 0         |

### XNOR Gate
XNOR stands for Exclusive NOR. It outputs 1 only if both inputs are equal (both 0 or both 1). If inputs differ, output is 0.

For example, two light switches at opposite ends of a staircase: the light is ON if both switches are OFF or both are ON.

| A | B | XNOR (¬(A⊕B)) |
| - | - | ------------- |
| 0 | 0 | 1             |
| 0 | 1 | 0             |
| 1 | 0 | 0             |
| 1 | 1 | 1             |
