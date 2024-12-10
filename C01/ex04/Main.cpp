/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 00:01:25 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/11 00:01:25 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char** argv) 
{
    if (argc != 4) 
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) 
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    Replace replacer(filename, s1, s2);

    if (!replacer.process()) 
    {
        return 1;
    }

    std::cout << "File '" << filename << ".replace' has been created successfully." << std::endl;
    return 0;
}