/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/18 14:32:13 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): AAnimal("Dog"), _brain(new Brain())
{
	std::cout << GREEN << "Dog Default constructor called" << RESET<< std::endl;
}

Dog::Dog(Dog const &src): AAnimal(src)
{
	std::cout << GREEN << "Dog Copy constructor called" << RESET<< std::endl;
}

Dog::~Dog( void )
{
		std::cout << GREEN << "Dog Destructor called" << RESET<< std::endl;
		delete this->_brain;
}

Dog& Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		*(this->_brain) = *(rhs.getBrain());
	}
	return (*this);
}

Brain* Dog::getBrain( void ) const
{
	return (this->_brain);
}

void Dog::makeSound( void ) const
{
	std::cout << "🐶WAOUF🐶" << std::endl;
}
