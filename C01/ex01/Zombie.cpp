/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:45:40 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/09 14:45:40 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "";
}

Zombie::~Zombie()
{
    std::cout << name << " is destroyed." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

void    Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}