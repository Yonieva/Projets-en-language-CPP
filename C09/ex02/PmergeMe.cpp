/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:14:17 by yonieva           #+#    #+#             */
/*   Updated: 2025/03/13 17:14:17 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructeur / Destructeur
PmergeMe::PmergeMe()
{
    std::cout << "Constructor PmergeMe Called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& other) 
{ 
    std::cout << "Constructor PmergeMe by copie  Called" << std::endl;
    *this = other; 
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) 
{
    std::cout << "Constructor PmergeMe by assignment Called" << std::endl;
    if (this != &other) 
    {
        _vector = other._vector;
        _deque = other._deque;
    }
    return *this;
}

PmergeMe::~PmergeMe() 
{
    std::cout << "Destructor PmergeMe Called" << std::endl;
}



// Vérifie si une chaîne est un entier positif valide
bool isPositiveInteger(const std::string &str) 
{
    for (size_t i = 0; i < str.length(); i++)
        if (!isdigit(str[i])) return false;

    return !str.empty();
}



// Parsing des arguments
bool PmergeMe::parseInput(int argc, char** argv) 
{
    if (argc < 2) 
    {
        std::cerr << "Error: No arguments provided." << std::endl;
        return false;
    }
    for (int i = 1; i < argc; i++) 
    {
        std::string arg(argv[i]);
        if (!isPositiveInteger(arg)) 
        {
            std::cerr << "Error" << std::endl;
            return false;
        }
        int num = std::atoi(arg.c_str());
        _vector.push_back(num);
        _deque.push_back(num);
    }
    return true;
}



// Affichage avant tri
void PmergeMe::printBefore() const 
{
    std::cout << "Before: ";
    for (size_t i = 0; i < _vector.size(); i++)
        std::cout << _vector[i] << " ";
    std::cout << std::endl << std::endl;
}



// Merge-Insertion Sort (Ford-Johnson) pour std::vector
void PmergeMe::mergeInsertionSortVector(std::vector<int>& arr)
{
    if (arr.size() < 2) return;

    std::vector<std::pair<int, int> > pairs;
    std::vector<int> mainChain, pending;

    // Création des paires et tri des éléments dans chaque paire
    for (size_t i = 0; i + 1 < arr.size(); i += 2) 
    {
        if (arr[i] > arr[i + 1])
            std::swap(arr[i], arr[i + 1]);
        pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
    }

    // Affichage des paires avant tri
    std::cout << "Paires avant tri (vector) : ";
    for (size_t i = 0; i < pairs.size(); i++) 
    {
        std::cout << "(" << pairs[i].first << ", " << pairs[i].second << ") ";
    }
    std::cout << std::endl;

    // Trier les paires par leur plus grand élément (croissant)
    std::sort(pairs.begin(), pairs.end(), ComparePairs());

    // Extraire la chaîne principale en insérant les plus grands éléments des paires
    for (size_t i = 0; i < pairs.size(); i++) 
    {
        mainChain.push_back(pairs[i].second);  // On met les plus grands dans l'ordre trié
        pending.push_back(pairs[i].first);     // On garde les petits pour plus tard
    }

    // Si un élément reste seul, l'ajouter à la fin de la chaîne principale
    if (arr.size() % 2 != 0)
        pending.push_back(arr.back());

    // Affichage avant insertion des pendants
    std::cout << "Main chain avant insertion des pendants (vector) : ";
    for (size_t i = 0; i < mainChain.size(); i++) 
    {
        std::cout << mainChain[i] << " ";
    }
    std::cout << std::endl;

    // Insérer chaque pendant dans la mainChain avec un tri progressif
    for (size_t i = 0; i < pending.size(); i++) 
    {
        std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), pending[i]);
        mainChain.insert(pos, pending[i]);
    }

    // Affichage après insertion complète
    std::cout << "Main chain après insertion (vector) : ";
    for (size_t i = 0; i < mainChain.size(); i++) 
    {
        std::cout << mainChain[i] << " ";
    }
    std::cout << std::endl << std::endl;

    arr = mainChain; 
    _vector = arr; // Mise à jour du tableau d'origine

}





// Merge-Insertion Sort (Ford-Johnson) pour std::deque
void PmergeMe::mergeInsertionSortDeque(std::deque<int>& arr) 
{
    if (arr.size() < 2) return;

    std::deque<std::pair<int, int> > pairs;
    std::deque<int> mainChain, pending;

    // Création des paires et tri des éléments dans chaque paire
    for (size_t i = 0; i + 1 < arr.size(); i += 2) 
    {
        if (arr[i] > arr[i + 1])
            std::swap(arr[i], arr[i + 1]);
        pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
    }

    // Affichage des paires avant tri
    std::cout << "Paires avant tri (deque) : ";
    for (size_t i = 0; i < pairs.size(); i++) 
    {
        std::cout << "(" << pairs[i].first << ", " << pairs[i].second << ") ";
    }
    std::cout << std::endl;

    // Trier les paires par leur plus grand élément (croissant)
    std::sort(pairs.begin(), pairs.end(), ComparePairs());

    // Extraire la chaîne principale en insérant les plus grands éléments des paires
    for (size_t i = 0; i < pairs.size(); i++) 
    {
        mainChain.push_back(pairs[i].second);  // On met les plus grands dans l'ordre trié
        pending.push_back(pairs[i].first);     // On garde les petits pour plus tard
    }

    // Si un élément reste seul, l'ajouter à la fin de la chaîne principale
    if (arr.size() % 2 != 0)
        pending.push_back(arr.back());

    // Affichage avant insertion des pendants
    std::cout << "Main chain avant insertion des pendants (deque) : ";
    for (size_t i = 0; i < mainChain.size(); i++) 
    {
        std::cout << mainChain[i] << " ";
    }
    std::cout << std::endl;

    // Insérer chaque pendant dans la mainChain avec un tri progressif
    for (size_t i = 0; i < pending.size(); i++) 
    {
        std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), pending[i]);
        mainChain.insert(pos, pending[i]);
    }

    // Affichage après insertion complète
    std::cout << "Main chain après insertion (deque) : ";
    for (size_t i = 0; i < mainChain.size(); i++) 
    {
        std::cout << mainChain[i] << " ";
    }
    std::cout << std::endl << std::endl;
    

    arr = mainChain;
    _deque = arr; // Mise à jour du tableau d'origine
}





// Tri et mesure du temps
void PmergeMe::sortAndMeasure(std::vector<int>& vec, std::deque<int>& deq)
{
    // Mesure pour std::vector
    struct timeval startVec, endVec;
    gettimeofday(&startVec, NULL);
    mergeInsertionSortVector(vec);
    gettimeofday(&endVec, NULL);
    long long timeVec = (endVec.tv_sec - startVec.tv_sec) * 1000000 + (endVec.tv_usec - startVec.tv_usec);

    // Mesure pour std::deque
    struct timeval startDeq, endDeq;
    gettimeofday(&startDeq, NULL);
    mergeInsertionSortDeque(deq);
    gettimeofday(&endDeq, NULL);
    long long timeDeq = (endDeq.tv_sec - startDeq.tv_sec) * 1000000 + (endDeq.tv_usec - startDeq.tv_usec);

    // Affichage du temps
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << timeVec << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque: " << timeDeq << " us" << std::endl << std::endl;

    printAfter();
}



// Affichage après tri
void PmergeMe::printAfter() const 
{
    std::cout << "After with vector: ";
    for (size_t i = 0; i < _vector.size(); i++)
        std::cout << _vector[i] << " ";
    std::cout << std::endl;

    std::cout << "After with deque: ";
    for (size_t i = 0; i < _deque.size(); i++)
        std::cout << _deque[i] << " ";
    std::cout << std::endl;
}


std::vector<int> PmergeMe::getVector() const 
{
    return _vector;
}

/*std::deque<int> PmergeMe::getDeque() const 
{
    return numbersDeque;
}*/
