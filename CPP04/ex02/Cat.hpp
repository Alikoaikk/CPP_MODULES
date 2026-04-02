/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:15:22 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/30 18:15:24 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain* brain ;

    public :
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();

        void makeSound() const;
        Brain* getBrain() const;
};

#endif
