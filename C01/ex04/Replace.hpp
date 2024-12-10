/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 00:06:30 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/11 00:06:30 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <fstream>
#include <iostream>

class Replace 
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    
    private:
        std::string replaceOccurrences(const std::string& line);

    public:
        Replace(const std::string& filename, const std::string& s1, const std::string& s2);
        bool process();

        ~Replace();
};

#endif