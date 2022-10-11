/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:38:10 by jremy             #+#    #+#             */
/*   Updated: 2022/05/09 16:13:38 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(int ac, char **av )
{	
	(void)av;
	if (ac > 1)
		Fixed::setVerbose(1);
	std::cout << "TEST 1" << std::endl;
	{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	}
	
	std::cout << "TEST 2" << std::endl;
	{
	Fixed a;
	Fixed c; 
	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(42);
	std::cout << a.getRawBits() << std::endl;
	Fixed b(a);
	std::cout << b.getRawBits() << std::endl;

	b.setRawBits(84);
	std::cout << b.getRawBits() << std::endl;
	c = b;
	std::cout << c.getRawBits() << std::endl;

	}
	
	return 0;
};