/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 23:10:56 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/10 23:10:56 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA 
{
    private:
        std::string name;
        Weapon& weapon; // Référence constante à une arme

    public:
        HumanA(std::string const& name, Weapon& weapon);
        ~HumanA();

    void attack() const;
};

#endif
