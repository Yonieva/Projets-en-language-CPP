/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:16:50 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/17 21:16:50 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
    // Création de l'objet Data
    Data originalData("Test data"); 

    // Sérialisation de l'adresse de l'objet
    uintptr_t serializedData = Serializer::serialize(&originalData);

    // Désérialisation pour récupérer l'adresse
    Data* deserializedData = Serializer::deserialize(serializedData);
    std::cout << std::endl;
    // Affichage des adresses
    std::cout << "Adresse mémoire où l'objet Test_data est stocké." << std::endl;
    std::cout << "Original address: " << &originalData << std::endl;
    std::cout << std::endl;
    std::cout << "représentation uintptr_t de l'adresse (sous forme de nombre entier non signé)." << std::endl;
    std::cout << "Serialized value: " << serializedData << std::endl;
    std::cout << std::endl;
    std::cout << "l'adresse obtenue après désérialisation." << std::endl;
    std::cout << "Deserialized address: " << deserializedData << std::endl;
    std::cout << std::endl;
    return 0;
}
