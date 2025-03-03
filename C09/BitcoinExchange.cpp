#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <cstdlib>

BitcoinExchange::BitcoinExchange(const std::string& databaseFile) 
{
    loadDatabase(databaseFile);
}

void BitcoinExchange::loadDatabase(const std::string& filename) 
{
    std::ifstream file(filename.c_str());
    if (!file) 
    {
        std::cerr << "Error: could not open database file." << std::endl;
        exit(1);
    }

    std::string line;
    while (std::getline(file, line)) 
    {
        std::istringstream ss(line);
        std::string date;
        float rate;

        if (std::getline(ss, date, ',') && ss >> rate) 
        {
            exchangeRates[date] = rate;
        }
    }
}

float BitcoinExchange::getRate(const std::string& date) const 
{
    std::map<std::string, float>::const_iterator it = exchangeRates.lower_bound(date);
    if (it == exchangeRates.end() || it->first != date) 
    {
        if (it == exchangeRates.begin()) return -1;
        --it;
    }
    return it->second;
}
