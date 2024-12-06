/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:08:33 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/06 15:13:08 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>
#include <iostream>

class Phonebook
{
    private:
        Contact contacts[8];
        int count;

    public:
        Phonebook();
        ~Phonebook();

        void    add(void);
        void    search(void);
    
};
#endif