/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:12:31 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/12 05:31:09 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
    :   name("Default"),
        isSigned(false),
        gradeToSign(150),
        gradeToExecute(150)
{}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
	:   name(name),
        isSigned(false),
        gradeToSign(gradeToSign),
        gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}
AForm::AForm(const AForm& other)
	:   name(other.name),
        isSigned(other.isSigned),
        gradeToSign(other.gradeToSign),
        gradeToExecute(other.gradeToExecute)
{}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
        this->isSigned = other.isSigned ;
    return (*this);
}

AForm::~AForm()
{
    std::cout << "Destructor called" << std::endl ;
}

const std::string& AForm::getName() const
{
	return name;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

int AForm::getGradeToSign() const
{
	return gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > gradeToSign)
		throw AForm::GradeTooLowException();
	isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed";
}

void AForm::execute(const Bureaucrat& executor) const
{
	if (!isSigned)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > gradeToExecute)
		throw AForm::GradeTooLowException();
	executeAction();
}


std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << f.getName() << ", AForm grade to sign " << f.getGradeToSign()
		<< ", grade to execute " << f.getGradeToExecute()
		<< ", signed: " << (f.getIsSigned() ? "yes" : "no");
	return os;
}
