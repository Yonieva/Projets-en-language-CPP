/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:10:03 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/23 16:10:03 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
    this->maxSize = N;
    std::cout << "Constructeur with parameter Span called" << std::endl;
}

Span::Span(const Span &copy)
{
    this->maxSize = copy.maxSize;
    this->numbers = copy.numbers;
    std::cout << "Constructeur by copy Span called" << std::endl;
}

Span &Span::operator=(const Span &other) 
{
    std::cout << "Constructeur by assignment Span called" << std::endl;
    if (this != &other) 
    {
        this->maxSize = other.maxSize;
        this->numbers = other.numbers;
    }
    return *this;
}

Span::~Span()
{
    std::cout << "Destructor Span called" << std::endl;
}









// Ajouter un nombre
void Span::addNumber(int number) 
{
    if (numbers.size() >= maxSize)
        throw std::runtime_error("Span is already full.");

    numbers.push_back(number); //push_back permet d ajouter un seul element a la fin du conteneur, redimensionne le conteneur si necessaire
}



// Ajouter une plage d'itérateurs
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) 
{
    unsigned int distance = std::distance(begin, end);
    if (numbers.size() + distance > maxSize)
        throw std::runtime_error("Not enough space in Span.");

    numbers.insert(numbers.end(), begin, end); // insert peut inserer un element a une position ou une sequence d element, necessite une position d insertion (sous forme d iterateur)
}



// Trouver le plus petit span
int Span::shortestSpan() const 
{
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span.");


    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());

    int shortest = *(sorted.begin() + 1) - *sorted.begin();
    for (unsigned int i = 1; i < sorted.size() - 1; ++i) 
    {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < shortest)
            shortest = diff;

    }

    return shortest;
}




// Trouver le plus grand span
int Span::longestSpan() const 
{
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span.");
    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());
    return max - min;
}
