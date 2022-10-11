/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:29:06 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 15:00:59 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), FragTrap(), ScavTrap()
{
	this->name = ClapTrap::name;
	this->name += "_clap_name";
	FragTrap::setAttackDamage();
	std::cout << CYAN << "DiamondTrap: Default constructor called" << RESET<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src)
{
	std::cout << CYAN << "Scav Trap: Copy constructor called" << RESET<< std::endl;
	*this=src;
}

DiamondTrap::DiamondTrap(std::string newName): ClapTrap(newName), FragTrap(), ScavTrap()
{
	this->name = ClapTrap::name;
	this->name += "_clap_name";
	FragTrap::setAttackDamage();
	std::cout << CYAN << "DiamondTrap: Named constructor called" << RESET<< std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
		std::cout << CYAN << "Diamond trap: Destructor called" << RESET<< std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &rhs)
{
	ClapTrap::operator=(rhs);	
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);	
}

void DiamondTrap::whoAmI( void )
{
	std::cout << ClapTrap::name << std::endl;
	std::cout << this->name << std::endl;
}