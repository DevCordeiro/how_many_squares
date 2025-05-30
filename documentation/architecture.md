# Project Architecture – How Many Squares?

This document provides an architectural overview of the project and outlines the execution flow.

---

## Components Overview

``` bash
how-many-squares/
├── src/
│ ├── main.c # Entry point: handles input/output
│ └── squares.c # Core logic to compute total squares
├── include/
│ └── squares.h # Function declaration (header file)
├── tests/
│ └── test_squares.c # Unit test file using assertions
```

## Execution Flow

```mermaid
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

## Dependencies
- GCC compiler
- CMake (version 3.10 or higher)