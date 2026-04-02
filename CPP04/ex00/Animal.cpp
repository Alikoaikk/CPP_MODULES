/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 22:00:17 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/28 22:00:38 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
    : type("Default")
{
    std::cout << "Animal Default constructor called" << std::endl ;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy constructor called" << std::endl ;
    this->operator=(other);
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal Copy assignment operator called" << std::endl ;
    if (this != &other)
    {
        this->type = other.type ;
    }
    return (*this) ;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl ;
}

void Animal::makeSound() const
{
    std::cout << "* generic animal sound *" << std::endl ;
}

std::string Animal::getType() const
{
    return (this->type) ;
}
