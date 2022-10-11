/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:35:12 by jremy             #+#    #+#             */
/*   Updated: 2022/05/06 14:15:17 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon): name(name), weapon(newWeapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack( void ) const
{
	std::cout << this->name << ": attacks with their " << this->weapon.getType() << std::endl;	
}