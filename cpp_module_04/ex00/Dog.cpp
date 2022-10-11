/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 16:38:42 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << GREEN << "Dog Default constructor called" << RESET<< std::endl;
}

Dog::Dog(Dog const &src): Animal(src)
{
	std::cout << GREEN << "Dog Copy constructor called" << RESET<< std::endl;
}

Dog::~Dog( void )
{
		std::cout << GREEN << "Dog Destructor called" << RESET<< std::endl;
}

Dog& Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "🐶WAOUF🐶" << std::endl;
}