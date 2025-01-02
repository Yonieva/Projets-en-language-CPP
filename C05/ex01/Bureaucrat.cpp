/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:44:49 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/30 14:44:49 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
    std::cout << "Constructor Bureaucrat standard called" << std::endl;
    this->grade = grade;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    std::cout << "Constructor Bureaucrat by copie called" << std::endl;
    this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Constructor Bureaucrat by assignment called" << std::endl;
    if (this != &other)
        this->grade = other.grade;
    return *this;  
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Bureaucrat called" << std::endl;
}

const std::string &Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    std::cout << "Trying to Increment Grade" << std::endl;
    if (this->grade <= 1)
        throw GradeTooHighException();
    this->grade--;
    std::cout << "Incrementation of Grade SUCCES !!" << std::endl;
}

void Bureaucrat::decrementGrade()
{
    std::cout << "Trying to Decrement Grade" << std::endl;
    if (this->grade >= 150)
        throw GradeTooLowException();
    this->grade++;
    std::cout << "Decrementation of Grade SUCCES !!" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high! 1 to 150 only";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low! 1 to 150 only";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}
