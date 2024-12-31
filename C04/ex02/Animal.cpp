/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:40:54 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 21:40:54 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout<< "Constructor AAnimal Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    *this = other;
    std::cout << "AAnimal copied." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) 
{
    if (this != &other) 
    {
        this->type = other.type;
    }
    std::cout << "AAnimal assigment." << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout<< "Destructor AAnimal Called" << std::endl;
}

void    AAnimal::makeSound() const
{
    std::cout<< "AAnimal NOISE !!!!!!!" << std::endl;
}

std::string AAnimal::getType() const 
{
    return this->type;
}