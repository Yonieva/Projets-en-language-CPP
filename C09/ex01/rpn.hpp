/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:56:09 by yonieva           #+#    #+#             */
/*   Updated: 2025/03/10 15:56:09 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <stdexcept>

class RPN
{
    public:
        RPN();
        void evaluate(const std::string &expression);
    private:
        bool isOperator(char c) const;
};

#endif
