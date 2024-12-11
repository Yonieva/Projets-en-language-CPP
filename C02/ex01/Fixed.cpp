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
#include <cmath>

Fixed::Fixed() : _Value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb) 
{
    std::cout << "Int constructor called" << std::endl;
    _Value = nb << _Bits;
}

Fixed::Fixed(const float nb_float) 
{
    std::cout << "Float constructor called" << std::endl;
    _Value = static_cast<int>(roundf(nb_float * (1 << _Bits)));
}

Fixed::Fixed(const Fixed &other) 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _Value = other._Value;
    }
    return *this;
}

float Fixed::toFloat(void) const 
{
    return static_cast<float>(_Value) / (1 << _Bits);
}

int Fixed::toInt(void) const 
{
    return _Value >> _Bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}

