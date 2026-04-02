/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:46:53 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/16 19:27:51 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void printdtr(char **argv)
{
    int i = 1; 
    while (argv[i])
    {
        std::cout << argv[i];
        i++;
    }
}

int main (int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;
        return 1 ; 
    }
    while (argv[i])
    { 
        j = 0;
        while (argv[i][j])
        {
            argv[i][j] = std::toupper(argv[i][j]);
            j++; 
        }
        i++;
    }
    printdtr(argv) ;
}