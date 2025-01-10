/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:48:09 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/09 16:48:09 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib> // for atof, atoi
#include <cmath>   // for isnan, isinf

class ScalarConverter
{

    private :
    ScalarConverter();
    ScalarConverter(const ScalarConverter &copy);
    ScalarConverter &operator=(const ScalarConverter &other);
    ~ScalarConverter();

    static bool isCharArg(const std::string &arg);
    static bool isIntArg(const std::string &arg);
    static bool isFloatArg(const std::string &arg);
    static bool isDoubleArg(const std::string &arg);
    static bool isPseudoArg(const std::string &arg);

    static void printConversions(double value);
    static void printChar(double value);
    static void printInt(double value);
    static void printFloat(double value);
    static void printDouble(double value);


    public :
    static void convert(const std::string &arg);

};

#endif


/*
nan	Not a Number	0.0/0.0, sqrt(-1.0)	Indéfini
inf	Infini positif	1.0/0.0, 1e308 * 10	Trop grand
-inf	Infini négatif	-1.0/0.0, -1e308 * 10	Trop petit
nanf	Not a Number en float	Même opérations que nan	Idem
+inff	Infini positif en float	1.0f/0.0f	Trop grand (float)
-inff	Infini négatif en float	-1.0f/0.0f	Trop petit (float)


Conversion vers un type universel (double)
Args est toujours converti en double, car ce type peut représenter facilement tous les autres types numériques.
*/

/*

Input	Type détecté	Conversion effectuée	      Valeur finale (double)

"nan"	isPseudoArg	       atof("nan")	                        nan
"'A'"	isCharArg	   static_cast<double>('A')	                65.0
"42"	isIntArg	   static_cast<double>(atoi("42"))	        42.0
"4.2f"	isFloatArg	       atof("4.2f")	                        4.2
"4.2"	isDoubleArg	       atof("4.2")	                        4.2

*/