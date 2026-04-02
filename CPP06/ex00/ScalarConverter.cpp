/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:36:12 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/14 21:01:17 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter constractur called" << std::endl ;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
    std::cout << "ScalarConverter copy constractur called" << std::endl ;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    std::cout << "ScalarConverter copy assignment operator called" << std::endl ;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor called" << std::endl ;
}

void ScalarConverter::convert(const std::string str)
{
    double value;

    if (str.empty())
    {
        print_impossible();
        return;
    }
    if (isChar(str))
        value = static_cast<double>(str[0]);
    else if (isInt(str))
    {
        long l = std::strtol(str.c_str(), NULL, 10);
        if (l < INT_MIN || l > INT_MAX)
        {
            print_impossible();
            return;
        }
        value = static_cast<double>(l);
    }
    else if (isFloat(str))
        value = static_cast<double>(std::strtod(str.c_str(), NULL));
    else if (isDouble(str))
        value = std::strtod(str.c_str(), NULL);
    else
    {
        print_impossible();
        return;
    }
    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);
}

            