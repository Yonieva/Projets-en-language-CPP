/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 20:08:32 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/05 20:08:32 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) 
{
    std::cout << "Constructor Shruberry called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
     std::cout << "Desstructor Shruberry called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!isItSigned())
    {
        throw AForm::GradeTooLowException();
    }
    if (executor.getGrade() > getGradeToExecute())
    {
        throw AForm::GradeTooLowException();
    }

    std::ofstream out((target + "_shrubbery").c_str());
    if (!out)
    {
        std::cerr << "Failed to create the file." << std::endl;
        return;
    }
    out << "       *       " << std::endl;
    out << "      ***      " << std::endl;
    out << "     *****     " << std::endl;
    out << "    *******    " << std::endl;
    out << "   *********   " << std::endl;
    out << "  ***********  " << std::endl;
    out << "       |       " << std::endl;
    out << "       |       " << std::endl;

}
