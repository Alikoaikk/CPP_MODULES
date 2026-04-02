/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:07:41 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/11 21:11:11 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();

        virtual void executeAction() const;
};

#endif