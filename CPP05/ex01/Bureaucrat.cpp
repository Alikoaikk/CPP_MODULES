/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:29:06 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/12 19:06:25 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
	:	name("Default"),
		grade(150)
{}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
	: name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
	:	name(other.name),
		grade(other.grade)
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl ;
}

const std::string& Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

void Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << name << " couldn't sign " << f.getName()
			<< " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return os;
}
