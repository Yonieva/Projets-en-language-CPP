/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:40:54 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 21:40:54 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected :

        std::string type;

    public :

        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &other);
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
};



#endif