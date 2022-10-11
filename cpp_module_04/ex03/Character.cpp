/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:27:40 by jremy             #+#    #+#             */
/*   Updated: 2022/05/20 14:53:53 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(Character const &src)
{
	DEBUG && std::cout << BLUE << "Character Copy constructor called" << RESET<< std::endl;
	*this=src;
}

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_Nmateria = 0;
	DEBUG && DEBUG && std::cout << BLUE << "Character Name constructor called" << RESET<< std::endl;
}

Character::~Character( void )
{
		DEBUG && std::cout << BLUE << "Character Destructor called" << RESET<< std::endl;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

AMateria* Character::getMateria(int idx) const
{
	return (this->_inventory[idx]);
}

int Character::getNmateria( void ) const
{
	return (this->_Nmateria);
}

Character& Character::operator=(Character const &rhs) 
{
	this->_name = rhs._name;
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			this->_inventory[i] = rhs.getMateria(i);
		}
		this->_Nmateria = rhs.getNmateria();
	}
	return (*this);
}

void Character::equip(AMateria* m)
{
	if (!m)
		DEBUG && std::cout << "m est null" << std::endl;
	for (int i = 0; i < 4 ; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " is equiped with " << this->_inventory[i]->getType() << std::endl;
			this->_Nmateria++;
			return;
		}
	}
}
void Character::unequip(int idx)
{
	if ( idx > 3  || idx <  0)
		return ;
	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_name << " is unequiped " << this->_inventory[idx]->getType() << std::endl;
		this->_inventory[idx] = NULL;
		this->_Nmateria--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}