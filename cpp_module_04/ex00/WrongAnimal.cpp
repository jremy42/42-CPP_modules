/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 16:56:20 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("Default") 
{
	std::cout << RED << "WrongAnimal Default constructor called" << RESET<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << RED << "WrongAnimal Copy constructor called" << RESET<< std::endl;
	*this=src;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << RED << "WrongAnimal Name constructor called" << RESET<< std::endl;
	this->type = type;
}

WrongAnimal::~WrongAnimal( void )
{
		std::cout << RED << "WrongAnimal Destructor called" << RESET<< std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->type= rhs.getType();
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "* SILENCE *" << std::endl;
}