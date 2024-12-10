/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 00:11:43 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/11 00:11:43 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(const std::string& filename, const std::string& s1, const std::string& s2)
{
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

Replace::~Replace() {}

bool Replace::process() 
{
    std::ifstream infile(filename.c_str());
    if (!infile.is_open()) 
    {
        std::cerr << "Error: Unable to open file '" << filename << "'." << std::endl;
        return false;
    }

    // Créer le fichier de sortie
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open()) 
    {
        std::cerr << "Error: Unable to create output file '" << filename << ".replace'." << std::endl;
        return false;
    }

    // Lire chaque ligne, remplacer les occurrences, et écrire dans le fichier de sortie
    std::string line;
    while (std::getline(infile, line)) 
    {
        outfile << replaceOccurrences(line) << std::endl;
    }

    infile.close();
    outfile.close();
    return true;
}

std::string Replace::replaceOccurrences(const std::string& line) 
{
    std::string result;
    size_t pos = 0; 
    size_t found = 0;

    while ((found = line.find(s1, pos)) != std::string::npos) 
    {
        // Ajouter la partie avant la correspondance et remplacer s1 par s2
        result += line.substr(pos, found - pos) + s2;
        pos = found + s1.length();
    }

    // Ajouter le reste de la ligne après la dernière occurrence
    result += line.substr(pos);
    return result;
}