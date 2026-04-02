/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:46:27 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/09 16:14:31 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{

    std::cout << "------first test------" << "\n" ;
    try
    {
        Bureaucrat B1("Ali koaik", 30);
        Form F("\"Leave Request\"", 50, 1);
        B1.signForm(F);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl ;
    }

    std::cout << "------Second test------" << "\n" ;
    try
    {
        Bureaucrat B1 ;
        Form f("\"sick leave\"", 5, 10);
        B1.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }

    std::cout << "------Third test------" << "\n" ;
    try
    {
        Form f("\"Invalid Form\"", 0, 50);
        std::cout << f << std::endl ;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }

    return (0);
}