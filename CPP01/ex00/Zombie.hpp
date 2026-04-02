/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:09:50 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/24 20:30:19 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
    private : 
        std::string name ; 
        
    public : 
        Zombie(std::string name);
        ~Zombie();
        
        void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif