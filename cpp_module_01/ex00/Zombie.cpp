/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:05:01 by jremy             #+#    #+#             */
/*   Updated: 2022/05/02 12:57:03 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName)
{
	this->name = zombieName;
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
