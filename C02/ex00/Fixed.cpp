/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:29:56 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/11 16:29:56 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructeur par défaut
Fixed::Fixed() : _Value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

// Constructeur de recopie
Fixed::Fixed(const Fixed &other) 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Surcharge de l'opérateur d'affectation
Fixed &Fixed::operator=(const Fixed &other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _Value = other._Value;
    }
    return *this;
}

// Destructeur
Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

// Fonction membre pour obtenir la valeur brute
int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return _Value;
}

// Fonction membre pour définir la valeur brute
void Fixed::setRawBits(int const raw) 
{
    _Value = raw;
}
