/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:40:54 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 21:40:54 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    this->type = "Animal";
    std::cout<< "Constructor Animal Called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Animal copied." << std::endl;
}

Animal &Animal::operator=(const Animal &other) 
{
    if (this != &other) 
    {
        Animal::operator=(other);
    }
    std::cout << "Animal assigment." << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout<< "Destructor Animal Called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout<< "ANIMAL NOISE !!!!!!!" << std::endl;
}

std::string Animal::getType() const 
{
    return this->type;
}