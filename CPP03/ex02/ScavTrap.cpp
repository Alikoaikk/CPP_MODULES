/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:02:40 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/25 03:21:26 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap " << this->name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->EnergyPoint = other.EnergyPoint;
        this->AttackDamage = other.AttackDamage;
    }
    return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "ScavTrap " << this->name
            << " cannot attack because it has no hit points."
            << std::endl;
        return;
    }
    if (this->EnergyPoint <= 0)
    {
        std::cout << "ScavTrap " << this->name
            << " cannot attack because it has no energy points."
            << std::endl;
        return;
    }

    this->EnergyPoint--;

    std::cout << "ScavTrap " << this->name
        << " attacks " << target
        << ", causing " << this->AttackDamage
        << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name
        << " is now in Gate keeper mode." << std::endl;
}
