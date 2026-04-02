/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 20:24:18 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/25 03:21:49 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("Rookie");
	ScavTrap scav("Guardian");
	FragTrap frag("Tank");

	scav.attack("Rookie");
	clap.takeDamage(20);

	frag.attack("Guardian");
	scav.takeDamage(30);

	clap.attack("Tank");
	frag.takeDamage(0);

	clap.beRepaired(5);
	scav.beRepaired(15);

	scav.guardGate();
	frag.highFivesGuys();

	FragTrap copyFrag(frag);
	copyFrag.attack("Rookie");
	clap.takeDamage(30);

	return (0);
}

