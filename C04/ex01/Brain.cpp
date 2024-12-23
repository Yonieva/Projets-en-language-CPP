/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:40:20 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/23 23:40:20 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
        for (int i = 0; i < 100; ++i) 
        {
            this->ideas[i] = ""; // Initialisation  (valgrind retour)
        }
    std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Constructor Brain copied." << std::endl;
}

Brain &Brain::operator=(const Brain &other) 
{
    if (this != &other) 
    {
        if (this != &other) 
        { // Protéger contre l'auto-assignation
            for (int i = 0; i < 100; i++) 
            {
                ideas[i] = other.ideas[i];
            }
        }
    }
    std::cout << "Constructor Brain assigment." << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout<< "Destructor Brain Called" << std::endl;
}