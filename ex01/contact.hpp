/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:17:38 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/06 15:12:38 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string secret;

public:
    contact(/* args */);
    ~contact();

    void    setContact(const std::string& firtsname, const std::string& lastname,
                	   const std::string& nickname, const std::string& phonenumber,
					   const std::string& secret);
	void	displayShort(int index) const;
	void	displayFull() const;	
};
#endif