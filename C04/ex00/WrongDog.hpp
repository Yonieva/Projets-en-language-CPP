/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:19:51 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 22:19:51 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public :

        WrongDog();
        ~WrongDog();
        WrongDog(const WrongDog &other);
        WrongDog &operator=(const WrongDog &other);

        void  makeSound() const;
};

#endif