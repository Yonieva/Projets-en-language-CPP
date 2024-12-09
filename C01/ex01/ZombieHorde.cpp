/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:45:42 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/09 15:45:42 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    if (n <= 0)
        return NULL;

    Zombie* horde = new Zombie[n];

    for (int i = 0; i < n; i++)
    {
        horde[i].setName(name);
    }

    return (horde);
}