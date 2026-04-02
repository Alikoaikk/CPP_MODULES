/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:14:30 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/15 21:18:34 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif