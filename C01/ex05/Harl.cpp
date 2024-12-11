/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:24:05 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/11 14:24:05 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <map>

void Harl::debug(void) 
{
    std::cout << "DEBUG : Il serait bon que vous m'appreniez deux ou trois rudiments en arabe pour ce soir, afin que je passe inapercu.\n" << std::endl;
}

void Harl::info(void) 
{
    std::cout << "INFO : Wāḥid, Ithnān, Thalātha, Arba'a, Khamsa, ça veux dire quoi ?.\n" << std::endl;
}

void Harl::warning(void) 
{
    std::cout << "WARNING : Hummmmm... ça me sert à rien. Sauf si je dois compter jusqu'à 5. Et là en revanche, ça pourrait me servir.\n" << std::endl;
}

void Harl::error(void) 
{
    std::cout << "ERROR : Il ne faut pas que je dépasse 5, car je ne connais pas 6. Je suis battu. Je crois qu'il faut tenter le coup, le jeu en vaut la chandelle Larmina\n" << std::endl;
}

void Harl::complain(std::string level) 
{
    std::map <std::string, void (Harl::*)(void)> actions;

    actions.insert(std::make_pair("DEBUG", &Harl::debug));
    actions.insert(std::make_pair("INFO", &Harl::info));
    actions.insert(std::make_pair("WARNING", &Harl::warning));
    actions.insert(std::make_pair("ERROR", &Harl::error));

    std::map <std::string, void (Harl::*)(void)>::iterator it = actions.find(level);

    if (it != actions.end()) 
        (this->*(it->second))();
    else
        std::cout << "UKNOWN : Niveau inconnu" << std::endl;
}
