/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:35:57 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/12 04:59:26 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{

	std::cout << "=== Shrubbery ===" << std::endl;
	try
	{
		Bureaucrat bob("Bob", 1);
		ShrubberyCreationForm shrub("home");
		bob.signForm(shrub);
		bob.executeForm(shrub);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "=== Robotomy ===" << std::endl;
	try
	{
		Bureaucrat alice("Alice", 40);
		RobotomyRequestForm robo("Bender");
		alice.signForm(robo);
		alice.executeForm(robo);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "=== Presidential Pardon ===" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		PresidentialPardonForm pardon("Arthur");
		boss.signForm(pardon);
		boss.executeForm(pardon);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "=== Too low to sign ===" << std::endl;
	try
	{
		Bureaucrat intern("Intern", 150);
		PresidentialPardonForm pardon("Someone");
		intern.signForm(pardon);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "=== Execute unsigned form ===" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		RobotomyRequestForm robo("Target");
		boss.executeForm(robo);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "=== Too low to execute ===" << std::endl;
	try
	{
		Bureaucrat high("High", 1);
		Bureaucrat low("Low", 100);
		RobotomyRequestForm robo("Target");
		high.signForm(robo);
		low.executeForm(robo);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
