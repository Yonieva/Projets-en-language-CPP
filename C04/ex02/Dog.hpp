/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:57:37 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 21:57:37 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private :
        Brain *brain;

    public :

        Dog();
        ~Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);

        virtual void  makeSound() const;
};

#endif