/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 16:06:20 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/21 16:47:45 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts()
{  
}

bool Contacts::set(
        std::string& first,
        std::string& last,
        std::string& nick,
        std::string& phone, 
        std::string& secret
) 
{
    if (first.empty() || last.empty() || nick.empty() || phone.empty() || secret.empty())
        return false ;

    firstName = first ;
    lastName = last ;
    nickName = nick ;
    phoneNumber = phone ;
    darkestSecret = secret ;
    return true ;
}

const std::string& Contacts::getFirstName() const { return firstName; }
const std::string& Contacts::getLastName() const { return lastName; }
const std::string& Contacts::getNickName() const {return nickName ;}
const std::string& Contacts::getPhoneNumber() const { return phoneNumber; }
const std::string& Contacts::getDarkestSecret() const { return darkestSecret; }
