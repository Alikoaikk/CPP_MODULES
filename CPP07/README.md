*This project has been created as part of the 42 curriculum by akoaik.*

## Description

C++ Module 07 covers **C++ templates** — writing generic, type-independent code. Three exercises explore function templates, a generic iterator, and a safe array class.

## Instructions

```bash
cd ex00   # or ex01 / ex02
make
./binary_name
```

Requires `g++` with `-std=c++98`.

## Library

- **ex00 — `whatever.hpp`**: `swap`, `min`, `max` function templates for any comparable type.
- **ex01 — `iter.hpp`**: `iter(array, len, func)` applies a function to every element of an array.
- **ex02 — `Array.hpp`**: Generic array class with deep copy, `size()`, and bounds-checked `operator[]` (throws `std::out_of_range`).

## Resources

- [cppreference — Templates](https://en.cppreference.com/w/cpp/language/templates)
- [LearnCpp — Function Templates](https://www.learncpp.com/cpp-tutorial/function-templates/)
- [LearnCpp — Class Templates](https://www.learncpp.com/cpp-tutorial/class-templates/)
