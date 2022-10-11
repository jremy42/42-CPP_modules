/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:52:14 by jremy             #+#    #+#             */
/*   Updated: 2022/05/11 12:04:11 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <stdio.h>
#include <math.h>

float area(Point a, Point b, Point point )
{
	
	return std::abs((a.getX() *(b.getY() - point.getY())) + b.getX() * (point.getY() - a.getY()) + point.getX() * (a.getY() - b.getY()) / 2.0 );
}

bool is_in_line(Point a, Point b, Point p)
{
	if (a.getX() == b.getX() == p.getX())
		return (false);
	if (a.getY() == b.getY() == p.getY())
		return (false);
	return (true);

}

bool bsp( Point const A, Point const B, Point const C, Point const P)
{
	float Ar;
	float A1;
	float A2;
	float A3;
	if (is_in_line(A,B, P) && is_in_line(B,C,P) && is_in_line(C,A,P))
	{
		Ar = area(A, B, C);
		A1 = area(P,B,C);
		A2 = area(P,A,C);	
		A3 = area(P,A,B);
	/*	
	std::cout<< "A="	<< "[" << Ar << "]" << std::endl;
	std::cout<< "A1="	<< "[" << A1 << "]" << std::endl;
	std::cout<< "A2="	<< "[" << A2 << "]" << std::endl;
	std::cout<< "A3="	<< "[" << A3 << "]" << std::endl;
	*/

		return (Ar == A1 + A2 + A3);
	}
	return (false);
}