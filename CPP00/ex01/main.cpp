/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 20:51:58 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/22 15:45:58 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "search.cpp"
#include "phoneBook.hpp"
#include "Contacts.hpp"

static void add(phoneBook& pb)
{
    Contacts c;
    std::string first, last, nick, phone, secret;

    while (true)
    {
        std::cout << "First name: ";
        if (!std::getline(std::cin, first)) return;

        std::cout << "Last name: ";
        if (!std::getline(std::cin, last)) return;

        std::cout << "Nickname: ";
        if (!std::getline(std::cin, nick)) return;

        std::cout << "Phone number: ";
        if (!std::getline(std::cin, phone)) return;

        std::cout << "Darkest secret: ";
        if (!std::getline(std::cin, secret)) return;

        if (c.set(first, last, nick, phone, secret))
            break;

        std::cout << "Error: fields cannot be empty\n";
    }

    pb.addContact(c);
}

int main()
{
    phoneBook pb;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            break;

        if (command == "ADD")
        {
            add(pb);
        }
        else if (command == "SEARCH")
        {
            search(pb);
        }
        else if (command == "EXIT")
        {
            break;
        }
    }
    return 0;
}