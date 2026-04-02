/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 16:10:16 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/24 23:19:35 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>
# include <algorithm>


class Span
{

    private:
        unsigned int     maxSize;
        std::vector<int> intList;
    
    public:
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int n);
        template <typename T>
        void addrange(T begin, T end);
        int  shortestSpan() const;
        int  longestSpan() const;

        class FullSpan : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class NoSpan : public std::exception
        {
            public:
                const char* what() const throw();
        }; 
};

template <typename T>
void Span::addrange(T begin, T end)
{
    while (begin != end)
    {
        addNumber(*begin);
        begin++ ;
    }
}

#endif