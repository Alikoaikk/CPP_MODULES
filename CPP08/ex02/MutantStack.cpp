/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 22:02:04 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/22 22:19:56 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack()
{}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
    : std::stack<T>(other)
{}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other)
{
    std::stack<T>::operator=(other);
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{ 
    return this->c.begin(); 
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{ 
    return this->c.end(); 
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{ 
    return this->c.begin(); 
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{ 
    return this->c.end(); 
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{ 
    return this->c.rbegin(); 
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{ 
    return this->c.rend(); 
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{ 
    return this->c.rbegin(); 
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{ 
    return this->c.rend(); 
}

