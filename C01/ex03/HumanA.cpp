/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:43:56 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/10 21:43:56 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const& name, Weapon& weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}


void    HumanA::attack() const
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
