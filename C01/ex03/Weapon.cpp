/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:44:32 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/10 21:44:32 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const& type) : type(type) {}

Weapon::~Weapon() {}



std::string const& Weapon::getType() const
{
    return (type);
}

void    Weapon::setType(std::string const& newType)
{
    type = newType;
}