/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:14:18 by jremy             #+#    #+#             */
/*   Updated: 2022/05/02 15:13:16 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <limits.h>

int main (){
	PhoneBook phonebook;
	int end;
	std::string line;

	end = 1;
	while(end)
	{
		std::cout << "miniphonebook~>";
		std::getline(std::cin, line);
		if (std::cin.eof() == 1)
		{
			std::cout << std::endl;
			break;
		}
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
		{
			phonebook.show_all_contact();
			phonebook.search_contact();
		}
		else if (line == "EXIT")
		{
			end = 0;
			std::cout << "so long and thank you for the fish" << std::endl;
		}		
	}
	return (0);
};