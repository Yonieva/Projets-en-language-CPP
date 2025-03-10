/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:22:42 by yonieva           #+#    #+#             */
/*   Updated: 2025/03/10 16:22:42 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2) 
    {
        std::cerr << "Usage: ./RPN \"expression\"" << std::endl;
        return 1;
    }

    std::string expression = argv[1];
    RPN rpn;
    rpn.evaluate(expression);
    return 0;
}
