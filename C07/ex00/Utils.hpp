/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:36:11 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/19 20:36:11 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
const T &min(const T &a, const T &b) 
{
    if (a < b)
        return a;
    else if (a > b)
        return b;
    else
        return b;
}


template <typename T>
const T &max(const T &a, const T &b) 
{
    if (a < b)
        return b;
    else if (a > b)
        return a;
    else
        return b;
}

#endif 