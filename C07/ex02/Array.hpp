/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:38:59 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/21 11:38:59 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept> // pour std::out_of_range
#include <cstddef>   // pour size_t

template <typename T>
class Array 
{
    private:
        T* elements;
        size_t length;

    public:
        Array();                           
        explicit Array(unsigned int n);    
        Array(const Array& copy);         
        ~Array();                        

        Array& operator=(const Array& other);

        T& operator[](size_t index);           // Accès en écriture
        const T& operator[](size_t index) const; // Accès en lecture

        size_t size() const; // Renvoie la taille de l'array
};

#include "Array.tpp"

#endif 
