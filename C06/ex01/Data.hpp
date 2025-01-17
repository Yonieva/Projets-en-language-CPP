/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:02:18 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/17 21:02:18 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>


class Data
{
    private :
        std::string file;
        
    public :
        Data();
        Data(std::string arg);
        ~Data();
        Data (const Data &copy);
        Data &operator=(const Data &other);

        std::string getData(void) const;
        void setData(std::string str);
};


#endif