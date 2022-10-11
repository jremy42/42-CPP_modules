/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:43:35 by jremy             #+#    #+#             */
/*   Updated: 2022/05/03 10:49:28 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <cstddef>

HumanB::HumanB(std::string name): name(name), weapon(0)
{
};

HumanB::~HumanB()
{
};

void HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
};

void HumanB::attack( void ) const
{
	if (this->weapon)
		std::cout << this->name << ": attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << ": can't attack because no weapon" << std::endl;

};