/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:35:26 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/12 21:35:26 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


#include <iostream>
#include <string>

class ClapTrap
{
    protected :
        std::string Name;
        unsigned int Hit_point;
        unsigned int Energy_point;
        unsigned int Attack_damage;



    public :

        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap();

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    displayStats() const;

};

#endif

