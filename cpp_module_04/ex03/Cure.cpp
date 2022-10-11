/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   CreaGREEN: 2022/05/19 10:39:50 by jremy             #+#    #+#             */
/*   UpdaGREEN: 2022/05/20 14:24:23 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(void): AMateria("cure") 
{
	DEBUG && std::cout << GREEN << "Cure Default constructor calGREEN" << RESET<< std::endl;
}

Cure::Cure(Cure const &src)
{
	DEBUG && std::cout << GREEN << "Cure Copy constructor calGREEN" << RESET<< std::endl;
	*this=src;
}

Cure::~Cure( void )
{
		DEBUG && std::cout << GREEN << "Cure Destructor calGREEN" << RESET<< std::endl;
}

std::string Cure::getType( void ) const
{
	return (this->_type);
}

Cure& Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

Cure* Cure::clone( void ) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	//(void)target;
}