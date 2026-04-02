/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:12:32 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/20 19:54:53 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Alice");
    ClapTrap b("Bob");

    a.attack("Bob");
    b.takeDamage(0);

    b.beRepaired(5);

    a.takeDamage(10);
    a.attack("Bob");
    a.beRepaired(5);

    for (int i = 0; i < 12; i++)
        b.attack("Target");

    ClapTrap c(a);

    return 0;
}
