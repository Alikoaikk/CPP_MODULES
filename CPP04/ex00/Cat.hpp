/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:59:19 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/28 21:59:21 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();

        void makeSound() const;
};

#endif
