/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:27:06 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/20 21:22:12 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}

int main( void )
{
	int	arr[] = {1, 2, 3, 4, 5};

	iter(arr, 5, print<int>);
	return 0;
}
