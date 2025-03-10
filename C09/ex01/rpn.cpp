/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:56:59 by yonieva           #+#    #+#             */
/*   Updated: 2025/03/10 15:56:59 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

RPN::RPN() {}

bool RPN::isOperator(char c) const 
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}


void RPN::evaluate(const std::string &expression) 
{
    std::stack<int> stack;
    std::istringstream tokens(expression);//std::istringstream  permet de lire des éléments séparés par des espaces dans expression.
    std::string token;//pour stocker element lu par istringstream

    while (tokens >> token) 
    {
        if (isdigit(token[0]) && token.size() == 1) //(verifier si c est bien un chiffre unique 0-9)
        {  
            // C'est un chiffre (0-9) => on covertit "-0" puis on l'empile
            stack.push(token[0] - '0');
        } 
        else if (token == "+" || token == "-" || token == "*" || token == "/") 
        {  
            // C'est un opérateur => on dépile les deux derniers nombres et on effectue l'opération
            if (stack.size() < 2) 
            {
                throw std::runtime_error("Error: Not enough operands.");
            }

            int b = stack.top(); stack.pop();  // Dernier élément (opérande 2) = b, puis on le supprime avec pop ce qui remonte l avant dernier en au sommet (a)
            int a = stack.top(); stack.pop();  // Avant-dernier élément (opérande 1)
            int result;

            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else if (token == "/") 
            {
                if (b == 0) 
                    throw std::runtime_error("Error: Division by zero.");
                result = a / b;
            }

            stack.push(result);  // On empile le résultat
        } 
        else 
        {
            throw std::runtime_error("Error: Invalid token " + token);
        }
    }

    if (stack.size() != 1) 
    {
        throw std::runtime_error("Error: Too many operands.");
    }

    std::cout << stack.top() << std::endl;
}




