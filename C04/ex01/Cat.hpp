/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:12:56 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 22:12:56 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"




class Cat : public Animal
{
    private :
        Brain *brain;
    public :

        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);

        virtual void  makeSound() const;
};

#endif