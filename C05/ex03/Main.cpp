/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:43:45 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/30 14:43:45 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Intern.hpp"

int main() 
{
    Intern RandomIntern;

    AForm* form1 = RandomIntern.makeForm("robotomy request", "Idiot");
    AForm* form2 = RandomIntern.makeForm("shrubbery creation", "Home");
    AForm* form3 = RandomIntern.makeForm("unknown form", "Nowhere");



    delete form1;
    delete form2;
    delete form3;

    return 0;
}

