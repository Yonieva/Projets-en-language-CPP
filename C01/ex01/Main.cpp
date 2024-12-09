/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:50:30 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/09 15:50:30 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int main()
{
    int n = 10;
    std::string name = "HordeZombie";

    Zombie* horde = zombieHorde(n, name);
    if(!horde)
    {
        std::cerr << "Failed to create a zombie horde." << std::endl;
        return (1);
    }

    for (int i = 0; i < n; i++)
    {
        horde[i].announce();
    }

    delete[] horde;

    return (0);

}