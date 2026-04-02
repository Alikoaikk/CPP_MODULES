/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:15:41 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/30 18:19:08 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain* brain ;

    public :
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog();

        virtual void makeSound() const;
        Brain* getBrain() const;
};

#endif
