/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:21:02 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/15 15:15:01 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Default constructor
Fixed::Fixed() 
    : rawValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) 
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(other) ;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->rawValue = other.rawValue;
    return *this;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return rawValue;
}

void Fixed::setRawBits(int const raw) 
{
    rawValue = raw;
}
