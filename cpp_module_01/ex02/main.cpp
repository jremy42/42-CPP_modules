/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:40:55 by jremy             #+#    #+#             */
/*   Updated: 2022/05/02 17:58:13 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string stringINIT = "HI THIS IS BRAIN";

	std::string* stringPTR = &stringINIT;
	std::string& stringREF = stringINIT;
	
	std::cout << "The memory address of the string variable:" << std::endl;
	std::cout << &stringINIT << std::endl << std::endl;
	std::cout << "The memory address of the stringPTR" << std::endl;
	std::cout << stringPTR << std::endl << std::endl;
	std::cout << "The memory address of the stringREF" << std::endl;
	std::cout << &stringREF << std::endl << std::endl;

	std::cout << "The value of the string variable:" << std::endl;
	std::cout << stringINIT << std::endl << std::endl;
	std::cout << "The value of the stringPTR" << std::endl;
	std::cout << *stringPTR << std::endl << std::endl;
	std::cout << "The value of the stringREF" << std::endl;
	std::cout << stringREF << std::endl << std::endl;
		
	return(0);
}