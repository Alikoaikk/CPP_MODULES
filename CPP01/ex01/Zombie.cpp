/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 20:30:56 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/24 20:59:24 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() 
    : name("") 
{}

Zombie::Zombie(std::string name) 
    : name(name) 
{}

Zombie::~Zombie() {
    std::cout << name << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
