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

bool isValidDate(const std::string& date) 
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-') return false;

    for (size_t i = 0; i < date.size(); i++) 
    {
        if (i == 4 || i == 7) continue; // Ignore les '-'
        if (!isdigit(date[i])) return false; // Vérifie que tous les autres caractères sont des chiffres
    }
    return true;
}


void processInputFile(const std::string& filename, const BitcoinExchange& btc) 
{
    std::ifstream file(filename.c_str());
    if (!file) 
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
    
    //Ignore la première ligne (header)
    std::string header;
    std::getline(file, header);

    std::string line;
    while (std::getline(file, line)) 
    {
        std::istringstream ss(line);
        std::string date, valueStr;


        if (!(std::getline(ss, date, '|') && std::getline(ss, valueStr))) 
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        date.erase(date.find_last_not_of(" ") + 1);
        valueStr.erase(0, valueStr.find_first_not_of(" "));

        float value = std::atof(valueStr.c_str());
        if (value < 0) 
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000) 
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        float rate = btc.getRate(date);
        if (rate < 0) 
        {
            std::cerr << "Error: bad input => " << date << std::endl;
        } else 
        {
            std::cout << date << " => " << value << " = " << (value * rate) << std::endl;
        }
    }
}

int main(int argc, char* argv[]) 
{
    if (argc != 2) 
    {
        std::cerr << "Usage: ./btc <input_file>" << std::endl;
        return 1;
    }

    BitcoinExchange btc("data.csv");
    processInputFile(argv[1], btc);
    return 0;
}



