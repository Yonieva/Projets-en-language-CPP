/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:09:36 by yonieva           #+#    #+#             */
/*   Updated: 2025/02/12 18:09:36 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>

class BitcoinExchange 
{
    private:
        std::map<std::string, float> exchangeRates;

    public:
        BitcoinExchange(const std::string& databaseFile);
        void loadDatabase(const std::string& filename);
        float getRate(const std::string& date) const;
};

#endif

