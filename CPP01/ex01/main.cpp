/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 20:31:32 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/25 18:01:00 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");

    for (int i = 0; i < N; i++)
        horde[i].announce();

    delete[] horde;
    return 0;
}
