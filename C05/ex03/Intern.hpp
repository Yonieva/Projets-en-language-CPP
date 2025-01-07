/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:36:26 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/07 19:36:26 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
 
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern 
{
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();

        AForm* makeForm(const std::string& formName, const std::string& target) const;

    private:
        typedef AForm* (*FormCreator)(const std::string& target);
        static AForm* createRobotomyRequestForm(const std::string& target);
        static AForm* createShrubberyCreationForm(const std::string& target);
        static AForm* createPresidentialPardonForm(const std::string& target);

        static const std::string formNames[3];
        static const FormCreator formCreators[3];
};

#endif