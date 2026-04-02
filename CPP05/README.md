*This project has been created as part of the 42 curriculum by akoaik.*

## Description

C++98 project exploring exception handling, abstract classes, and polymorphism through a bureaucracy simulation where Bureaucrats sign and execute Forms.

## Class Library

- **Bureaucrat** — Name and grade (1–150), throws exceptions on invalid grades.
- **AForm** — Abstract base for all forms.
- **ShrubberyCreationForm / RobotomyRequestForm / PresidentialPardonForm** — Concrete forms with different grade requirements.
- **Intern** — Creates forms by name (Factory pattern).

## Instructions

```bash
make -C ex00   # build any exercise (ex00–ex03)
./ex00/Bureaucrat
```

## Resources

- [C++ Exceptions](https://en.cppreference.com/w/cpp/language/exceptions)
- [Factory Pattern](https://refactoring.guru/design-patterns/factory-method)