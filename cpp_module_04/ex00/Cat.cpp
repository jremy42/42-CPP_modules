/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 16:39:24 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void): Animal("Cat")
{
	std::cout << GREEN << "Cat Default constructor called" << RESET<< std::endl;
}

Cat::Cat(Cat const &src): Animal(src)
{
	std::cout << GREEN << "Cat Copy constructor called" << RESET<< std::endl;
}

Cat::~Cat( void )
{
		std::cout << GREEN << "Cat Destructor called" << RESET<< std::endl;
}

Cat& Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "🐱MIAAAAAAAAAAAAAAOUUUUUUUUUUUUUUUUUUUUUUUUUU🐱" << std::endl;
}