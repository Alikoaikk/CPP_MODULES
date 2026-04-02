*This project has been created as part of the 42 curriculum by akoaik.*

---

## Description

CPP08 introduces templated containers, iterators, and algorithms from the C++ Standard Template Library (STL).

- **ex00 — easyfind**: A template function that searches for a value in any integer container and throws an exception if not found.
- **ex01 — Span**: A class that stores up to N integers and computes the shortest and longest span (difference) between stored values.
- **ex02 — MutantStack**: An extension of `std::stack` that exposes iterators, making it possible to loop through the stack like any other STL container.

## Instructions

Each exercise is compiled independently:

```bash
cd ex00 && make    # then: ./easyfind
cd ex01 && make    # then: ./span
cd ex02 && make    # then: ./mutantstack
```

Requires a C++98-compatible compiler (`g++` with `-std=c++98`).

## Resources
