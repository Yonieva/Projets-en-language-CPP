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
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // Création d'une instance de FragTrap
    ClapTrap Clap("McLovin Clap");
    ScavTrap Scav("Jefferson Scav");
    FragTrap Frag("Jean Pierre Frag");

    // Test des attaques
    Clap.displayStats();
    Scav.displayStats();
    Frag.displayStats();
    Clap.attack("Target1");
    Frag.attack("Target2");
    Scav.attack("Target3");
    std::cout << std::endl;
    Scav.guardGate();
    Frag.highFivesGuys();
    std::cout << std::endl;

    return 0;
}