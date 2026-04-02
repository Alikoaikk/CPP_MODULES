/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 03:07:27 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/24 23:32:21 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>
#include <iostream>

int main()
{
	
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::deque<int> array ;
    for (int i = 0 ; i < 10000 ; i++)
    {
        array.push_back(i);
    }
    std::random_shuffle(array.begin() , array.end());
    Span test = Span(10000);
    test.addrange(array.begin(), array.end());

    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;

    
    return 0;
}
