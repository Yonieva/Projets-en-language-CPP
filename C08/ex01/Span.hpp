/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:58:26 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/23 15:58:26 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>

class Span {
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;

public:
    // Constructeur
    Span(unsigned int N);

    // Constructeur par copie
    Span(const Span &other);

    // Opérateur d'affectation
    Span &operator=(const Span &other);

    // Destructeur
    ~Span();

    // Ajouter un nombre
    void addNumber(int number);

    // Ajouter une plage d'itérateurs
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    // Calculer les spans
    int shortestSpan() const;
    int longestSpan() const;
};

#endif // SPAN_HPP
