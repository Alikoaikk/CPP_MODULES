/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 23:38:42 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/25 03:22:22 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->hitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap " << this->name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->EnergyPoint = other.EnergyPoint;
        this->AttackDamage = other.AttackDamage;
    }
    return (*this);
}

void	FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name
        << " requests a positive high five!" << std::endl;
}
