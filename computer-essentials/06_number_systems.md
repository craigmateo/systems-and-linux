# Module 6: Numbers Based Systems

## Overview
This module covers positional numeral systems used in computing, focusing on binary, octal, decimal, and hexadecimal systems. It explains their significance in information technology, how to read and convert between these systems, and introduces ASCII character codes.

You will learn how numbers are represented in each system, their applications in IT, and conversion methods between these bases.

### Learning Outcomes
By the end of the module, you will be able to:
- Understand and explain binary, octal, decimal, and hexadecimal numeral systems  
- Recognize their importance and usage in computing  
- Convert numbers between these common bases  

### Key Terms and Concepts
- **Binary:** Base 2 numeral system using digits 0 and 1  
- **Decimal:** Base 10 system using digits 0 through 9  
- **Hexadecimal:** Base 16 system using digits 0–9 and letters A–F  
- **Octal:** Base 8 system using digits 0 through 7  
- **Numbers Based Systems:** Positional numeral systems classified by their base  

## Numbers Based System

Humans use various numbering systems, including positional numeral systems, which classify numbers based on their position and base. 

This overview focuses on four key systems used in computing: binary, octal, decimal, and hexadecimal.

The decimal system (also called Hindu-Arabic) is the most common in daily life, using base 10 and a decimal point for fractions. It is foundational for arithmetic and the development of science and technology, especially in the Western world since the 12th century.

*See the video for an introduction to positional numeral systems.*

## Binary System

The binary system uses base 2 with two digits: 0 and 1. It represents all decimal numbers as sequences of zeros and ones. For example, decimal 5 is `101` in binary, and decimal 562 is `1000110010`.

Binary is fundamental to computing because machine language is based on it. Computers convert all instructions and data into binary since the two states (0 and 1) easily correspond to physical states like ON/OFF or OPEN/CLOSED.

### Converting Binary to Decimal

Each binary digit is multiplied by 2 raised to the power of its position, starting from zero on the right.

Example:  
Binary `101101` = 1×2⁵ + 0×2⁴ + 1×2³ + 1×2² + 0×2¹ + 1×2⁰ = 45

*See the video for a deeper understanding of binary numbering.*

## Octal System

The octal system (short: "oct") uses base 8 with digits 0 to 7. It represents decimal numbers using only eight digits. For example, decimal numbers 5, 8, 10, 100, and 562 correspond to octal `5`, `10`, `12`, `144`, and `1062` respectively.

Octal is popular in computing as a convenient shorthand for binary. Each octal digit corresponds to 3 binary digits grouped from right to left. For instance, decimal 100 is binary `1100100`. Grouping the binary digits in threes: `1 (100) (100)` converts to octal digits `1 (4) (4)` or octal `144`.

### Converting Octal to Decimal

Each digit is multiplied by 8 raised to the power of its position, starting at zero from the right.

Example:  
Octal `370` = 3×8² + 7×8¹ + 0×8⁰ = 248

*See the video for a detailed explanation of octal numbering.*

## Hexadecimal System

The hexadecimal system ("hex") uses base 16, combining digits 0-9 and letters A-F (representing values 10-15). For example, decimal numbers 5, 8, 10, 100, and 562 convert to hex as `5`, `8`, `A`, `64`, and `232` respectively.

Hex is popular in modern computing as a compact way to represent binary numbers, often replacing octal. Each hex digit corresponds to 4 binary digits grouped from right to left. For example, decimal 100 is binary `1100100`. Grouping the binary digits by 4 gives `110 (0100)`, which converts to hex digits `6` and `4`, or hex `64`.

### Converting Hexadecimal to Decimal

Each digit is multiplied by 16 raised to the power of its position, starting from zero on the right.

Example:  
Hex `F8` = F×16¹ + 8×16⁰ = 15×16 + 8 = 248

*Refer to the video for a detailed explanation of hexadecimal numbering.*

## Number System Conversions

### Octal to Decimal
Example: Octal `370` to Decimal  
3 × 8² + 7 × 8¹ + 0 × 8⁰ = 192 + 56 + 0 = **248**

### Octal to Binary
Example: Octal `7` to Binary  
7 (octal) = 111 (binary)

### Octal to Hexadecimal
Example: Octal `144` to Hexadecimal  
144 (octal) = 100 (decimal) = 64 (hexadecimal)

---

### Hexadecimal to Decimal
Example: Hex `F8` to Decimal  
F × 16¹ + 8 × 16⁰ = 15 × 16 + 8 = **248**

### Hexadecimal to Binary
Example: Hex `A` to Binary  
A (hex) = 1010 (binary)

### Hexadecimal to Octal
Example: Hex `64` to Octal  
64 (hex) = 100 (decimal) = 144 (octal)

---

### Binary to Decimal
Example: Binary `101101` to Decimal  
1 × 2⁵ + 0 × 2⁴ + 1 × 2³ + 1 × 2² + 0 × 2¹ + 1 × 2⁰ = 45

### Binary to Hexadecimal
Example: Binary `1100100` to Hexadecimal  
110 0100 (binary) = 6 4 (hex) = **64**

### Binary to Octal
Example: Binary `1100100` to Octal  
Group as 1 100 100 → 1 4 4 (octal) = **144**

---

### Decimal to Octal
Example: Decimal `100` to Octal  
100 ÷ 8 = 12 remainder 4  
12 ÷ 8 = 1 remainder 4  
1 ÷ 8 = 0 remainder 1  
Result: **144** (octal)

### Decimal to Binary
Example: Decimal `10` to Binary  
10 ÷ 2 = 5 remainder 0  
5 ÷ 2 = 2 remainder 1  
2 ÷ 2 = 1 remainder 0  
1 ÷ 2 = 0 remainder 1  
Result: **1010** (binary)

### Decimal to Hexadecimal
Example: Decimal `100` to Hexadecimal  
100 ÷ 16 = 6 remainder 4  
6 ÷ 16 = 0 remainder 6  
Result: **64** (hexadecimal)

## Character Code
Character codes represent characters using numeric values. The most common system is ASCII (American Standard Code for Information Interchange), which assigns numbers to letters, digits, punctuation, special, and control characters. Computers use the binary form of these numbers internally.

ASCII originally included 128 characters (values 0–127). Later, an extended set was created, often called the "IBM character set," to add graphics and line-drawing symbols.