/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:33:22 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/23 23:33:22 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private :
        std::string ideas[100];
    public :

        Brain();
        ~Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);

};

#endif