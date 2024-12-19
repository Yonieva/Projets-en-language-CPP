/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:32:34 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 20:32:34 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->Name = "FragTrap_Default";
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
    std::cout << "FragTrap Default constructor called for: " << this->Name << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
    std::cout << "FragTrap wiht Name constructor called for: " << this->Name << std::endl;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap Copy constructor called for: " << Name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap Assignment Constructor called" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destuctor called" << std::endl;
}



void FragTrap::highFivesGuys(void) 
{
    std::cout << this->Name << " requests a HIGH FIVE !!!!!!!!!! " << std::endl;
}


void FragTrap::guardGate()
{
    std::cout << "FragTrap " << this->Name << " Gatekeeper GODDDDDDD mode!" << std::endl;
}


void FragTrap::attack(const std::string &target)
{
    if(this->Energy_point > 0 && this->Hit_point > 0)
    {
        this->Energy_point--;
        std::cout << "FragTrap " << this->Name << " attacks " << target
                  << ", causing " << this->Attack_damage << " pts of damage !" << std::endl;
       
    }
    else
        std::cout << "FragTrap " << this->Name << " have not enought energy to attack or is DEAD !" << std::endl;
}
