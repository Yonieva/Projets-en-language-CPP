/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:10:35 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/15 21:10:35 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h> // Pour uintptr_t

struct Data;

class Serializer
{
    private :
        Serializer();
        ~Serializer();
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &other);

    public :
        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif