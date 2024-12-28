/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:22:11 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 22:22:11 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout<< "Constructor WrongCat Called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<< "Destructor WrongCat Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) 
{
    *this = other;
    std::cout << "WrongCat copied." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) 
{
    if (this != &other) 
    {
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongCat assigment." << std::endl;
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout<< "MIAOUUUUUUUU !!" << std::endl;
}