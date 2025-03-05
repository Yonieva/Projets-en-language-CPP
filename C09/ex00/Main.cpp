/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:04:46 by yonieva           #+#    #+#             */
/*   Updated: 2025/02/12 19:04:46 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>


int main(int argc, char* argv[]) 
{
    if (argc != 2) 
    {
        std::cerr << "Usage: ./btc <input_file>" << std::endl;
        return 1;
    }

    BitcoinExchange btc("data.csv");
    btc.processInputFile(argv[1]);
    return 0;
}



