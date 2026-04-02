# C++ Modules — 42

*All projects created as part of the 42 curriculum by akoaik.*

A series of C++ projects covering core and advanced C++98 concepts, from object-oriented fundamentals to STL containers and algorithms.

---

## Modules Overview

| Module | Topic |
|--------|-------|
| [CPP00](#cpp00) | Namespaces, classes, member functions, stdio streams |
| [CPP01](#cpp01) | Memory allocation, references, pointers to members, switch |
| [CPP02](#cpp02) | Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form |
| [CPP03](#cpp03) | Inheritance |
| [CPP04](#cpp04) | Polymorphism, abstract classes, interfaces |
| [CPP05](#cpp05) | Exception handling, abstract classes |
| [CPP06](#cpp06) | C++ type casting |
| [CPP07](#cpp07) | C++ templates |
| [CPP08](#cpp08) | Templated containers, iterators, algorithms (STL) |
| [CPP09](#cpp09) | STL containers and algorithms applied to real problems |

---

## CPP00

**Topics:** Namespaces, classes, member functions, stdio streams, initialization lists, static, const.

- **ex00** — `megaphone`: A simple program that uppercases its arguments.
- **ex01** — `PhoneBook`: A basic phonebook with Add/Search/Display using classes.

```bash
cd CPP00/ex00 && make && ./megaphone
cd CPP00/ex01 && make && ./PhoneBook
```

---

## CPP01

**Topics:** Memory allocation (`new`/`delete`), pointers to members, references, switch statements.

- **ex00** — `Zombie`: Stack vs heap allocation.
- **ex01** — `ZombieHorde`: Array allocation with `new[]`.
- **ex02** — References vs pointers.
- **ex03** — `HumanA/B`: Weapon held by reference vs pointer.
- **ex04** — File read/replace utility.
- **ex05** — `Harl`: Logging levels with pointers to member functions.

```bash
cd CPP01/ex00 && make
```

---

## CPP02

**Topics:** Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form (OCF), fixed-point numbers.

- **ex00** — `Fixed`: Fixed-point number class with OCF.
- **ex01** — Operator overloads for arithmetic and comparison.
- **ex02** — Full operator overloading and static min/max functions.

```bash
cd CPP02/ex00 && make
```

---

## CPP03

**Topics:** Inheritance, constructor chaining, access specifiers.

- **ex00** — `ClapTrap`: Base robot class.
- **ex01** — `ScavTrap`: Inherits from ClapTrap.
- **ex02** — `FragTrap`: Inherits from ClapTrap alongside ScavTrap.

```bash
cd CPP03/ex00 && make
```

---

## CPP04

**Topics:** Polymorphism, abstract classes, interfaces, virtual functions, deep copy.

- **ex00** — `Animal`, `Dog`, `Cat`: Basic inheritance and polymorphism with virtual functions.
- **ex01** — `Brain`: Deep copy with proper memory management.
- **ex02** — Abstract `Animal` class (non-instantiable).

```bash
cd CPP04/ex00 && make && ./animal
cd CPP04/ex01 && make && ./brain
cd CPP04/ex02 && make && ./animal
```

---

## CPP05

**Topics:** Exception handling, abstract classes, factory pattern.

- **Bureaucrat** — Name and grade (1–150), throws exceptions on invalid grades.
- **AForm** — Abstract base for all forms.
- **ShrubberyCreationForm / RobotomyRequestForm / PresidentialPardonForm** — Concrete forms with grade requirements.
- **Intern** — Creates forms by name (Factory pattern).

```bash
make -C CPP05/ex00   # ex00–ex03
./CPP05/ex00/Bureaucrat
```

---

## CPP06

**Topics:** C++ type casting — `static_cast`, `dynamic_cast`, `reinterpret_cast`.

- **ex00** — Scalar type conversion using `static_cast`.
- **ex01** — Serialization/deserialization using `reinterpret_cast`.
- **ex02** — Identifying real types using `dynamic_cast`.

```bash
cd CPP06/ex00 && make && ./convert "42.0f"
```

---

## CPP07

**Topics:** C++ templates — generic, type-independent code.

- **ex00 — `whatever.hpp`**: `swap`, `min`, `max` function templates.
- **ex01 — `iter.hpp`**: `iter(array, len, func)` applies a function to every element.
- **ex02 — `Array.hpp`**: Generic array class with deep copy, `size()`, and bounds-checked `operator[]`.

```bash
cd CPP07/ex00 && make
cd CPP07/ex01 && make
cd CPP07/ex02 && make
```

---

## CPP08

**Topics:** Templated containers, iterators, algorithms (STL).

- **ex00 — `easyfind`**: Template function that searches for a value in any integer container.
- **ex01 — `Span`**: Stores up to N integers, computes shortest/longest span.
- **ex02 — `MutantStack`**: `std::stack` extension with iterator support.

```bash
cd CPP08/ex00 && make && ./easyfind
cd CPP08/ex01 && make && ./span
cd CPP08/ex02 && make && ./mutantstack
```

---

## CPP09

**Topics:** STL containers and algorithms applied to real problems.

- **ex00 — Bitcoin Exchange**: Reads a CSV price database and evaluates BTC values using `std::map`.
- **ex01 — Reverse Polish Notation**: Evaluates RPN expressions using `std::stack`.
- **ex02 — PmergeMe**: Sorts integers using the **Ford-Johnson (merge-insertion sort)** algorithm with both `std::vector` and `std::deque`.

```bash
cd CPP09/ex00 && make && ./btc input.txt
cd CPP09/ex01 && make && ./RPN "3 5 8 * 7 - +"
cd CPP09/ex02 && make && ./PmergeMe 3 5 9 7 4
```

---

## Requirements

- C++98 compatible compiler (`g++` with `-std=c++98`)
- `make`

---

## Resources

- [cppreference.com](https://en.cppreference.com/)
- [LearnCpp](https://www.learncpp.com/)
- [42 Intra — C++ Modules](https://projects.intra.42.fr/)
