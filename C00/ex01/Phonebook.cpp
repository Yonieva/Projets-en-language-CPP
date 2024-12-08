/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:17:17 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/07 22:17:17 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    this->_index = 0;    
}

Phonebook::~Phonebook()
{
    std::cout << "Thx for the correction !" << std::endl;
}

void Phonebook::add()
{
    std::string	str;

	str = "";
	if (this->_index > 7)
		std::cout << "! Last contact engistered will be overwrite !" << std::endl;
	while(str == "")
	{
		std::cout << "Enter a first name : ";
		std::getline(std::cin, str);
		if (str != "")
			this->_contacts[this-> _index % 8].setInfo("firstname", str);	
	}
	str = "";

	while(str == "")
	{
		std::cout << "Enter a last name : ";
		std::getline(std::cin, str);
		if (str != "")
			this->_contacts[this-> _index % 8].setInfo("lastname", str);	
	}
	str = "";

	while(str == "")
	{
		std::cout << "Enter a nickname : ";
		std::getline(std::cin, str);
		if (str != "")
			this->_contacts[this-> _index % 8].setInfo("nickname", str);	
	}
	str = "";
	while(str == "")
	{
		std::cout << "Enter a phone number : ";
		std::getline(std::cin, str);
		if (str != "")
			this->_contacts[this-> _index % 8].setInfo("phonenumber", str);	
	}
	str = "";
	while(str == "")
	{
		std::cout << "Enter a darkest secret : ";
		std::getline(std::cin, str);
		if (str != "")
			this->_contacts[this-> _index % 8].setInfo("secret", str);	
	}
	this->_index++;
}

std::string Phonebook::truncate(const std::string& str) 
{
    if (str.length() > 10) 
	{
        return str.substr(0, 10 - 1) + "."; 
    }
    return str;
}

void	Phonebook::display()
{
	std::cout << "---------------------------------------------\n";
    std::cout << "|  Index   | First Name | Last Name  | Nickname  |\n";
    std::cout << "---------------------------------------------\n";

    for (int i = 0; i < 8; i++) 
	{
        if (!_contacts[i].getInfo("firstname").empty()) 
		{ 
            std::cout << "| " << std::setw(10) << std::right << i
                      << " | " << std::setw(10) << std::right << truncate(this->_contacts[i].getInfo("firstname"))
                      << " | " << std::setw(10) << std::right << truncate(this->_contacts[i].getInfo("lastname"))
                      << " | " << std::setw(10) << std::right << truncate(this->_contacts[i].getInfo("nickname"))
                      << " |\n";
        }
    }
    std::cout << "---------------------------------------------\n";
}

void    Phonebook::search(void)
{
	display();

	int	index = -1;
	std::string	str = "";

	while(str == "" || !std::isdigit(str[0]) || (index < 0 || index > 7))
	{	
		if (this->_contacts[0].getInfo("firstname").empty())
		{	
			std::cout << "PhoneBook is Empty ! return to Main Menu" << "\n\n\n";
			return;
		}
		std::cout << "Enter index number > ";
		std::getline(std::cin, str);
		index = atoi(str.c_str());
		if(str == "" || !std::isdigit(str[0]) || (index < 0 || index > 7))
			std::cout << "Please enter a valid index (0 to 7)" << std::endl;
		else if (this->_contacts[index].getInfo("firstname").empty())
		{
			std::cout << "No contact found at index " << index << ".\n";
			return;
		}

	}

	std::cout << "\nContact details:\n";
    std::cout << "First Name: " << this->_contacts[index].getInfo("firstname") << "\n";
    std::cout << "Last Name: " << this->_contacts[index].getInfo("lastname") << "\n";
    std::cout << "Nickname: " << this->_contacts[index].getInfo("nickname") << "\n";
    std::cout << "Phone Number: " << this->_contacts[index].getInfo("phonenumber") << "\n";
    std::cout << "Darkest Secret: " << this->_contacts[index].getInfo("secret") << "\n";	
}