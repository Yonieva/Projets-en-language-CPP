/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:14:51 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/05 19:03:42 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Constructor Form standard called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
    : name(other.name), isSigned(other.isSigned),
      gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
     std::cout << "Constructor Form by copy called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
     std::cout << "Constructor Form by assignment called" << std::endl;
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}


Form::~Form() 
{
     std::cout << "Desstructor Form called" << std::endl;
}

// Exception Messages
const char *Form::GradeTooHighException::what() const throw()
{
    return "Form: Grade is too high.";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form: Grade is too low.";
}

// Getters
const std::string &Form::getName() const 
{ 
    return this->name; 
}
bool Form::isItSigned() const 
{ 
    return this->isSigned; 
}
int Form::getGradeToSign() const 
{ 
    return this->gradeToSign; 
}
int Form::getGradeToExecute() const 
{ 
    return this->gradeToExecute; 
}


void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    this->isSigned = true;
}

void Form::execute(const Bureaucrat &bureaucrat) const
{
    if (bureaucrat.getGrade() > this->getGradeToExecute())
    {
        throw GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form " << form.getName()
        << ", signed: " << (form.isItSigned() ? "Yes" : "No")
        << ", grade required to sign: " << form.getGradeToSign()
        << ", grade required to execute: " << form.getGradeToExecute();
    return out;
}
