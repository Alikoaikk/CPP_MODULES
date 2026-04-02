/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:21:02 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/16 15:55:23 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
    : rawValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) 
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(other) ;
    // *this = other ;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl ;
	this->rawValue = value << this->fractionalBits;   
}

float Fixed::toFloat(void) const 
{
    // floting point number : 
    return (static_cast<float>(this->rawValue) / (1 << fractionalBits));  
}

int Fixed::toInt(void) const 
{
    // plain Integer : 
    return (this->rawValue / (1 << this->fractionalBits));
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl ;
	this->rawValue = static_cast<int>(roundf(value * (1 << this->fractionalBits))) ;
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

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}