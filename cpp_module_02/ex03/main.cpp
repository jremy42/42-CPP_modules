/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:38:10 by jremy             #+#    #+#             */
/*   Updated: 2022/05/11 12:08:59 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const A, Point const B, Point const C, Point const P);

int	main(void) {
	
	Point a(0, 0);
	Point b(0, 10);
	Point c(8, 7);

	Point* tests = new Point[10];

	tests[0] = Point(0, 0);
	tests[1] = Point(5, 6);
	tests[2] = Point(6, 5);
	tests[3] = Point(9, 11);
	tests[4] = Point(0, 1);
	tests[5] = Point(0.001, 1);
	tests[6] = Point(2, 5);
	tests[7] = Point(8, 1);
	tests[7] = Point(2.25, 4);
	tests[8] = Point(-2, 7);
	tests[9] = Point(1.75, 3.75);

	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Point x = " << tests[i].getX() << ", y = " << tests[i].getY() << " "; 
		if (true == bsp(a, b, c, tests[i]))
			std::cout << "is in" << std::endl;
		else
			std::cout << "is out" << std::endl;		
	}
	
	delete [] tests;

	return 0;
}