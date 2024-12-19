/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:18:16 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 22:18:16 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout<< "Constructor WrongAnimal Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) 
{
    *this = other;
    std::cout << "WrongAnimal copied." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) 
{
    if (this != &other) 
    {
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongAnimal assigment." << std::endl;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout<< "Destructor WrongAnimal Called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout<< "WrongAnimal make noise" << std::endl;
}

std::string WrongAnimal::getType() const 
{
    return this->type;
}