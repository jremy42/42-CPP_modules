/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:37 by jremy             #+#    #+#             */
/*   Updated: 2022/05/18 14:17:14 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << YELLOW << "Brain Default constructor called" << RESET<< std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain copy constructor is called" << std::endl;
	return;
}


Brain::~Brain()
{
		std::cout << YELLOW << "Brain Destructor called" << RESET<< std::endl;
}

Brain& Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdeas(i);	
	}
	return (*this);
}

void Brain::setIdeas(std::string ideas)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas;
	
}

std::string Brain::getIdeas(int index) const
{
	return (this->_ideas[index]);	
}

std::ostream &operator<<(std::ostream &out, Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		out << rhs.getIdeas(i) << std::endl;
	return (out);
}