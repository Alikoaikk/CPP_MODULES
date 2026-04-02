/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:41:07 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/17 15:22:34 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) 
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}

// # To understand more the rawValue

/*
#include <iostream>
#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed b;

    a.setRawBits(256);      // equivalent to 1.0 in fixed-point (because 256 / 2^8 = 1)
    b.setRawBits(128);      // equivalent to 0.5 (128 / 256 = 0.5)

    std::cout << "Raw value of a: " << a.getRawBits() << std::endl;
    std::cout << "Raw value of b: " << b.getRawBits() << std::endl;

    // Show how it converts to actual number
    std::cout << "Fixed-point value of a: " << (float)a.getRawBits() / 256 << std::endl;
    std::cout << "Fixed-point value of b: " << (float)b.getRawBits() / 256 << std::endl;
    return 0;
}
*/