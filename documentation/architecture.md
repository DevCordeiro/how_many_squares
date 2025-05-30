# Project Architecture – How Many Squares?

This document provides an architectural overview of the project and outlines the execution flow.

---

## Components Overview

``` bash
how-many-squares/
├── src/
│   ├── main.c # Entry point: handles input/output
│   └── squares.c # Core logic to compute total squares
├── include/
│   └── squares.h # Function declaration (header file)
├── tests/
│   └── unity   # Files of Unity Framework downloaded
│       └── src
│           └── meson.build 
│           └── unity_internals.h
│           └── unity.c
│           └── unity.h
│   └── test_squares.c # Unit test file
│   └── test_unity.c    # Unity test file using Unity Framework
```

## Execution Flow

```
flowchart TD
    A[User runs the program] --> B[main.c reads input n]
    B --> C[Calls count_squares(n)]
    C --> D[squares.c computes the result]
    D --> E[main.c prints result to console]
```

## Build Setup
- CMake is used to configure and build the project.

- Binaries are generated in the `bin/` directory:

    - `how_many_squares`: main program

    - `test_runner`: test if `count_squares()` is correct

    - `test_unity`: test if `count_squares()` is correct using Unity Framework

## Dependencies
- GCC compiler
- CMake (version 3.10 or higher)