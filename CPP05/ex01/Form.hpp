/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:17:39 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/12 19:13:14 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP


#include <iostream>
#include <exception>

class Bureaucrat;

class Form 
{
    public : 
        class GradeTooHighException : public std::exception
        {
            public : 
                virtual const char* what() const throw() ;
        };

        class GradeTooLowException : public std::exception
        {
            public : 
                virtual const char* what() const throw();  
        };

    private : 
        const std::string   name ;
        bool                isSigned ;
        const int           gradeToSign ; 
        const int           gradeToExecute ;

    public :
        Form();
        Form(const std::string& name, int gradeToSign, int gradeToExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        const std::string&  getName() const ;
        bool                getIsSigned() const ;
        int                 getGradeToSign() const ;
        int                 getGradeToExecute() const ;

        void beSigned (const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const Form& f);



#endif