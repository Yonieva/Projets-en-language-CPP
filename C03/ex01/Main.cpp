/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:48:51 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/12 22:48:51 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // Création d'une instance de ScavTrap
    ScavTrap scav("Jefferson");

    // Test des attaques
    scav.attack("Target2");
    scav.takeDamage(10);
    scav.beRepaired(2);

    // Test du mode gardien
    scav.guardGate();

    return 0;
}