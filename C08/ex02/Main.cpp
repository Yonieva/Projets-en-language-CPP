/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:16:25 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/31 17:16:25 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main() 
{
    MutantStack<int> mstack;
    std::cout << "push(5) ajoute 5 à la pile." << std::endl;
    mstack.push(5);
    std::cout << "push(17) ajoute 17 au dessus de 5." << std::endl;
    mstack.push(17);
    std::cout << "Top element (retourne dernier element grace a top()): " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "retrait du commet de pile avec pop()" << std::endl;
    std::cout << "Size after pop: " << mstack.size() << std::endl << std::endl;



    std::cout << "Ajout successivement a la pile : 3, 5 , 737, 0 / (0) est le dernier element ajoute" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "begin() → Retourne un itérateur pointant vers le premier élément du conteneur sous-jacent." << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    std::cout << "end() → Retourne un itérateur pointant après le dernier élément." << std::endl;
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << "Stack elements:" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    return 0;
}
