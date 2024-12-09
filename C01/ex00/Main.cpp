/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:12:06 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/09 15:12:06 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* NewZombie(std::string name);
void    RandomChump(std::string name);

int main()
{
    Zombie* heap_zombie = NewZombie("Heap_Zombie");
    heap_zombie->announce();

    RandomChump("Stack_Zombie");

    delete heap_zombie;

    return (0);
}