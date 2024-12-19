/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:05:46 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 19:05:46 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->Name = "ScavTrap_Default";
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap Default constructor called for: " << this->Name << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap wiht Name constructor called for: " << this->Name << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destuctor called" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " Gatekeeper GODDDDDDD mode!" << std::endl;
}


void ScavTrap::attack(const std::string &target)
{
    if(this->Energy_point > 0 && this->Hit_point > 0)
    {
        this->Energy_point--;
        std::cout << "ScavTrap " << this->Name << " attacks " << target
                  << ", causing " << this->Attack_damage << " pts of damage !" << std::endl;
       
    }
    else
        std::cout << "ScavTrap " << this->Name << " have not enought energy to attack or is DEAD !" << std::endl;
}
