/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:14:51 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/05 19:03:42 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Constructor AForm standard called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
    : name(other.name), isSigned(other.isSigned),
      gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
     std::cout << "Constructor AForm by copy called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
     std::cout << "Constructor AForm by assignment called" << std::endl;
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}


AForm::~AForm() 
{
     std::cout << "Desstructor AForm called" << std::endl;
}

// Exception Messages
const char *AForm::GradeTooHighException::what() const throw()
{
    return "AForm: Grade is too high.";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "AForm: Grade is too low.";
}

// Getters
const std::string &AForm::getName() const 
{ 
    return this->name; 
}
bool AForm::isItSigned() const 
{ 
    return this->isSigned; 
}
int AForm::getGradeToSign() const 
{ 
    return this->gradeToSign; 
}
int AForm::getGradeToExecute() const 
{ 
    return this->gradeToExecute; 
}


void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    this->isSigned = true;
}

void AForm::execute(const Bureaucrat &bureaucrat) const
{
    if (bureaucrat.getGrade() > this->getGradeToExecute())
    {
        throw GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm)
{
    out << "AForm " << AForm.getName()
        << ", signed: " << (AForm.isItSigned() ? "Yes" : "No")
        << ", grade required to sign: " << AForm.getGradeToSign()
        << ", grade required to execute: " << AForm.getGradeToExecute();
    return out;
}
