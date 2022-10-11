/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:42:57 by jremy             #+#    #+#             */
/*   Updated: 2022/05/20 14:53:41 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
AMateria* AMateria::_all[2048];
int AMateria::index = 0;

AMateria::AMateria(void): _type("Default") 
{
	if (AMateria::index < 2048)
	{
		AMateria::_all[AMateria::index] = this;
		AMateria::index++;
	}
	DEBUG && DEBUG && std::cout << RED << "AMateria Default constructor called" << RESET<< std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	DEBUG && std::cout << RED << "AMateria Copy constructor called" << RESET<< std::endl;
	if (AMateria::index < 2048)
	{
		AMateria::_all[AMateria::index] = this;
		AMateria::index++;
	}
	*this=src;
	
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	//DEBUG && std::cout << "ADD type: " << this << std::endl;
	if (AMateria::index < 2048)
	{
		AMateria::_all[AMateria::index] = this;
		AMateria::index++;
	}
	DEBUG && std::cout << RED << "AMateria Name constructor called" << RESET<< std::endl;
}

AMateria::~AMateria( void )
{	
	DEBUG && std::cout << RED << "AMateria Destructor called" << RESET<< std::endl;
}

std::string const & AMateria::getType( void ) const
{
	return (this->_type);
}

AMateria& AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->_type= rhs.getType();
	return (*this);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}

void AMateria::cleanAll( void )
{
	for (int i = 0; i < 2048; i++)
	{
		if (AMateria::_all[i])
		{
			//DEBUG && std::cout << "delete " << AMateria::_all[i] << AMateria::_all[i]->getType() << std::endl;
			delete _all[i];
			_all[i] = NULL;
		}
	}
}