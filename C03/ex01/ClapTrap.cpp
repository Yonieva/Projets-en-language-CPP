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

ClapTrap::ClapTrap()
{
    std::cout << "Constructor by default called" << std::endl;
    this->Name = "ClapTrap_Default";
    this->Hit_point = 10;
    this->Energy_point = 10;
    this->Attack_damage = 10;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Constructor ClapTrap wiht name called" << std::endl;
    this->Name = Name;
    this->Hit_point = 10;
    this->Energy_point = 10;
    this->Attack_damage = 10;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destuctor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;

    std::cout << "Copy constructor called for ClapTrap: " << this->Name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called for ClapTrap: " << other.Name << std::endl;
    if (this != &other)
    {
        this->Name = other.Name;
        this->Hit_point = other.Hit_point;
        this->Energy_point = other.Energy_point;
        this->Attack_damage = other.Attack_damage;
    }
    return *this;
}








void ClapTrap::attack(const std::string& target)
{
    if(this->Energy_point > 0 && this->Hit_point > 0)
    {
        this->Energy_point--;
        std::cout << "ClapTrap " << this->Name << " attacks " << target
                  << ", causing " << this->Attack_damage << " pts of damage !" << std::endl;
       
    }
    else
        std::cout << "ClapTrap " << this->Name << " have not enought energy to attack or is DEAD !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit_point > 0)
    {
        this->Hit_point = (amount >= this->Hit_point) ? 0 : (this->Hit_point - amount);
        std::cout << "ClapTrap " << this->Name << " takes " << amount 
                  << " points of damage! Remaining hit points: " << this->Hit_point << "." << std::endl;
    }
    if (this->Hit_point == 0)
    {
        std::cout << "ClapTrap " << this->Name << " is already out of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_point > 0 && this->Hit_point > 0)
    {
        this->Hit_point += amount;
        this->Energy_point--;
        std::cout << "ClapTrap " << this->Name << " repairs itself, recovering " << amount 
                  << " hit points! Current hit points: " << this->Hit_point << "." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->Name << " have not enought energy to repair or is DEAD !" << std::endl;
    }
}