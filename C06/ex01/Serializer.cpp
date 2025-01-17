/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:40:00 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/17 20:40:00 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Constructor by defaut Serializer called" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
    std::cout << "Constructor by copy Serializer called" << std::endl;
    (void)copy;
}

Serializer &Serializer::operator=(const Serializer &other)
{
    if (this != &other)
    { 
        std::cout << "Constructor by assigment Serializer called" << std::endl;
        (void)other;
    }
    return *this;
}

Serializer::~Serializer()
{
    std::cout << "Desstructor Serializer called" << std::endl;
}

//prend un pointeur et le convertit en un uintptr_t (entier non signé)
uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

//prend un uintptr_t et le convertit en un pointeur vers Data
Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

//reinterpret_cast

/*permet de convertir n'importe quel type de pointeur ou entier en un autre type
 arbitraire, sans effectuer de vérification au moment de la compilation ou de
  l'exécution. Cela le rend puissant, mais également dangereux si mal utilisé.*/