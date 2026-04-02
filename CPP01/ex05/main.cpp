/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 00:15:29 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/30 00:15:31 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;

    std::cout << "== DEBUG ==" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\n== INFO ==" << std::endl;
    harl.complain("INFO");

    std::cout << "\n== WARNING ==" << std::endl;
    harl.complain("WARNING");

    std::cout << "\n== ERROR ==" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n== UNKNOWN ==" << std::endl;
    harl.complain("NOPE");

    return 0;
}
