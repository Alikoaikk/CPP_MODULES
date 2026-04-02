/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 05:31:58 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/12 05:55:01 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) { (void)other; }

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::makeShrubbery(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomy(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidential(const std::string& target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
    std::string names[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    AForm* (*creators[])(const std::string&) = {
        &Intern::makeShrubbery,
        &Intern::makeRobotomy,
        &Intern::makePresidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return creators[i](target);
        }
    }
    std::cout << "Intern cannot create \"" << formName << "\": unknown form name" << std::endl;
    return (NULL);
}
