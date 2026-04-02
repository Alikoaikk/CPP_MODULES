/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 05:31:45 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/12 05:31:47 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern
{
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();

        AForm* makeForm(const std::string& formName, const std::string& target);

    private:
        static AForm* makeShrubbery(const std::string& target);
        static AForm* makeRobotomy(const std::string& target);
        static AForm* makePresidential(const std::string& target);
};

#endif
