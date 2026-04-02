/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:15:45 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/30 21:06:06 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    Dog basic;
    basic.getBrain()->ideas[0] = "Chase the ball";
    Dog copy(basic);
    copy.getBrain()->ideas[0] = "Eat food";

    std::cout << "Basic: " << basic.getBrain()->ideas[0] << std::endl;
    std::cout << "Copy:  " << copy.getBrain()->ideas[0] << std::endl ;

    return (0);
}