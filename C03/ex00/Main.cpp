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

int main()
{
    ClapTrap robot("McLovin");

    // Test des méthodes
    robot.attack("Target1");
    robot.takeDamage(5);
    robot.beRepaired(3);

    // Scénarios avec épuisement des ressources
    robot.takeDamage(8);
    robot.attack("Target2");
    robot.beRepaired(5);

    return 0;
}