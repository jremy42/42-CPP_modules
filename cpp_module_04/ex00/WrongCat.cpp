/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 16:39:24 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << GREEN << "WrongCat Default constructor called" << RESET<< std::endl;
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal(src)
{
	std::cout << GREEN << "WrongCat Copy constructor called" << RESET<< std::endl;
}

WrongCat::~WrongCat( void )
{
		std::cout << GREEN << "WrongCat Destructor called" << RESET<< std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "🐱MIAAAAAAAAAAAAAAOUUUUUUUUUUUUUUUUUUUUUUUUUU🐱" << std::endl;
}