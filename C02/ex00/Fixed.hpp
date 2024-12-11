/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:22:50 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/11 16:22:50 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    private:
        int _Value;
        static const int _Bits = 8;

    public:
        // Constructeur par défaut
        Fixed();

        // Constructeur de recopie
        Fixed(const Fixed &other);

        // Surcharge de l'opérateur d'affectation
        Fixed &operator=(const Fixed &other);

        ~Fixed();

        // Fonction membre pour obtenir la valeur brute
        int getRawBits(void) const;

        // Fonction membre pour définir la valeur brute
        void setRawBits(int const raw);
};

#endif
