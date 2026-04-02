/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 23:39:27 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/25 03:21:14 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(const FragTrap& other);
        FragTrap(std::string name);
        ~FragTrap();

        FragTrap& operator=(const FragTrap& other);

        void	highFivesGuys(void);
};

#endif
