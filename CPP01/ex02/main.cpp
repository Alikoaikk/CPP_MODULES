/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:28:10 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/25 19:21:47 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string str;
    std::string *stringPTR;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN" ;
    stringPTR = &str ;
    std::cout << "The address of str: " << &str << std::endl ;
    std::cout << "The address held by stringPTR: " << stringPTR << std::endl ;
    std::cout << "The address of stringREF: " << &stringREF << std::endl ;

    std::cout << "The value of str: " << str << std::endl;
    std::cout << "The value pointed by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed by stringREF: " << stringREF << std::endl;

    return (0);
}