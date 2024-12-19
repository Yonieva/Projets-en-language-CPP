/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:32:27 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 20:32:27 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP


#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :

        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();

        void    attack(const std::string &target);
        void    guardGate();
        void    highFivesGuys(void);

};

#endif

