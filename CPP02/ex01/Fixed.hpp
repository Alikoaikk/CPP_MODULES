/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:20:19 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/16 15:51:36 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
    private:
        int rawValue;
        static const int fractionalBits = 8;

    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();

    public :
        float   toFloat(void) const ;
        int     toInt(void) const ;
        Fixed& operator=(const Fixed& other);

    int  getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
