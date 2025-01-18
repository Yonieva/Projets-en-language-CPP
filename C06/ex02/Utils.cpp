/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 21:17:04 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/18 21:17:04 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>

// Fonction pour générer un objet aléatoire
Base* generate() 
{
    std::srand(std::time(0));
    int randNum = std::rand() % 3;

    if (randNum == 0)
        return new A();
    else if (randNum == 1)
        return new B();
    else
        return new C();
}


// Identifier le type à partir d'un pointeur
// Si la conversion est valide, le type de l'objet est affiche
void identify(Base* p) 
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}



// Identifier le type à partir d'une référence
void identify(Base& p) 
{
    try 
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } 
    catch (std::bad_cast&) //dynamic_cast retournent pointeur null en cas d echec
    {
    }


    try 
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } 
    catch (std::bad_cast&) 
    {
    }



    try 
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } 
    catch (std::bad_cast&) 
    {
    }
}