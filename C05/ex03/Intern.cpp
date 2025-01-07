/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:41:50 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/07 19:41:50 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


const std::string Intern::formNames[3] = 
{
    "robotomy request",
    "shrubbery creation",
    "presidential pardon"
};

const Intern::FormCreator Intern::formCreators[3] = 
{
    &Intern::createRobotomyRequestForm,
    &Intern::createShrubberyCreationForm,
    &Intern::createPresidentialPardonForm
};

Intern::Intern() 
{
     std::cout << "Constructor Intern(tableau) standard called" << std::endl;
}

Intern::Intern(const Intern& other) 
{
    (void)other;
}

Intern& Intern::operator=(const Intern& other) 
{
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::createRobotomyRequestForm(const std::string& target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubberyCreationForm(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createPresidentialPardonForm(const std::string& target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    for (int i = 0; i < 3; ++i) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return formCreators[i](target);
        }
    }
    std::cout << "Error: Form '" << formName << "' does not exist!" << std::endl;
    return NULL;
}