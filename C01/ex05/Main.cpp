/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:46:39 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/11 14:46:39 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl level;

    level.complain("DEBUG");
    level.complain("INFO");
    level.complain("WARNING");
    level.complain("ERROR");
    level.complain("INCONNU");

    return (0);
}