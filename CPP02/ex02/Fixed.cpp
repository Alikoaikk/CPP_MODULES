/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:11:02 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/17 15:23:41 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
    : rawValue(0)
{
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed::Fixed(const int value)
{
	this->rawValue = value << this->fractionalBits;
}

Fixed::Fixed(const float value)
{
	this->rawValue = static_cast<int>(roundf(value * (1 << this->fractionalBits)));
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->rawValue = other.rawValue;
    return *this;
}

Fixed::~Fixed()
{
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->rawValue) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->rawValue / (1 << this->fractionalBits));
}

int Fixed::getRawBits(void) const
{
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

bool Fixed::operator>(const Fixed& other) const
{
    return this->rawValue > other.rawValue;
}

bool Fixed::operator<(const Fixed& other) const
{
    return this->rawValue < other.rawValue;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return this->rawValue >= other.rawValue;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return this->rawValue <= other.rawValue;
}

bool Fixed::operator==(const Fixed& other) const
{
    return this->rawValue == other.rawValue;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return this->rawValue != other.rawValue;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(this->rawValue + other.rawValue);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(this->rawValue - other.rawValue);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(((this->rawValue) * other.rawValue) >> fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(((this->rawValue) << fractionalBits) / other.rawValue);
    return result;
}

Fixed& Fixed::operator++()
{
    this->rawValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->rawValue++;
    return temp;
}

Fixed& Fixed::operator--()
{
    this->rawValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->rawValue--;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    return b;
}