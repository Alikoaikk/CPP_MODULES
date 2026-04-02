/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:58:14 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/15 21:12:28 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include <stdio.h>

int main(void)
{
    Data test;
    Data *ptr ;
    test.number = 42;

    uintptr_t raw;
    raw = Serializer::serialize(&test);
    ptr = Serializer::deserialize(raw);
    std::cout <<  raw << std::endl;
    std::cout << &test << std::endl;
    std::cout <<ptr << std::endl ;
    std::cout << test.number << std::endl;
    std::cout << ptr->number << std::endl;
    
    return 0;
}