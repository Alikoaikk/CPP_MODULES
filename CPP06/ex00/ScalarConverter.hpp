/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:39:57 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/14 21:02:04 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <limits>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
    
    private :
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();
        
    public :     
        static void convert(const std::string str);

};

// convert helper function ; 
void print_impossible();
bool	isInt		(const std::string& str);
bool	isFloat		(const std::string &str);
bool	isDouble	(const std::string& str);
void	printChar	(double value);
void	printInt	(double value);
bool	isChar		(const std::string &str);
void	printFloat	(double value);
void	printDouble	(double value);

#endif