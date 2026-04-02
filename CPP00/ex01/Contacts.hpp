/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:34:37 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/21 20:10:12 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <string>

class Contacts 
{
    private : 
        std::string firstName ;
        std::string lastName ;
        std::string nickName ;
        std::string phoneNumber ;
        std::string darkestSecret ;

    public : 
        Contacts();

        bool set (
            std::string& first,
            std::string& last,
            std::string& nick,
            std::string& phone,
            std::string& secret
        );

        const std::string& getFirstName() const ;
        const std::string& getLastName() const ;
        const std::string& getNickName() const ;
        const std::string& getPhoneNumber() const ;    
        const std::string& getDarkestSecret() const ;
};

#endif 