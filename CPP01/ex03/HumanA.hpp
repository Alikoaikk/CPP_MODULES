/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:29:58 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/27 06:17:55 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private : 
        std::string name ; 
        Weapon &wp ;

    public : 
        HumanA(std::string name, Weapon& wp);
        void attack();
        
};