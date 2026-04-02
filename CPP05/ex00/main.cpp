/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:28:11 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/07 18:32:57 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// normal case: increment and decrement
	try
	{
		Bureaucrat B1("Ali", 50);
		std::cout << B1 << std::endl;
		B1.incrementGrade();
		std::cout << B1 << std::endl;
		B1.decrementGrade();
		std::cout << B1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// constructor: grade too high (< 1)
	try
	{
		Bureaucrat B2("Youssef", 0);
		std::cout << B2 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// constructor: grade too low (> 150)
	try
	{
		Bureaucrat B3("Noah", 151);
		std::cout << B3 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// incrementGrade at grade 1: too high
	try
	{
		Bureaucrat B4("Omar", 1);
		std::cout << B4 << std::endl;
		B4.incrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// decrementGrade at grade 150: too low
	try
	{
		Bureaucrat B5("Sara", 150);
		std::cout << B5 << std::endl;
		B5.decrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
