/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:06:04 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/22 18:06:02 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contacts.hpp"
#include "phoneBook.hpp"

void search(phoneBook& pb)
{
    if (pb.getCount() == 0)
    {
        
        std::cout << "The phoneBook is empty" << std::endl ;
        return ;
    }
    
    std::cout << std::setw(10) << "index" << "|" 
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nick name" << std::endl ;

    for (int i = 0 ; i < pb.getCount() ; i++ )
    {
        Contacts& c = pb.getContact(i);

        std::string first = c.getFirstName();
        std::string last = c.getLastName();
        std::string nick = c.getNickName();

        if (first.length() > 10)
            first = first.substr(0, 9) + ".";
        if (last.length() > 10)
            last = last.substr(0, 9) + ".";
        if (nick.length() > 10)
            nick = nick.substr(0, 9) + ".";

        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << first << "|"
                  << std::setw(10) << last << "|"
                  << std::setw(10) << nick << std::endl;
    }

}