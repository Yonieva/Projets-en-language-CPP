/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:44:11 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/10 21:44:11 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const& name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}


void    HumanB::setWeapon(Weapon& newWeapon)
{
    weapon = &newWeapon;
}

void    HumanB::attack() const
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;

    else
        std::cout << name << " has no weapon to attack !!! " << std::endl;
}