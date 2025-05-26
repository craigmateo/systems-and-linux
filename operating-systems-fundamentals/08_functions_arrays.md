# Module 8: Linux Shell Scripting – Functions and Arrays

## Overview  
This module continues exploring Linux Shell Scripting, focusing on functions and arrays in BASH. You will learn how to create and invoke functions, manage variable scope, return values from functions, and work with arrays.

---

### Learning Outcomes  
By the end of this module, you will be able to:

- Implement functions and invoke them from the command interpreter and BASH scripts.
- Export functions to make them part of the user’s profile for access from any shell process.
- Pass values to functions.
- Handle variables in both local and global scopes.
- Return a value when exiting functions.
- Initialize arrays and access individual elements.
- Easily determine the length of arrays.

---

### Key Terms and Concepts

- **Function**  
  A named group of commands that can be executed together.

- **Scope**  
  The boundary or context where a variable can be accessed (local vs global).

- **Array**  
  A variable that contains multiple elements, indexed by integers.

- **Subscript (or Index)**  
  The integer used to reference an element in an array.

- **Zero-based array**  
  Arrays where the first element is at index 0.

- **Return value**  
  The value returned by a function upon exiting; also called the function status.

## Functions in BASH

A shell function stores a series of commands for later execution, similar to a shell script. Unlike scripts stored on disk, functions reside in memory (RAM), making them faster to start because they are pre-parsed.

### Syntax to declare a function:

    [function] function-name () {
        statements
    }

- The keyword `function` is optional and often omitted for portability.
- The function definition must appear before any calls to the function.
- After calling a function, the shell executes its statements and then returns control to the rest of the script.
- Functions defined in a shell session exist only within that session; closing the shell removes them.

### Example:

    greet() {
        echo "Hello, world!"
    }

    greet

### Calling a function within another function

Functions can call other functions. All functions must be defined before being called.

### Example:

    say_hello() {
        echo "Hello!"
    }

    greet_user() {
        say_hello
        echo "Welcome to the script."
    }

    greet_user


## Passing Values to Functions

You can pass values (arguments) to BASH functions similarly to how you pass parameters to scripts. These values are accessed inside the function as positional parameters `$1`, `$2`, etc.

### Example:

    greet_user() {
        echo "Hello, $1!"
    }

    greet_user "Craig"

## Return Value in Functions

BASH functions do not return data like in many programming languages, but they can return an **exit status** (an integer from 0 to 255) to indicate success or failure.

- Use the `return` statement to specify the status.
- The special variable `$?` stores the exit status of the last command or function.

### Example:

    check_even() {
        if [ $(($1 % 2)) -eq 0 ]; then
            echo "$1 is even"
            return 0    # success
        else
            echo "$1 is odd"
            return 1    # failure or alternate condition
        fi
    }

    check_even 4
    echo "Return status: $?"

    check_even 5
    echo "Return status: $?"

## Function Scope

Variables in BASH have **scope**, which defines where they can be accessed.

- **Global scope:** Variables accessible anywhere in the script, including inside functions (unless shadowed by a local variable).
- **Local scope:** Variables declared inside a function with the `local` keyword. These variables are only accessible within that function.

You can define a global variable anywhere, even inside functions, as long as you don't use `local`.

The `local` keyword **can only be used inside functions**.

### Example:

    global_var="I am global"

    my_function() {
        local local_var="I am local"
        echo "Inside function:"
        echo "local_var = $local_var"
        echo "global_var = $global_var"
    }

    my_function

    echo "Outside function:"
    echo "global_var = $global_var"
    echo "local_var = $local_var"   # This will be empty / undefined

## Exporting Function

The `export -f` command makes a function available to child processes by placing it in the environment.

### Example:

    my_function() {
        echo "Hello from exported function!"
    }

    export -f my_function

    # Now if you start a new shell or script as a child process,
    # `my_function` will be available there.

## Arrays

An **array** is a variable that contains a series of elements. Elements are referenced by an integer called a **subscript** or **index**, which starts at 0 (zero-based array).

Arrays are useful when you want to group similar values and process them efficiently by referring to the whole array or individual elements by their index.

---

### Declaring an Array

Use `declare -a` to declare an array explicitly:

    declare -a car

In Bash, an array is automatically created when you assign a value using the syntax:

    name[index]=value

---

### Assigning Values to Arrays

Assign values individually:

    car[0]="Chevrolet Cruze"
    car[1]="Nissan Rogue"

Assign multiple values at once:

    car=("Chevrolet Cruze" "Nissan Rogue")

You can also have numeric arrays:

    grade=(100 99 85 88 97)

- `grade[0]` = 100  
- `grade[1]` = 99  
- `grade[2]` = 85  
- `grade[3]` = 88  
- `grade[4]` = 97  

---

### Accessing Array Elements

Reference an element by its index with the syntax:

    ${array-name[subscript]}

Example:

    echo ${food[5]}

Or assign an element to a variable:

    fooditem=${food[5]}

## Using Braces
In array syntax, the braces are often overlooked. The are mandatory when needing to access array elements.

The following example demonstrates what is retrieved when the braces are applied and when they are omitted:

Example:

    food=("apple" "banana" "cherry")

    echo $food[1]    # Without braces
    echo ${food[1]}  # With braces

## Array Length and Values
Often, you need to find out how many elements an array contains. You can do this by using special characters when referencing the array.

To reference all elements in an array, use the * symbol inside braces:

    ${food[*]}

To get the length of the array (the number of elements), use the # symbol before the array name along with *:

    ${#food[*]}

Example:

    food=("apple" "banana" "cherry" "date")

    echo "All elements: ${food[*]}"
    echo "Number of elements: ${#food[*]}"

Expected Output:

    All elements: apple banana cherry date
    Number of elements: 4

