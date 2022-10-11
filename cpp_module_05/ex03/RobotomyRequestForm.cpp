/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationRobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:37:11 by jremy             #+#    #+#             */
/*   Updated: 2022/05/23 16:37:34 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), _target("default")
{
	this->_type = "RobotomyRequestForm";
	DEBUG && std::cout << GREEN << "RobotomyRequestForm Default constructor called" << RESET<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	this->_type = "RobotomyRequestForm";
	DEBUG && std::cout << GREEN << "RobotomyRequestForm Name constructor called" << RESET<< std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
		DEBUG && std::cout << GREEN << "RobotomyRequestForm Destructor called" << RESET<< std::endl;
}

std::string const &RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		const std::string* namePtr = (std::string*)&this->_target;
		namePtr = &rhs._target;
	}
	return (*this);
}

Form *RobotomyRequestForm::clone(std::string const target)
{
	return (new RobotomyRequestForm(target));
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->checkExe(executor);
	std::cout << "Z Z Z Z Z Z Z Z Z Z Z , RRRRRRRR" << std::endl;

	if (std::rand()%2)
		std::cout << this->_target << " has been robotized" << std::endl;
	else
		std::cout << "Robotized has failled " << std::endl;

}
