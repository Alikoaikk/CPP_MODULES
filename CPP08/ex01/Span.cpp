/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 16:02:14 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/24 23:19:32 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N)
    : maxSize(N)
{}

Span::Span(const Span& other) 
    :   maxSize(other.maxSize), 
        intList(other.intList)
{}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		maxSize = other.maxSize;
		intList = other.intList;
	}
	return (*this);
}

Span::~Span()
{}

void Span::addNumber(int n)
{
	if (intList.size() >= maxSize)
		throw FullSpan();
	intList.push_back(n);
}

int Span::shortestSpan() const
{
	if (intList.size() < 2)
		throw Span::NoSpan();

    std::vector<int> sorted(this->intList);
    std::sort(sorted.begin(), sorted.end());
    
    int minspan = sorted[1] - sorted[0] ; // first gap
    for (std::size_t i = 2 ; i < sorted.size() ; ++i) // in this case we can use i++, 
    {                                                 //but i++ must create a temp-->increment-->return the copy, so it is slower
        int span = sorted[i] - sorted[i - 1] ;
        if (span < minspan)
            minspan = span ;
    }
    return (minspan);
}

int Span::longestSpan() const
{
	if (this->maxSize < 2)
        throw Span::NoSpan();

    int minVlaue = *(std::min_element(
        this->intList.begin() , 
        this->intList.end()
    ));
    int maxValue = *(std::max_element(
            this->intList.begin(),
            this->intList.end()   
    ));
    return (maxValue - minVlaue) ;
}

const char* Span::FullSpan::what() const throw()
{
	return "Span is full";
}

const char* Span::NoSpan::what() const throw()
{
	return "Not enough numbers to compute span";
}