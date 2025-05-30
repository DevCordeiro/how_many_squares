# Project Design – How Many Squares?

This document outlines the design decisions behind the solution to the “How Many Squares?” problem using the C programming language.

---

## Objective

To compute the total number of visible squares in an `n x n` grid, considering **all possible sub-squares** (from size 1x1 up to nxn).

---

## Algorithm Logic

The solution uses a well-known mathematical formula:


Total squares = $\sum_{k=1}^{n} k^2 = 1^2 + 2^2 + 3^2 + ... + n^2$


This is implemented iteratively in C for simplicity and performance.

---

## Code Structure

| File                    | Responsibility                                             |
|-------------------------|-------------------------------------------------------------|
| `src/main.c`            | Reads user input and prints the result                     |
| `src/squares.c`         | Contains logic to calculate total number of squares        |
| `include/squares.h`     | Header file with function declaration                      |
| `tests/test_squares.c`  | Basic unit tests                           |
| `tests/test_unity.c`    | Basic unit tests using Unity Framework                           |

---

## Design Practices Applied

- Separation of logic and I/O
- Use of header file to enable modularization
- CMake for cross-platform build automation
- Clean directory structure (`src/`, `include/`, `tests/`, `bin/`)

---

## Limitations

- Assumes `n` is a positive integer (validated at runtime)
- No overflow check on large `n` values, although unlikely in common use cases

---

## Testing

Basic unit tests check correctness of the `count_squares()` function for small `n` values. Tests are compiled into a separate binary via CMake.

---

## Conclusion

The design emphasizes clarity, modularity, and adherence to C best practices. It's lightweight, extensible, and easy to test or benchmark in future iterations.
