/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:20:30 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/20 21:18:17 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <stddef.h>
#include <iostream>

template <typename T, typename F>
void iter(T *array, const size_t len, F func)
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

#endif
