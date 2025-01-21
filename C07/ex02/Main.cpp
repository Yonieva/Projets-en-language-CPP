/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:41:27 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/21 11:41:27 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() 
{
    try 
    {
        std::cout << "=== Test avec un tableau d'int ===" << std::endl;

        // Création d'un tableau d'int de taille 5
        Array<int> intArray(5);
        for (size_t i = 0; i < intArray.size(); ++i) {
            intArray[i] = static_cast<int>(i * 10);  // Initialisation
        }

        // Affichage des éléments
        for (size_t i = 0; i < intArray.size(); ++i) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        // Test d'accès hors limites
        std::cout << "Tentative d'accès hors des limites  sur l 'element[5]" << std::endl;
        std::cout << intArray[10] << std::endl;  // Lève une exception

    } 
    catch (const std::out_of_range &e) 
    {
        std::cerr << "Exception attrapée (intArray) : " << e.what() << std::endl;
    }


    try 
    {
        std::cout << "\n=== Test avec un tableau de char ===" << std::endl;

        // Création d'un tableau de char de taille 4
        Array<char> charArray(4);

        // Initialisation des éléments
        charArray[0] = 'A';
        charArray[1] = 'B';
        charArray[2] = 'C';
        charArray[3] = 'D';

        // Affichage des éléments
        for (size_t i = 0; i < charArray.size(); ++i) {
            std::cout << "charArray[" << i << "] = " << charArray[i] << std::endl;
        }

        // Test de modification d'un élément
        charArray[1] = 'Z';
        std::cout << "Après modification : charArray[1] = " << charArray[1] << std::endl;

        // Test d'accès hors limites
        std::cout << "Tentative d'accès hors des limites sur l 'element[5]" << std::endl;
        std::cout << charArray[5] << std::endl;  // Lève une exception

    } 
    catch (const std::out_of_range &e) 
    {
        std::cerr << "Exception attrapée (charArray) : " << e.what() << std::endl;
    }

    return 0;
}

