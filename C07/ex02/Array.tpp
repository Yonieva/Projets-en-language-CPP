/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array,tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:45:22 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/20 20:45:22 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    this->elements = NULL;
    this->length = 0;
    std::cout << "Constructor Array standard called" << std::endl;
}

// Constructeur avec taille
template <typename T>
Array<T>::Array(unsigned int n)
{
    this->elements = NULL;
    this->length = n;
    if (n > 0)
        elements = new T[n]();
    std::cout << "Constructor Array whit unsigned int called" << std::endl;
}

// Constructeur par copie
template <typename T>
Array<T>::Array(const Array &copy)
{
    this->elements = NULL;
    this->length = copy.length;
    if (length > 0) 
    {
        this->elements = new T[length];
        for (size_t i = 0; i < length; ++i) {
            elements[i] = copy.elements[i];
        }
    }
    std::cout << "Constructor Array by copie called" << std::endl;
}

// Destructeur
template <typename T>
Array<T>::~Array() 
{
    delete[] this->elements;
    std::cout << "Destructor Array called" << std::endl;
}

// Opérateur d'affectation
template <typename T>
Array<T> &Array<T>::operator=(const Array &other) 
{
    std::cout << "Constructor Array by assignment called" << std::endl;
    if (this != &other) 
    {
        delete[] this->elements;

        this->length = other.length;
        this->elements = NULL;
        if (this->length > 0) {
            this->elements = new T[this->length];
            for (size_t i = 0; i < this->length; ++i) 
            {
                this->elements[i] = other.elements[i];
            }
        }
    }
    return *this;
}

// Opérateur []
template <typename T>
T &Array<T>::operator[](size_t index) 
{
    if (index >= this->length)
        throw std::out_of_range("Index out of range");
    return this->elements[index];
}

template <typename T>
const T &Array<T>::operator[](size_t index) const 
{
    if (index >= this->length)
        throw std::out_of_range("Index out of range");
    return this->elements[index];
}

//Avec l operateur [] :
//arr.set(0, 10);            // Définir une valeur.
//std::cout << arr.get(0);   // Récupérer une valeur.

//sans l operateur [] on aurait du utiliser des get/set:
//arr.set(0, 10);            // Définir une valeur.
//::cout << arr.get(0);      // Récupérer une valeur.


// Méthode size()
template <typename T>
size_t Array<T>::size() const 
{
    return this->length;
}

#endif // ARRAY_TPP
