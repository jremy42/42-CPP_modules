/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:03:15 by jremy             #+#    #+#             */
/*   Updated: 2022/05/24 16:26:52 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(0), _SignedGrade(150), _ExeGrade(150)
{
	DEBUG && std::cout << GREEN << "Form Default constructor called" << RESET<< std::endl;
}

Form::Form(std::string const &name, unsigned int SignedGrade, unsigned int  ExeGrade) : _name(name), _signed(0), _SignedGrade(SignedGrade), _ExeGrade(ExeGrade)
{
	if (this->_SignedGrade < 1 || this->_ExeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_SignedGrade > 150 || this->_ExeGrade > 150)
		throw Form::GradeTooLowException();
	DEBUG && std::cout << GREEN << "Form Name constructor called" << RESET<< std::endl;
}

Form::~Form( void )
{
		DEBUG && std::cout << GREEN << "Form Destructor called" << RESET<< std::endl;
}

Form& Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		const std::string* namePtr = (std::string*)&this->_name;
		namePtr = &rhs._name;
		this->_signed = rhs._signed;
		this->_SignedGrade = rhs._SignedGrade;
		this->_ExeGrade = rhs._ExeGrade;
	}
	return (*this);
}

std::string const &Form::getName ( void ) const
{
	return (this->_name);
}

bool Form::getSigned ( void ) const
{
	return (this->_signed);
}

unsigned int Form::getSignedGrade ( void ) const
{
	return (this->_SignedGrade);
}

unsigned int Form::getExeGrade ( void ) const
{
	return (this->_ExeGrade);
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High\n");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low\n");
}

void Form::beSigned(Bureaucrat const &Bureaucrate)
{
	if (Bureaucrate.getGrad() > this->_SignedGrade)
		throw Form::GradeTooLowException();
	this->_signed = 1;
}

std::ostream &operator<<(std::ostream &ofs, Form const &rhs)
{
	ofs << "[" << rhs.getName()<< "], " 
		<< "Signed ["
		<< rhs.getSigned() << "] "
		<< "Signed grade ["
		<< rhs.getSignedGrade() << "] "
		<< "Exe grade ["
		<< rhs.getExeGrade() << "] "
		<<std::endl;
	return (ofs);
}
