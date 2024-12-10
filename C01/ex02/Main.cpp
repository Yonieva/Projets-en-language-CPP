/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:17:48 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/09 16:17:48 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *string_pointer = &str;
    std::string &string_reference = str;

    std::cout << "Memory address of the string variable: " << &str << std::endl;
    std::cout << "Memory address by pointer: " << string_pointer << std::endl;
    std::cout << "Memory address by reference: " << &string_reference << std::endl;
    std::cout << std::endl;
    std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "Value pointed by string_pointer: " << *string_pointer << std::endl;
    std::cout << "Value pointed by string_reference: " << string_reference << std::endl;

    return (0);
}