/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:09:09 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/24 20:24:41 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
int main() 
{
    Zombie* z = newZombie("HeapZombie");
    z->announce();
    delete z;

    randomChump("StackZombie");
    return 0;
}
