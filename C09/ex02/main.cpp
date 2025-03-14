/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:21:08 by yonieva           #+#    #+#             */
/*   Updated: 2025/03/13 17:21:08 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) 
{
    PmergeMe sorter;

    if (!sorter.parseInput(argc, argv))
        return 1;

    sorter.printBefore();

    std::vector<int> vec = sorter.getVector();
    std::deque<int> deq(vec.begin(), vec.end());

    sorter.sortAndMeasure(vec, deq);

    return 0;
}