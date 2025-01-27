/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:41:50 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/27 16:41:50 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int main(void)
{
	std::cout << "--- Constructors:\n";
	// Warlock warlock; // Doesn't compile
	Warlock richard("Richard", "Master of the Universe");
	// Warlock warlock(richard); // Doesn't compile
	// Warlock warlock = richard; // Doesn't compile

	std::cout << "--- Introduce:\n";
	richard.introduce();

	std::cout << "--- New Title:\n";
	richard.setTitle("Master of the Earth");
	richard.introduce();

	std::cout << "--- Destructors:\n";
	return (0);
}