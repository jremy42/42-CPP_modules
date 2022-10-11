/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:40:29 by jremy             #+#    #+#             */
/*   Updated: 2022/05/03 16:00:10 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

std::string Contact::fields_name[5] = {
	"First Name",
	"Last Name",
	"Nick Name",
	"Phone Number",
	"Darkest_secret"
};

Contact::Contact()
{
	for (int i = 0; i < 5; i++)
		this->fields[i] = std::string();
};

Contact::~Contact()
{
};

void Contact::set_contact(int index)
{
	this->index = index;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "# " << Contact::fields_name[i] << ":";
		std::getline(std::cin, this->fields[i]);
		if (std::cin.eof() == 1)
		{
			std::cout << "Don't use ctrl d, i must exit ****"<< std::endl;
			return;
		}
		if(this->fields[i].length() == 0)
		{
			std::cout << "field can't is empty, retry" << std::endl;
			i--;		
		}
	}
	std::cout << " Contact added !" << std::endl;
};

void Contact::display_all()
{
	std::cout << "|";
	std::cout << std::setw(10) << this->index << "|";
		for (int i = 0; i < 3; i++)
		{
			if(this->fields[i].length() > 10)
				std::cout << this->fields[i].substr(0, 9) << "." << "|";
			else
				std::cout << std::setw(10) << this->fields[i] << "|";
		}
		std::cout << std::endl;
};

void Contact::display_just_me()
{
		for (int i = 0; i < 5; i++)
				std::cout << this->fields_name[i] << ": " << this->fields[i] << std::endl;
};