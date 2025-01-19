/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:14:24 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/19 21:14:24 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

// Fonction "affcihage" à appliquer à chaque élément (modele de fonction)
template <typename T>
void printElement(T &element) 
{
    std::cout << element << " ";
}

// Fonction Incremental d un entier (Fonction Classique)
void increment(int &element) 
{
    element++;
}


int main() 
{
    std::cout << "Exemple 1 : Tableau d'entiers (fonction Classique)" << std::endl;
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLength = sizeof(intArray) / sizeof(intArray[0]); // taille totale / taille d un element = taille total

    std::cout << "Avant incrémentation : ";
    iter(intArray, intLength, printElement);
    std::cout << std::endl;

    iter(intArray, intLength, increment);

    std::cout << "Après incrémentation : ";
    iter(intArray, intLength, printElement);
    std::cout << std::endl;



    std::cout << std::endl;
    std::cout << "Exemple 2 : Tableau de chaînes de caractères (modele de fonction)" << std::endl;
    std::string strArray[] = {"Hello", "World", "Corrector!"};
    size_t strLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Tableau de chaînes : ";
    iter(strArray, strLength, printElement);
    std::cout << std::endl;

    return 0;
}
