/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 23:08:49 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/10 23:08:49 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon 
{
    private:
        std::string type;

    public:
        Weapon(std::string const& type);
        ~Weapon();

    std::string const& getType() const;
    void setType(std::string const& newType);
};

#endif