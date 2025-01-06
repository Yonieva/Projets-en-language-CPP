/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:38:07 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/06 10:38:07 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
    : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "Constructor Robot_Request called" << std::endl;
    srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
    std::cout << "Desstructor Robot_Request called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!isItSigned())
    {
        throw AForm::GradeTooLowException();
    }
    if (executor.getGrade() > getGradeToExecute())
    {
        throw AForm::GradeTooLowException();
    }

    std::cout << "Bzzzzzzzz Bzzzzzzzz..." << std::endl;
    if (rand() % 2)
    {
        std::cout << target << " has been robotomized successfully!" << std::endl;
    }
    else
    {
        std::cout << "Robotomy on " << target << " failed!" << std::endl;
    }
}
