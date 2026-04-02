/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:14:50 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/30 23:20:14 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
        std::string type ;

    public :
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        virtual void makeSound() const = 0 ;
        std::string getType() const;
};


#endif
