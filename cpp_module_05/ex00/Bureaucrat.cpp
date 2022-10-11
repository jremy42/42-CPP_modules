/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/24 16:20:50 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	DEBUG && std::cout << GREEN << "Bureaucrat Default constructor called" << RESET<< std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	DEBUG && std::cout << GREEN << "Bureaucrat Name constructor called" << RESET<< std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
		DEBUG && std::cout << GREEN << "Bureaucrat Destructor called" << RESET<< std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		const std::string* namePtr = (std::string*)&this->_name;
		namePtr = &rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::string const Bureaucrat::getName ( void ) const
{
	return (this->_name);
}

unsigned int Bureaucrat::getGrad ( void ) const
{
	return (this->_grade);
}

void Bureaucrat::promote( void )
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::destitute ( void )
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low\n");
}

std::ostream &operator<<(std::ostream &ofs, Bureaucrat const &rhs)
{
	ofs << "[" << rhs.getName()
		<< "], " << "Bureaucrat grade ["
		<< rhs.getGrad() << "]" << std::endl;
	return (ofs);
}
