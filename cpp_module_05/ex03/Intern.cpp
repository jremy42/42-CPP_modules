/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:27:14 by jremy             #+#    #+#             */
/*   Updated: 2022/05/24 15:59:33 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string>

std::string Intern::_request[3] = {
	"presidential pardon",
	"robotomy request",
	"shrubbery creation",
};

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
	*this=src;
}
Intern::~Intern()
{
}


Intern& Intern::operator=(Intern const &rhs)
{
	(void)rhs;	
	return (*this);
}

Form* Intern::makeForm(std::string typeForm, std::string target)
{
	Form* (*f[3])(std::string const target) = {
	PresidentialPardonForm::clone,
	RobotomyRequestForm::clone,
	ShrubberyCreationForm::clone,
	};

	for (int i = 0; i < 3; i++)
	{
		if (typeForm == this->_request[i])
		{
			std::cout << "Intern creates " << this->_request[i] << std::endl;
			return (f[i](target));
		}
	}
	throw Intern::uknowType();
	return (NULL);
}

const char * Intern::uknowType::what() const throw()
{
	return ("😰Sorry master... I don't know the form, please don't hit me ... no no Aarrrrg\n");
}
