/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:27:11 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/27 06:21:51 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon 
{
    private : 
        std::string type ;
        
    public :
                    Weapon(std::string typeName);

        std::string getType();
        void        setType(std::string typeName);
};

#endif