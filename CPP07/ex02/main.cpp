/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 23:33:53 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/20 21:19:01 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
    Array<int> empty;
    std::cout << empty.size() << "\n" ;

    Array<std::string> arrStr(10) ;
    arrStr[0] = "Hello index 0" ;
    std::cout << "string[0] = " << arrStr[0] << "\n" ;
    
    Array<double> arrDouble(10);
    try
    {
        std::cout << "let test index out of bound, "
        << "size of arrDouble is " << arrDouble.size() << "\n"
        << "index 12 is " << arrDouble[12] << "\n";
    }
    catch (const std::exception& e)
    {
        std::cout << "\n" << e.what() << "\n";
    }
    return (0);
}