/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:20:19 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/14 21:38:14 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int rawValue;
        static const int fractionalBits = 8;

    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();

    int  getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
