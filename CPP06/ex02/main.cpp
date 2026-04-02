/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:14:41 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/15 21:44:24 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    Base *test;
    test = generate();
    identify(test);
    identify(*test);
    delete test;
    return 0;
}