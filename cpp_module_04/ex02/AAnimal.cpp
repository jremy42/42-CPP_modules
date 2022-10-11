/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 16:34:15 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("Default") 
{
	std::cout << RED << "AAnimal Default constructor called" << RESET<< std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << RED << "AAnimal Copy constructor called" << RESET<< std::endl;
	*this=src;
}

AAnimal::AAnimal(std::string type)
{
	std::cout << RED << "AAnimal Name constructor called" << RESET<< std::endl;
	this->type = type;
}

AAnimal::~AAnimal( void )
{
		std::cout << RED << "AAnimal Destructor called" << RESET<< std::endl;
}

std::string AAnimal::getType( void ) const
{
	return (this->type);
}

AAnimal& AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->type= rhs.getType();
	return (*this);
}

void AAnimal::makeSound( void ) const
{
	std::cout << "* SILENCE *" << std::endl;
}