/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:34:20 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/09 18:12:27 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    :   AForm("ShrubberyCreationForm", 145, 137), 
        target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) 
:AForm("ShrubberyCreationForm", 145, 137),
    target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
:AForm(other),
    target(other.target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl ; 
}

void ShrubberyCreationForm::executeAction() const
{
    std::string filename = target + "_shrubbery";
    std::ofstream file(filename.c_str());

    if (!file.is_open())
    {
        std::cerr << "Error: Could not create file " << filename << std::endl;
        return;
    }

    file << "      *      " << "\n";
    file << "     ***     " << "\n";
    file << "    *****    " << "\n";
    file << "   *******   " << "\n";
    file << "  *********  " << "\n";
    file << " *********** " << "\n";
    file << "*************" << "\n";
    file << "      |      " << std::endl;

    file.close();
}
