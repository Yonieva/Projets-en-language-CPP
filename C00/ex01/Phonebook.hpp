/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:08:33 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/08 18:48:52 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Phonebook
{
    private:
        Contact _contacts[8];
        int _index;

    public:
        Phonebook();
        ~Phonebook();

        void    add(void);
        void    search(void);
        std::string truncate(const std::string& str);
        void	display();		  
};
#endif