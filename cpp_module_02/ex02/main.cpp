/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:38:10 by jremy             #+#    #+#             */
/*   Updated: 2022/05/11 12:22:33 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(int ac, char **av )
{	
	(void)av;
	if (ac > 1)
		Fixed::setVerbose(1);
	{
		std::cout << " --------BASIQUE TEST--------" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a  << std::endl;
		std::cout <<  b <<  std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << std::endl;
	std::cout << " --------COMPARAISON TEST--------" << std::endl;
	{
		Fixed a(3.25f);
		Fixed b(1.75f);
		std::cout << "Value of a is: " << a << std::endl;
		std::cout << "Value of b is: " << b << std::endl;
		std::cout << "a < b is " << (a < b) << std::endl;
		std::cout << "a > b is " << (a > b) << std::endl;
		std::cout << "a <= b is " << (a <= b) << std::endl;
		std::cout << "a >= b is " << (a >= b) << std::endl;
		std::cout << "a == b is " << (a == b) << std::endl;
		std::cout << "a != b is " << (a != b) << std::endl;
		std::cout << std::endl;
	}

		std::cout << " --------OPERATOR TEST--------" << std::endl;
	{
		Fixed a(3.25f);
		Fixed b(1.75f);
		std::cout << "Value of a is: " << a << std::endl;
		std::cout << "Value of b is: " << b << std::endl;
		std::cout << "b + a = " << (b + a) << std::endl;
		std::cout << "b - a = " << (b - a) << std::endl;
		std::cout << "b * a = " << (b * a) << std::endl;
		std::cout << "b / a = " << (b / a) << std::endl << std::endl;
		std::cout << std::endl;
	}

		std::cout << " --------MIN MAX TEST--------" << std::endl;
	{
		Fixed a(3.25f);
		Fixed b(1.75f);
		std::cout << "Value of a is: " << a << std::endl;
		std::cout << "Value of b is: " << b << std::endl;
		std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
		std::cout << "min(b, a) = " << Fixed::min(b, a) << std::endl;
		std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
		std::cout << "max(b, a) = " << Fixed::max(b, a) << std::endl << std::endl;
		std::cout << std::endl;
	}



	
	return 0;
};
