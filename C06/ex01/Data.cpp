/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:06:19 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/17 21:06:19 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
    this->file = "Default";
    std::cout << "Constructor by defaut Data called" << std::endl;
}

Data::Data(std::string arg)
{
    this->file = arg;
    std::cout << "Constructor with parameter Data called" << std::endl;
}

Data::Data(const Data &copy)
{
    this->file = copy.file;
    std::cout << "Constructor by copy Data called" << std::endl;
}

Data &Data::operator=(const Data &other)
{
    if (this != &other)
    {
        this->file = other.file;
        std::cout << "Constructor by assignment Data called" << std::endl;
    } 
    return *this; 
}

Data::~Data()
{
    std::cout << "Destructor by defaut Data called" << std::endl;
}

std::string Data::getData() const
{
    return this->file;
}

void Data::setData(std::string str)
{
    this->file = str;
}