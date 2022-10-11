/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:50:44 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 17:31:07 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->maxHitPoints = 100;
	std::cout << RED << "Default constructor called" << RESET<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{
	std::cout << RED << "Copy constructor called" << RESET<< std::endl;
	*this=src;
}

ScavTrap::ScavTrap(std::string newName): ClapTrap(newName)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->maxHitPoints = 100;
	std::cout << RED << "Name constructor called" << RESET<< std::endl;
}

ScavTrap::~ScavTrap( void )
{
		std::cout << RED << "Destructor called" << RESET<< std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);	
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
		std::cout << "life point :" << "0 "<< std::endl;
		return ;
	}
	if (!this->energyPoints)
	{
		std::cout << "ScavTrap " << this->name << " Not enought energy point :" << this->energyPoints << std::endl;
		return;
		
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << "points of damage!" << std::endl;
	std::cout << "energy point :" << this->energyPoints << std::endl;

}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap :" << this->name << " gate keeper mode"<< std::endl;
}