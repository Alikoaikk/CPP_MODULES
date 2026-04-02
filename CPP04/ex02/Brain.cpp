/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:14:55 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/30 20:15:07 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl ;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy constructor called" << std::endl ;
	this->operator=(other);
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain Copy assignment operator called" << std::endl ;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i] ;
	}
	return (*this) ;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl ;
}
