/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 22:11:53 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/25 22:18:54 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp)
    : name(name), wp(wp)
{}

void HumanA::attack()
{
    std::cout << this->name << " attack with their "
        << this->wp.getType()
        << std::endl ;
}