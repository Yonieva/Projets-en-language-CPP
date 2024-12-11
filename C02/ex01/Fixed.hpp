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

        Fixed();

        Fixed(const int nb);

        Fixed(const float nb_float);

        Fixed(const Fixed &other);

        Fixed &operator=(const Fixed &other);

        ~Fixed();

        float toFloat(void) const;
        int toInt(void) const;

        friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
};

#endif
