/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:05:01 by jremy             #+#    #+#             */
/*   Updated: 2022/05/02 16:20:06 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
};

Zombie::~Zombie()
{
		std::cout << this->name << ": " << "Arrrrgggg" << std::endl;

};

void Zombie::annouce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
};

std::string Zombie::getName( void )
{
	return (this->name);
}

void	Zombie::setName(std::string zombieName)
{
	this->name = zombieName;
};
