/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:09:56 by jremy             #+#    #+#             */
/*   Updated: 2022/05/11 11:00:53 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void): x(0), y(0)
{
}

Point::Point(Point const &src)
{
	*this = src;
	return ;
}

Point::Point(float const newX, float const newY): x(Fixed(newX)), y(Fixed(newY))
{
}


Point::~Point( void )
{
}

Point& Point::operator=(Point const &rhs)
{
	Fixed* x = (Fixed*)&this->x;
	Fixed* y = (Fixed*)&this->y;

	if (&rhs == this) 
		return *this;
	*x = rhs.x;
	*y = rhs.y;
	return (*this);
}


float Point::getX(void) const
{
	return (this->x.toFloat());
}


float Point::getY(void) const
{
	return (this->y.toFloat());
};