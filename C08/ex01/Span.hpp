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
    unsigned int maxSize;
    std::vector<int> numbers;

public:
    Span(unsigned int N);
    Span(const Span &copy);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int number);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan() const;
    int longestSpan() const;
};

#endif // SPAN_HPP
