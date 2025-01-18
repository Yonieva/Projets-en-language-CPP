/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 21:25:22 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/18 21:25:22 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base* generate();
void identify(Base* p);
void identify(Base& p);

int main() 
{
    // Génération aléatoire
    Base* randomBase = generate();

    // Affichage du type avec un pointeur
    std::cout << "Type identified using pointer: ";
    identify(randomBase);
    std::cout << std::endl;

    // Affichage du type avec une référence
    std::cout << "Type identified using reference: ";
    identify(*randomBase);
     std::cout << std::endl;

    delete randomBase;

    return 0;
}