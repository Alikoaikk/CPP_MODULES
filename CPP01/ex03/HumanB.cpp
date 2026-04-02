/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 05:49:36 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/30 16:11:03 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    :  name(name), wp(NULL)
{}

void HumanB::setWeapon(Weapon& w)
{
    this->wp = &w ;
}

void HumanB::attack()
{
    if (wp)
    {
        std::cout << this->name << " attack with their " 
            << this->wp->getType() << std::endl ;
    }
    else 
        std::cout << name << " has no weapon " << std::endl ;
}