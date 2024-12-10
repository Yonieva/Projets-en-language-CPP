/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:44:25 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/10 21:44:25 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    {
        Weapon chainsaw = Weapon("Chainsaw");
        HumanA P1("Mac_Douglas", chainsaw);
        P1.attack();
        chainsaw.setType("Machine_Gun");
        P1.attack();
    }
    {
        Weapon chainsaw = Weapon("Chainsaw");
        HumanB P2("Jefferson");
        P2.attack();
        P2.setWeapon(chainsaw);
        P2.attack();
        chainsaw.setType("Machine_Gun");
        P2.attack();
    }
    return (0);
    
}