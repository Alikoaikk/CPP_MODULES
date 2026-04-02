/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:15:05 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/30 18:15:06 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		std::string ideas[100];
};

#endif
