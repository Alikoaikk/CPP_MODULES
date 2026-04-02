/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:49:42 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/20 21:18:46 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        T*           data;
        unsigned int arrSize;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        T&           operator[](unsigned int i);
        const T&     operator[](unsigned int i) const;
        unsigned int size() const;
};

template <typename T>
Array<T>::Array()
    :   data(NULL),
        arrSize(0)
{}

template <typename T>
Array<T>::Array(unsigned int n)
    :   data(new T[n]()),
        arrSize(n)
{}

template <typename T>
Array<T>::Array(const Array& other)
    :   data(NULL),
        arrSize(0)
{
    *this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this == &other)
        return *this;
    delete[] data;
    arrSize = other.arrSize;
    data = new T[arrSize]();
    for (unsigned int i = 0; i < arrSize; i++)
        data[i] = other.data[i];
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] data;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= arrSize)
        throw std::out_of_range("Array: index out of bounds");
    return data[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
    if (i >= arrSize)
        throw std::out_of_range("Array: index out of bounds");
    return data[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return arrSize;
}

#endif