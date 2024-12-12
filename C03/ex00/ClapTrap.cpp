/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:06:10 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/12 22:06:10 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Constructor called" << std::endl;
    this->Name = Name;
    this->Hit_point = 10;
    this->Energy_point = 10;
    this->Attack_damage = 10;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destuctor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(Energy_point > 0 && Hit_point > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target
                  << ", causing " << Attack_damage << " pts of damage !" << std::endl;
    }
    else
        std::cout << "ClapTrap " << Name << " have not enought energy to attack !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_point > 0)
    {
        Hit_point = (amount >= Hit_point) ? 0 : (Hit_point - amount);
        std::cout << "ClapTrap " << Name << " takes " << amount 
                  << " points of damage! Remaining hit points: " << Hit_point << "." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << Name << " is already out of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_point > 0 && Hit_point > 0)
    {
        Hit_point += amount;
        Energy_point--;
        std::cout << "ClapTrap " << Name << " repairs itself, recovering " << amount 
                  << " hit points! Current hit points: " << Hit_point << "." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << Name << " have not enought energy to repair !" << std::endl;
    }
}