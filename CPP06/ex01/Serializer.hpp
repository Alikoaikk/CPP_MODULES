/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:09:39 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/15 20:57:03 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

struct Data
{
    int number ;
};

class Serializer
{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif