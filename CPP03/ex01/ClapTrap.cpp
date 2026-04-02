/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:03:14 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/21 20:47:40 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    :   name("default"), 
        hitPoint(10), 
        EnergyPoint(10), 
        AttackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : name(name),
    hitPoint(10),
    EnergyPoint(10),
    AttackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(other);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called!" << std::endl ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->EnergyPoint = other.EnergyPoint;
        this->AttackDamage = other.AttackDamage;
    }
    return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name
            << " cannot attack because it has no hit points."
            << std::endl;
        return;
    }
    if (this->EnergyPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name
            << " cannot attack because it has no energy points."
            << std::endl;
        return;
    }

    this->EnergyPoint--;

    std::cout << "ClapTrap " << this->name
        << " attacks " << target
        << ", causing " << this->AttackDamage
        << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoint -= amount;
    std::cout << "ClapTrap " << this->name
        << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name
            << " cannot be repaired because it has no hit points."
            << std::endl;
        return;
    }
    if (this->EnergyPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name
            << " cannot be repaired because it has no energy points."
            << std::endl;
        return;
    }

    this->EnergyPoint--;
    this->hitPoint += amount;

    std::cout << "ClapTrap " << this->name
        << " is repaired for " << amount << " hit points!"
        << std::endl;
}
