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



int main() 
{
    AAnimal animal; // ERREUR : Impossible d'instancier une classe abstraite

    AAnimal *dog = new Dog();
    AAnimal *cat = new Cat();

    dog->makeSound(); // Woof woof!
    cat->makeSound(); // Meow meow!

    delete dog;
    delete cat;

    return 0;
}

