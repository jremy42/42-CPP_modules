/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationPresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:37:11 by jremy             #+#    #+#             */
/*   Updated: 2022/05/23 16:37:34 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), _target("default")
{
	this->_type = "PresidentialPardonForm";
	DEBUG && std::cout << GREEN << "PresidentialPardonForm Default constructor called" << RESET<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	this->_type = "PresidentialPardonForm";
	DEBUG && std::cout << GREEN << "PresidentialPardonForm Name constructor called" << RESET<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
		DEBUG && std::cout << GREEN << "PresidentialPardonForm Destructor called" << RESET<< std::endl;
}

std::string const &PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		const std::string* namePtr = (std::string*)&this->_target;
		namePtr = &rhs._target;
	}
	return (*this);
}

Form *PresidentialPardonForm::clone(std::string const target)
{
	return (new PresidentialPardonForm(target));
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->checkExe(executor);
	std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}
