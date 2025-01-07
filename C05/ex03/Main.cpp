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
    Intern someRandomIntern;

    AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "Home");
    AForm* form3 = someRandomIntern.makeForm("unknown form", "Nowhere");

    delete form1;
    delete form2;
    delete form3;

    return 0;
}

