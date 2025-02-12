/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:06:23 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/31 17:06:23 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"


template <typename T>
MutantStack<T>::MutantStack() 
{
    std::cout << "Constructor by default MutanStack called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) : std::stack<T>(other) 
{
    std::cout << "Constructor by copy MutanStack called" << std::endl;
}


template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) 
{
    std::cout << "Constructor by assignment MutanStack called" << std::endl;
    if (this != &other)
        std::stack<T>::operator=(other);
    return *this;
}


template <typename T>
MutantStack<T>::~MutantStack() 
{
    std::cout << "Destructor MutanStack called" << std::endl;
}

// Définition des itérateurs
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
    return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() 
{
    return std::stack<T>::c.end();
}

#endif
