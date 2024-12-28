/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:17:01 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/19 22:17:01 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongAnimal_HPP
# define WRONGWrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected :

        std::string type;

    public :

        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
};



#endif