/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:02:46 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/23 23:28:47 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(const ScavTrap& other);
        ScavTrap(std::string name);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& other);

        void	attack(const std::string& target);
        void	guardGate();
};

#endif
