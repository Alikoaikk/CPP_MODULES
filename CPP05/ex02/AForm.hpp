/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:17:39 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/09 16:16:37 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP


#include <iostream>
#include <exception>

class Bureaucrat;

class AForm 
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

        class FormNotSignedException : public std::exception
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
        AForm();
        AForm(const std::string& name, int gradeToSign, int gradeToExecute);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();

        const std::string&  getName() const ;
        bool                getIsSigned() const ;
        int                 getGradeToSign() const ;
        int                 getGradeToExecute() const ;

        void beSigned (const Bureaucrat& b);
        void execute(const Bureaucrat& executor) const;
        virtual void executeAction() const = 0;
        
};

std::ostream& operator<<(std::ostream& os, const AForm& f);



#endif