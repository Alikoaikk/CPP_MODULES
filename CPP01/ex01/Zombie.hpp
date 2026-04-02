/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 20:30:31 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/25 17:58:14 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;

    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();

        void announce(void);
        void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
