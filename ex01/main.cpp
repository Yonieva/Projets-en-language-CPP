/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:42:05 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/06 14:07:10 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	Phonebook	repertory;
	std::string	str;

	std::cout << "Welcome to Phonebook !" << std::endl;
	while(str != "END")
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT) > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			//ADD
		else if (str == "SEARCH")
			// SEARCH
	}
	return (0);
}