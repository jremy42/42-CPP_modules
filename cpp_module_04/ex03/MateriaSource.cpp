/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:27:40 by jremy             #+#    #+#             */
/*   Updated: 2022/05/20 14:54:34 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) 
{
	for (int i = 0; i < 4; i++)
		this->_tab[i] = NULL;
	DEBUG && std::cout << CYAN << "MateriaSource Default constructor called" << RESET<< std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	DEBUG && std::cout << CYAN << "MateriaSource Copy constructor called" << RESET<< std::endl;
	*this=src;
}

MateriaSource::~MateriaSource( void )
{
		DEBUG && std::cout << CYAN << "MateriaSource Destructor called" << RESET<< std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			this->_tab[i] = rhs._tab[i];
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* newMateria)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->_tab[i] == NULL)
		{
			//DEBUG && std::cout << "learn =" << newMateria->getType() << std::endl;
			this->_tab[i] = newMateria;
				break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->_tab[i] && this->_tab[i]->getType() == type)
			return (this->_tab[i]->clone());
	}
	return 0;
}