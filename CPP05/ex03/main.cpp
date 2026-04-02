/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:35:57 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/12 21:20:23 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Intern someRandomIntern;
	Bureaucrat boss("Boss", 1);

	std::cout << "=== Valid forms ===" << std::endl;
	AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}

	std::cout << std::endl;

	AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "home");
	if (shrub)
	{
		boss.signForm(*shrub);
		boss.executeForm(*shrub);
		delete shrub;
	}

	std::cout << std::endl;

	AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Arthur");
	if (pardon)
	{
		boss.signForm(*pardon);
		boss.executeForm(*pardon);
		delete pardon;
	}

	std::cout << std::endl;

	std::cout << "=== Unknown form ===" << std::endl;
	AForm* bad = someRandomIntern.makeForm("coffee request", "Target");
	if (bad)
		delete bad;

	return 0;
}
