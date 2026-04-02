/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 06:12:12 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/27 06:16:41 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string typeName)
    : type(typeName)
{}

std::string Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string typeName)
{
    this->type = typeName ;
}