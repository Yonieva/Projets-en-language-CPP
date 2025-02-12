/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:03:32 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/31 17:03:32 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>


// Rend MutantStack itérable en exposant l'itérateur du conteneur sous-jacent (std::deque<T> par défaut).
template <typename T>
class MutantStack : public std::stack<T> 
{
    public:
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack& operator=(const MutantStack &other);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator; //  alias pour éviter d’écrire : typename std::deque<T>::iterator
        iterator begin();
        iterator end();
};

#include "MutantStack.tpp"

#endif




//std::stack<T> est basé sur un conteneur sous-jacent (container_type), qui est par défaut std::deque<T>.
//container_type est un alias interne du conteneur utilisé par std::stack.



//container_type::iterator est l’itérateur du conteneur sous-jacent (std::deque<T> par défaut).



//En C++, lorsqu'on accède à un type défini à l'intérieur d'un template, on doit préciser que c'est un type en ajoutant typename, 
//sinon le compilateur ne saura pas s'il s'agit d'un type ou d'une variable.
//Ici, std::stack<T>::container_type::iterator est un type, donc on ajoute typename devant.

