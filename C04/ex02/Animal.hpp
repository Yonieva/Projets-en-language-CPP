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

class AAnimal
{
    protected :

        std::string type;

    public :

        AAnimal();
        AAnimal(const AAnimal &copy);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();

        virtual void makeSound() const = 0;
        std::string getType() const;
};



#endif