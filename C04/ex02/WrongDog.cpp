/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:20:16 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 22:20:16 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    this->type = "WrongDog";
    std::cout<< "Constructor WrongDog Called" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout<< "Destructor WrongDog Called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &other) : WrongAnimal(other) 
{
    *this = other;
    std::cout << "WrongDog copied." << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other) 
{
    if (this != &other) 
    {
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongDog assigment." << std::endl;
    return *this;
}

void    WrongDog::makeSound() const
{
    std::cout<< "WOUAF WOUAF !!" << std::endl;
}