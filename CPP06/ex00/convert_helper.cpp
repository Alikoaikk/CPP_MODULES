/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_helper.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:50:47 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/14 21:08:37 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void print_impossible()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

bool isInt(const std::string& str)
{
    if (str.empty())
        return false ;
    
    std::size_t i = 0 ;
    if (str[i] == '+' || str[i] == '-')
    {
        i++ ;
        if (i == str.size())
            return false;
    }

    for (; i < str.size() ; i++)
    {
        if (!std::isdigit(static_cast<unsigned int>(str[i])))
            return false ;
    }

    return true ;
}

bool isFloat(const std::string &str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf")
        return true ;
    
    if (str.empty() || str[str.size() - 1] != 'f')
        return false ;

    std::string tmp = str.substr(0, str.size() - 1); // to remove the end f
    if (tmp.find('.') == std::string::npos)
        return false ;
    char *end ;
    std::strtod(tmp.c_str(), &end);

    return (*end == '\0');
}

bool isDouble(const std::string& str)
{
    if (str == "-inf" || str == "+inf" || str == "nan")
        return true;

    if (str.empty() || str.find('.') == std::string::npos)
        return false ;

    char *end ;
    std::strtod(str.c_str(), &end);

    return (*end == '\0');
}

void printChar(double value)
{
    if (std::isnan(value) || value < 0 || value > 127)
    {
        std::cout << "char: impossible" << std::endl ;
        return ;
    }
    char c = static_cast<char>(value) ;
    
    if (!std::isprint(static_cast<unsigned char>(c)))
    {
        std::cout << "char: Non displayable" << std::endl ;
        return ; 
    }

    std::cout << "char: '" << c << "'" << std::endl ;
}

void printInt(double value)
{
    if (std::isnan(value) || std::isinf(value) || 
        value < INT_MIN || value > INT_MAX )
    {
        std::cout << "int: impossible" << std::endl ;
        return ;
    }
    int i = static_cast<int>(value);
    std::cout << "int: " << i << std::endl ;
}

bool isChar(const std::string &str)
{
    return (str.length() == 1 && !std::isdigit(str[0]));
}

void printFloat(double value)
{
    std::cout << "float: " << std::fixed << std::setprecision(1)
        << static_cast<float>(value) << "f" << std::endl;
}

void printDouble(double value)
{
    std::cout << "double: " << std::fixed << std::setprecision(1)
        << value << std::endl;
}