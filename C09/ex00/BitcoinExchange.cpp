#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <cstdlib>

BitcoinExchange::BitcoinExchange(const std::string& databaseFile) 
{
    loadDatabase(databaseFile);
}






/*
Ouvre un fichier contenant des dates et des taux de change (YYYY-MM-DD,rate).
Parcourt le fichier ligne par ligne.
Sépare chaque ligne en date et taux de change (en utilisant , comme séparateur).
Stocke ces valeurs dans exchangeRates pour une recherche rapide.
*/
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






/*
Utilise exchangeRates.lower_bound(date) pour chercher la date.
Si la date n'existe pas, il retourne le dernier taux antérieur disponible.
S'il n'y a pas de date plus ancienne, il retourne -1 (indiquant une erreur).
*/
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




/*
check le format valide de la date XXXX-XX-XX
*/
bool BitcoinExchange::isValidDate(const std::string& date)const 
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-') return false;

    for (size_t i = 0; i < date.size(); i++) 
    {
        if (i == 4 || i == 7) continue; // Ignore les '-'
        if (!isdigit(date[i])) return false; // Vérifie que tous les autres caractères sont des chiffres
    }
    return true;
}







/*
Ouvre un fichier contenant des transactions (YYYY-MM-DD | valeur).
Ignore la première ligne (header).
Parcourt chaque ligne :
Sépare date et valeur (séparateur |).
Nettoie les espaces superflus.
Vérifie si la date est valide.
Vérifie si la valeur est un nombre positif ≤ 1000.
Cherche le taux de change avec getRate(date).
Affiche le résultat ou un message d'erreur.
*/
void BitcoinExchange::processInputFile(const std::string& filename) const
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

        if (!isValidDate(date)) 
        {
            std::cerr << "Error: bad date format => " << date << std::endl;
            continue;
        }   

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

        float rate = getRate(date);
        if (rate < 0) 
        {
            std::cerr << "Error: bad input => " << date << std::endl;
        } 
        else 
        {
            std::cout << date << " => " << value << " = " << (value * rate) << std::endl;
        }
    }
}
