/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:23:04 by jremy             #+#    #+#             */
/*   Updated: 2022/05/25 18:56:45 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvScal.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try {
			std::string s(av[1]);
			ConvScal conv(s);
			conv.print();
		}
		catch (std::exception &e){std::cout << e.what();}

	}
	else 
		std::cout << "Conv usage : [int] or [char] or [float] or [double]" << std::endl;
	
}


/*

Child1 a;

Parent *b = &a;
Child1 *c = b;
child2 *d = static_cast<child2 *>(b); 
*/
// // baree
//! red
//* green
//? blue
//todo orange

//* dynamic cast uniquement dans le cas d'un downcast */
/* 
* try 
*{ child2 & d = dynamic_cast<Child2 &>(*b)}
* catch ( std::bad_cast &bc) { std::cout << "conversion is not OK" << bc.what() << std::endl; }
! dynamic cast uniquement avec une class polymorphique 
 */

/*
? reinterpret cast
* Consequence de notre responsabilite
* compil mais execution 
* ex : retypage 

*/

/*
? const cast
* permet le qualifieur de type
* const_cast<int *>(b)
* mauvais signe

*/

/*
? typecast
* operator int() {return static_cast<int>(this->_v)}
* const_cast<int *>(b)
* mauvais signe

*/