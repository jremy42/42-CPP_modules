/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/18 14:32:13 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void): AAnimal("Cat"), _brain(new Brain())
{
	std::cout << GREEN << "Cat Default constructor called" << RESET<< std::endl;
}

Cat::Cat(Cat const &src): AAnimal(src)
{
	std::cout << GREEN << "Cat Copy constructor called" << RESET<< std::endl;
}

Cat::~Cat( void )
{
		std::cout << GREEN << "Cat Destructor called" << RESET<< std::endl;
		delete this->_brain;
}

Cat& Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		*this->_brain = (*rhs.getBrain());
	}
	return (*this);
}

Brain* Cat::getBrain( void ) const
{
	return (this->_brain);
}


void Cat::makeSound( void ) const
{
	std::cout << "🐱MIAAAAAAAAAAAAAAOUUUUUUUUUUUUUUUUUUUUUUUUUU🐱" << std::endl;
}