/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:00:03 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 22:00:03 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout<< "Constructor Dog Called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    delete brain;
    std::cout<< "Destructor Dog Called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other) 
{
    *this = other;
    std::cout << "Dog copied." << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
    if (this != &other) 
    {
        AAnimal::operator=(other);
    }
    std::cout << "Dog assigment." << std::endl;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout<< "WOUAF WOUAF !!" << std::endl;
}