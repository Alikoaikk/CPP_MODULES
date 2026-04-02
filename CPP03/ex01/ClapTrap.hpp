/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:40:38 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/21 20:39:53 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected :
        std::string name ;
        int         hitPoint ;
        int         EnergyPoint ;
        int         AttackDamage ;


    public :
        ClapTrap();
        ClapTrap(const ClapTrap& other);
        ClapTrap(std::string name);
        ~ClapTrap();

		ClapTrap& operator=(const ClapTrap& other);

        void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif
