/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:15:13 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/22 17:53:21 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef phoneBook_HPP
#define phoneBook_HPP

#include "Contacts.hpp"

class phoneBook {
    private:
        Contacts contacts[8];
        int nextIndex;
        int count;

    public:
        phoneBook();
        
        void addContact(Contacts& contact);

        int getCount() const ;
        Contacts& getContact(int index) ;      
};

#endif
