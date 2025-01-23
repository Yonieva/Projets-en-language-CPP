/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:30:56 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/21 16:30:56 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main() 
{
    try 
    {
  
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        vec.push_back(40);
        vec.push_back(50);
        std::cout << "Vector Value : 10 20 30 40 50 "<< std::endl;
        std::cout << "Searching in vector value 30" << std::endl;
        std::cout << "Found: " << *easyfind(vec, 30) << std::endl << std::endl;


        std::list<int> lst;
        lst.push_back(1);
        lst.push_back(2);
        lst.push_back(3);
        lst.push_back(4);
        lst.push_back(5);
        std::cout << "List Value : 1 2 3 4 5 "<< std::endl;
        std::cout << "Searching in list value 4" << std::endl;
        std::cout << "Found: " << *easyfind(lst, 4) << std::endl << std::endl;

        std::cout << "Searching for a non-existing value : 100" << std::endl;
        easyfind(vec, 100);
    } 
    catch (const std::exception &e) 
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }
    return 0;
}









/*
1. Containers de séquence
Les containers de séquence maintiennent les éléments dans l'ordre dans lequel ils ont été insérés. Ils permettent l'accès aux éléments dans une séquence linéaire.

Container	Description
std::vector	Un tableau dynamique. Taille ajustable, rapide en accès indexé (aléatoire).
std::list	Une liste doublement chaînée. Optimisée pour les insertions et suppressions.
std::deque	Un double-ended queue, accès rapide aux extrémités.
std::array	Un tableau statique, de taille fixe.
std::forward_list	Une liste simplement chaînée, légère en mémoire.






2. Containers associatifs
Les containers associatifs stockent les éléments sous forme de paires clé-valeur. Ils sont organisés automatiquement pour permettre une recherche efficace (généralement avec des arbres équilibrés ou des tables de hachage).

Container	Description
std::set	Ensemble d'éléments uniques, triés automatiquement.
std::map	Association clé-valeur où les clés sont uniques et les éléments triés par clé.
std::multiset	Comme set, mais permet des éléments en doublon.
std::multimap	Comme map, mais permet des clés en doublon.
std::unordered_set	Ensemble non trié, mais avec recherche plus rapide grâce à une table de hachage.
std::unordered_map	Association clé-valeur non triée, plus rapide grâce à une table de hachage.





3. Containers adaptatifs
Ces containers sont basés sur d'autres containers et sont conçus pour répondre à des cas d'utilisation spécifiques.

Container	Description
std::stack	Une pile (LIFO : Last In, First Out), basée par défaut sur std::deque.
std::queue	Une file d'attente (FIFO : First In, First Out).
std::priority_queue	Une file à priorité, basée sur un tas binaire (binary heap).

*/
