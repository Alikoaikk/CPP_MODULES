/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 05:50:33 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/27 07:42:34 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private : 
        std::string name ; 
        Weapon *wp ;

    public : 
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon& w);
};