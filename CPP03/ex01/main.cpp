/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:31:49 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/23 20:52:43 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavvy");

	clap.attack("target1");
	clap.takeDamage(5);
	clap.beRepaired(3);

	scav.attack("target2");
	scav.takeDamage(30);
	scav.beRepaired(10);
	scav.guardGate();

	ScavTrap scav2(scav);
	scav2.attack("target3");

	return 0;

}
