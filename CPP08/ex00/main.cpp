/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 20:52:10 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/24 22:50:52 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main(void)
{
{
	std::vector<int> array ;

	array.push_back(12);
	array.push_back(48);
	array.push_back(10);
	array.push_back(0);
	array.push_back(924);
	array.push_back(42);
	array.push_back(42);
	array.push_back(91);

	try 
	{
		
		std::vector<int>::iterator test = easyfind(array,42);
		std::cout << "vector index found is using" << test - array.begin()  << std::endl;
		std::cout << "vector index found is using distance " << std::distance(array.begin(), test) << std::endl ;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ; 
	}

}
{
	std::list<double> array ;

	array.push_back(12);
	array.push_back(48);
	array.push_back(10);
	array.push_back(0);
	array.push_back(924);
	array.push_back(42);
	array.push_back(42);
	array.push_back(91);

	try 
	{
		std::list<double>::iterator test = easyfind(array, 42.0);
		// std::cout << test - array.begin() << std::endl ; // doesn't work, it is a list, doesn't handle the '-' operator 
		std::cout << "list index found is " << std::distance(array.begin(), test) << std::endl ;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}
}
	return 0;
}
