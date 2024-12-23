/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 00:08:39 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/24 00:08:39 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // Should not create a memory leak
    delete i;

    std::cout << "---- Array Test ----" << std::endl;

    Animal* animals[4];
    for (int i = 0; i < 2; i++) 
    {
        animals[i] = new Dog();
    }
    for (int i = 2; i < 4; i++) 
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i < 4; i++) 
    {
        delete animals[i];
    }

    return 0;
}

