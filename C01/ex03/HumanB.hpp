/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 23:15:04 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/10 23:15:04 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB 
{
    private:
        std::string name;
        Weapon* weapon;

    public:
        HumanB(std::string const& name);
        ~HumanB();

        void setWeapon(Weapon& newWeapon);
        void attack() const;
};

#endif
