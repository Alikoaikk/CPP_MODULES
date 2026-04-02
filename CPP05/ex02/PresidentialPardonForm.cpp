/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:07:56 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/11 21:10:52 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), 
    target("Default")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
: AForm("PresidentialPardonForm", 25, 5),
    target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
: AForm(other),
    target(other.target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void PresidentialPardonForm::executeAction() const
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
