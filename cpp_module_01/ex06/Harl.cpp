/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:50:03 by jremy             #+#    #+#             */
/*   Updated: 2022/05/06 11:17:01 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

std::string Harl::cmp[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
};

Harl::Harl()
{
};

Harl::~Harl()
{
};

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if(level == this->cmp[i])
			return (Harl::filter(i));
	}
	return (this->defaultMessage());
}

void Harl::filter(int level)
{
	switch (level)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			this->defaultMessage();
	}
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ] : "<< std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void Harl::info( void )
{
	std::cout << "[INFO] :" << std::endl << "I cannot believe adding extra bacon costs more money. You didn t put enough bacon in my burger! If you did, I wouldn t be asking for more!"
	<< std::endl;
}
void Harl::warning( void )
{
	std::cout << "[WARNING] :" << std::endl << " I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void Harl::error( void )
{
	std::cout << "[ERROR] :" << std::endl << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void Harl::defaultMessage( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]"
	<< std::endl;
}