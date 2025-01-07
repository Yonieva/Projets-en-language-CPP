/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:02:54 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/06 11:02:54 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
    : AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "Constructor Presidential called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
    std::cout << "Destructor Presidential called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!isItSigned())
    {
        throw AForm::GradeTooLowException();
    }
    if (executor.getGrade() > getGradeToExecute())
    {
        throw AForm::GradeTooLowException();
    }

    std::cout << target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
