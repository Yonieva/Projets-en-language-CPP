/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:12:41 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/07 22:12:41 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void    Contact::setInfo(const std::string& attribute, const std::string& value)
{
    if (attribute == "firstname")
		firstname = value;
	else if (attribute == "lastname")
		lastname = value;
	else if (attribute == "nickname")
		nickname = value;
	else if (attribute == "phonenumber")
		phonenumber = value;
	else if (attribute == "secret")
		secret = value;
	else
		std::cout << "error setInfo";	
}

std::string    Contact::getInfo(const std::string& attribute)
{
    if (attribute == "firstname")
		return (firstname);
	else if (attribute == "lastname")
		return (lastname);
	else if (attribute == "nickname")
		return (nickname);
	else if (attribute == "phonenumber")
		return (phonenumber);
	else if (attribute == "secret")
		return (secret);
	else
		return ("error");
}