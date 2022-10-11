/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 16:34:15 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Default") 
{
	std::cout << RED << "Animal Default constructor called" << RESET<< std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << RED << "Animal Copy constructor called" << RESET<< std::endl;
	*this=src;
}

Animal::Animal(std::string type)
{
	std::cout << RED << "Animal Name constructor called" << RESET<< std::endl;
	this->type = type;
}

Animal::~Animal( void )
{
		std::cout << RED << "Animal Destructor called" << RESET<< std::endl;
}

std::string Animal::getType( void ) const
{
	return (this->type);
}

Animal& Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->type= rhs.getType();
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout << "* SILENCE *" << std::endl;
}