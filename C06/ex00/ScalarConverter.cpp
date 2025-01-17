/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:42:51 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/10 11:42:51 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Constructor ScalarConverter Called" << std::endl;
}

ScalarConverter::ScalarConverter (const ScalarConverter &copy)
{
     std::cout << "Constructor by copy ScalarConverter Called" << std::endl;
     (void)copy; //eviter err compil param non utilise
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this != &other)
    {
        std::cout << "Constructor by assignment ScalarConverter Called" << std::endl;
        (void)other;  //eviter err compil param non utilise
    }
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Desstructor ScalarConverter Called" << std::endl;
}

void ScalarConverter::convert(const std::string &arg) 
{

    double value = 0;

    if (isPseudoArg(arg)) // (nan +inf -inf)
        value = atof(arg.c_str()); // convert en double
    else if (isCharArg(arg)) 
        value = static_cast<double>(arg[0]); // convert en double le char entre simple guillemet ''
    else if (isIntArg(arg))
        value = static_cast<double>(atoi(arg.c_str())); // convert arg en int, puis en double
    else if (isFloatArg(arg))
        value = atof(arg.c_str()); // convert en double sans prendre le 'f'
    else if (isDoubleArg(arg))
        value = atof(arg.c_str()); // convert directement la chaine de caractere en double
    else
    {
        std::cerr << "Error: Invalid Argument" << std::endl;
        return;
    }

    printConversions(value);
}

bool ScalarConverter::isCharArg(const std::string &arg) 
{
    if (arg.length() == 1 && std::isalpha(arg[0]))
        return true;
    return false;
}

bool ScalarConverter::isIntArg(const std::string &arg) 
{
    for (size_t i = 0; i < arg.length(); i++) 
    {
        if (i == 0 && (arg[i] == '-' || arg[i] == '+')) 
            continue;
        if (!isdigit(arg[i])) 
            return false;
    }
    return true;
}

bool ScalarConverter::isFloatArg(const std::string &arg) 
{
    if (arg[arg.length() - 1] != 'f') 
        return false;
    size_t pos = arg.find('.');
    if (pos == std::string::npos) //npos est le retour de find si pas trouver
        return false;
    return true;
}

bool ScalarConverter::isDoubleArg(const std::string &arg) 
{
    if (arg.find('.') != std::string::npos && arg[arg.length() - 1] != 'f')
        return true;
    return false;
}

bool ScalarConverter::isPseudoArg(const std::string &arg) 
{
    if(arg == "-inff" || arg == "+inff" || arg == "nanf" || arg == "-inf" || arg == "+inf" || arg == "nan")
        return true;
    return false;
}

void ScalarConverter::printConversions(double value) 
{
    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);
}

void ScalarConverter::printChar(double value) //nan = not a number (ex La multiplication d'une valeur infinie par 0 : +∞ * 0.)
{
    if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast<int>(value)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

void ScalarConverter::printInt(double value) 
{
    if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void ScalarConverter::printFloat(double value) 
{
    std::cout << "float: " << static_cast<float>(value); // Conversion de "value" en float pour l'affichage
    if (std::fmod(value, 1.0) == 0.0)  // Vérifie si "value" est un entier (fmodulo 1.0 = 0)
        std::cout << ".0"; // Si c'est un entier, ajouter .0 pour que le nombre flottant affiche le format entier
    std::cout << "f" << std::endl; // Affichage de "f" pour indiquer que c'est un type float
}

void ScalarConverter::printDouble(double value) 
{
    std::cout << "double: " << value;
    if (std::fmod(value, 1.0) == 0.0)
        std::cout << ".0";
    std::cout << std::endl;
}