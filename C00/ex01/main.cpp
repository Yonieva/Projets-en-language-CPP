/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:42:05 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/08 01:03:37 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	Phonebook	repertory;
	std::string	str;

	std::cout << "Welcome to Phonebook !" << std::endl;
	while(str != "EXIT")
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT) > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			repertory.add();
		else if (str == "SEARCH")
			repertory.search();
	}
	return (0);
}