/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:15:17 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/30 18:48:20 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl ;
    this->type = "Cat" ;
    this->brain = new Brain() ;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat Copy constructor called" << std::endl ;
    this->brain = new Brain(*other.brain) ;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl ;
    if (this != &other)
    {
        Animal::operator=(other) ;
        delete this->brain ;
        this->brain = new Brain(*other.brain) ;
    }
    return (*this) ;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl ;
    delete this->brain ;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl ;
}

Brain* Cat::getBrain() const
{
    return (this->brain) ;
}
