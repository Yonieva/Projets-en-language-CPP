/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:42:49 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/11 16:42:49 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main(void) 
{
    Fixed a;

//Un objet temporaire Fixed(5.05f) est créé via le constructeur flottant.
//Un autre objet temporaire Fixed(2) est créé via le constructeur entier.
//Les deux objets temporaires sont multipliés (*), ce qui retourne un nouvel objet Fixed.
//La valeur flottante de 5.05f est multipliée par 2.0, ce qui donne 10.10.
//L'objet résultant est assigné à b.
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
//Value de a est incremente de 1 (soit 1 x 2puissance-8, environ 0.00390625) et affiche la nouvelle valeur via toFloat   
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

//_Value de b représente 10.1016 en flottant.
    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}

