/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:59:03 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/28 22:04:24 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl ;
    this->type = "Dog" ;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy constructor called" << std::endl ;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl ;
    if (this != &other)
    {
        Animal::operator=(other) ;
    }
    return (*this) ;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl ;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl ;
}
