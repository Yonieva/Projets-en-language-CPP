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

// Constructors and Destructor
Fixed::Fixed() : _Value(0) {}

Fixed::Fixed(const int nb) 
{
    _Value = nb << _Bits;
}

Fixed::Fixed(const float nb_float) 
{
    _Value = static_cast<int>(roundf(nb_float * (1 << _Bits)));
}

Fixed::Fixed(const Fixed &other) 
{
    *this = other;
}

Fixed::~Fixed() {}

// Assignment operator
Fixed &Fixed::operator=(const Fixed &other) 
{
    if (this != &other) {
        _Value = other._Value;
    }
    return *this;
}


// Conversion functions
float Fixed::toFloat(void) const 
{
    return static_cast<float>(_Value) / (1 << _Bits);
}

int Fixed::toInt(void) const 
{
    return _Value >> _Bits;
}








// Comparison operators
bool Fixed::operator>(const Fixed &other) const 
{
    return _Value > other._Value;
}

bool Fixed::operator<(const Fixed &other) const 
{
    return _Value < other._Value;
}

bool Fixed::operator>=(const Fixed &other) const 
{
    return _Value >= other._Value;
}

bool Fixed::operator<=(const Fixed &other) const 
{
    return _Value <= other._Value;
}

bool Fixed::operator==(const Fixed &other) const 
{
    return _Value == other._Value;
}

bool Fixed::operator!=(const Fixed &other) const 
{
    return _Value != other._Value;
}





// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const 
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const 
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const 
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const 
{
    return Fixed(this->toFloat() / other.toFloat());
}

// Increment and decrement operators
//Stocke une copie de l'objet actuel dans temp.
//Incrémente _Value de 1.
//Retourne la copie avant l'incrémentation.
Fixed &Fixed::operator++() 
{ // Pre-increment
    _Value++;
    return *this;
}

Fixed Fixed::operator++(int) 
{ // Post-increment
    Fixed temp = *this;
    _Value++;
    return temp;
}

Fixed &Fixed::operator--() 
{ // Pre-decrement
    _Value--;
    return *this;
}

Fixed Fixed::operator--(int) 
{ // Post-decrement
    Fixed temp = *this;
    _Value--;
    return temp;
}

// Min and Max functions
Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) 
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) 
{
    return (a > b) ? a : b;
}

// Stream insertion operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}

