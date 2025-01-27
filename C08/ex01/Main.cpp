/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:58:54 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/23 16:58:54 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    try 
    {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Containor Created with 5 elements: 6 3 17 9 11" << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << std::endl;


        // Test avec un grand nombre d'éléments
        Span largeSpan(10000);
        std::srand(std::time(0));
        for (int i = 0; i < 10000; ++i)
            largeSpan.addNumber(std::rand() % 1000000); // Nombres aléatoires
        std::cout << "Containor Created with 10 000 random elements " << std::endl;
        std::cout << "Shortest span (large set): " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest span (large set): " << largeSpan.longestSpan() << std::endl;

        std::cout << "Add a 6e elements"<< std::endl;
        sp.addNumber(42);

    } 
    catch (const std::exception &e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
