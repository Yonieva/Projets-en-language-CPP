/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:13:52 by yonieva           #+#    #+#             */
/*   Updated: 2025/03/13 17:13:52 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include <sys/time.h>


class PmergeMe 
{
private:
    std::vector<int> _vector;
    std::deque<int> _deque;

    void mergeInsertionSortVector(std::vector<int>& arr);
    void mergeInsertionSortDeque(std::deque<int>& arr);

public:
    PmergeMe(); 
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    struct ComparePairsDeque
    {
        bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const
        {
            return a.second < b.second;
        }
    };

    struct ComparePairs 
    {
        bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const {
            return a.second < b.second; // Trie selon le plus grand élément de la paire
        }
    };

    bool parseInput(int argc, char** argv);
    void sortAndMeasure(std::vector<int>& vec, std::deque<int>& deq);
    void printBefore() const;
    void printAfter() const;
    std::vector<int> getVector() const;
    //std::deque<int> getDeque() const;
};

#endif
