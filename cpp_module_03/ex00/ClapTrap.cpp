/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:09:27 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 11:10:15 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Default"),  hitPoints(10),energyPoints(10), attackDamage(0) , maxHitPoints(10)
{
	std::cout << RED << "ClapTrap Default constructor called" << RESET<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << RED << "ClapTrap Copy constructor called" << RESET<< std::endl;
	*this=src;
}

ClapTrap::ClapTrap(std::string newName): hitPoints(10),energyPoints(10), attackDamage(0) , maxHitPoints(10)
{
	std::cout << RED << "ClapTrap Name constructor called" << RESET<< std::endl;
	this->name = newName;
}

ClapTrap::~ClapTrap( void )
{
		std::cout << RED << "ClapTrap Destructor called" << RESET<< std::endl;
}

std::string ClapTrap::getName( void ) const
{
	return (this->name);
}

int ClapTrap::getHitPoints( void ) const
{
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints( void ) const
{
	return (this->energyPoints);
}

int ClapTrap::getAttackDamage( void ) const
{
	return (this->attackDamage);
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->hitPoints = rhs.getHitPoints();
		this->energyPoints = rhs.getEnergyPoints();
		this->attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}


void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		std::cout << "life point :" << "0 "<< std::endl;
		return ;
	}
	if (!this->energyPoints)
	{
		std::cout << "ClapTrap " << this->name << " Not enought energy point :" << this->energyPoints << std::endl;
		return;
		
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << "points of damage!" << std::endl;
	std::cout << "energy point :" << this->energyPoints << std::endl;

}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " take " << amount << " dammage " << std::endl;
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		std::cout << "life point :" << "0 "<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " dammage " << std::endl;
	std::cout << "life point :" << this->hitPoints << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		std::cout << "life point :" << "0 "<< std::endl;
		return ;
	}
	
	if (!this->energyPoints)
	{
		std::cout << "ClapTrap " << this->name << " Not enought energy point : " << this->energyPoints << std::endl;
		return;
		
	}
	if (this->hitPoints == this->maxHitPoints)
	{
			std::cout << "ScavTrap" << this->name << " Max hitPoint:" << this->hitPoints << std::endl;
		return;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	std::cout << "ClapTrap " << this->name << " heal himself of " << amount << " life point" << std::endl;
	std::cout << "energy point :" << this->energyPoints << std::endl;
	std::cout << "life point :" << this->hitPoints << std::endl;
}

