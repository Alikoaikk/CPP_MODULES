/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:12:00 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/08 17:41:37 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
    :   name("Default"),
        isSigned(false),
        gradeToSign(150),
        gradeToExecute(150)
{}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
	:   name(name),
        isSigned(false),
        gradeToSign(gradeToSign),
        gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}
Form::Form(const Form& other)
	:   name(other.name),
        isSigned(other.isSigned),
        gradeToSign(other.gradeToSign),
        gradeToExecute(other.gradeToExecute)
{}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
        this->isSigned = other.isSigned ;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl ;
}

const std::string& Form::getName() const
{
	return name;
}

bool Form::getIsSigned() const
{
	return isSigned;
}

int Form::getGradeToSign() const
{
	return gradeToSign;
}

int Form::getGradeToExecute() const
{
	return gradeToExecute;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > gradeToSign)
		throw Form::GradeTooLowException();
	isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}


std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << f.getName() << ", form grade to sign " << f.getGradeToSign()
		<< ", grade to execute " << f.getGradeToExecute()
		<< ", signed: " << (f.getIsSigned() ? "yes" : "no");
	return os;
}
