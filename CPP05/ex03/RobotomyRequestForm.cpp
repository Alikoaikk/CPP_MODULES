/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:23:32 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/10 19:53:16 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm()
:AForm("RobotomyRequestForm", 72, 45),
    target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
:AForm("RobotomyRequestForm", 72, 45),
    target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
:AForm(other),
    target(other.target)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::executeAction() const
{
    std::cout << "*DRILLING NOISES*" << std::endl;

    // Seed random number generator with current time
    std::srand(std::time(0));

    // 50% success rate
    if (std::rand() % 2 == 0)
    {
        std::cout << target << " has been robotomized successfully!" << std::endl;
    }
    else
    {
        std::cout << "Robotomy failed on " << target << "!" << std::endl;
    }
}
