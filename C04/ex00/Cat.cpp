/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:13:40 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 22:13:40 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout<< "Constructor Cat Called" << std::endl;
}

Cat::~Cat()
{
    std::cout<< "Destructor Cat Called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) 
{
    *this = other;
    std::cout << "Cat copied." << std::endl;
}

Cat &Cat::operator=(const Cat &other) 
{
    if (this != &other) 
    {
        Animal::operator=(other);
    }
    std::cout << "Cat assigment." << std::endl;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout<< "MIAOUUUUUUUU !!" << std::endl;
}