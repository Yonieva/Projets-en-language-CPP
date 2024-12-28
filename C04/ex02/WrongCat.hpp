/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatWrong.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:20:47 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 22:20:47 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :

        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);

        void  makeSound() const;
};

#endif