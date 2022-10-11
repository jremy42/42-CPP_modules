/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:16:45 by jremy             #+#    #+#             */
/*   Updated: 2022/05/03 09:54:04 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& typeName)
{
	this->type = typeName;
};

Weapon::~Weapon()
{
};

const std::string& Weapon::getType(void) const
{
	return (this->type);
};

bool	Weapon::setType(const std::string& typeName)
{
	if (typeName.length() == 0)
	{
		std::cout << "Weapon can't be an empty string" << std::endl;
		return (false);
	}
	else
	{
		this->type = typeName;
		return (true);
	}
};

