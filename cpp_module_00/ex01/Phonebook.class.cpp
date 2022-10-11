/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:40:40 by jremy             #+#    #+#             */
/*   Updated: 2022/05/03 16:01:08 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->nb_of_user = 0;
};

PhoneBook::~PhoneBook(void)
{
};

void PhoneBook::add_contact(void)
{
	this->nb_of_user++;
	if (this->nb_of_user <= 8)
		this->contacts[this->nb_of_user - 1].set_contact(this->nb_of_user);
	else
		this->contacts[this->nb_of_user%8 - 1].set_contact(this->nb_of_user%8);
};

void PhoneBook::search_contact(void)
{
	int index;
	int end;
	
	end = 1;
	if (this->nb_of_user == 0)
		std::cout << "Add a contact before searching !" << std::endl;
	else
	{
		std::cout << "> Please enter an index for search contact" << std::endl;
		while(end)
		{
			std::cout << ">";
			std::cin >> index;
			if (std::cin.eof() == 1)
			{
			std::cout << std::endl;
			std::cin.clear();
    		std::cin.ignore(1, '\n');
			break;
			}
			if (index < 1 || (index > this->nb_of_user || index > 8))
				std::cout << " Invalid Index" << std::endl;
			else
			{
				this->contacts[index - 1].display_just_me();
				end = 0;
			}
			std::cin.clear();
    		std::cin.ignore(2048, '\n');
	}
	}

};

void PhoneBook::show_all_contact(void)
{
	std::cout<< "|-------------------------------------------|" << std::endl;
	std::cout<< "|     index|First Name| Last Name| Nick Name|" << std::endl;
	std::cout<< "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->nb_of_user &&  i < 8 ; i++)
		this->contacts[i].display_all();
	std::cout<< "|-------------------------------------------|" << std::endl;
};

/*
PhoneBook::PhoneBook( float const f ) : pi(f) {

	std::cout << " Constructor called " << std::endl;
	std::cout << "pi = " << this->pi << std::endl;
	_nbInst++;
	return ;
}


PhoneBook::~PhoneBook( void ){

	std::cout << " Destroy called " << std::endl;
	return ;
}
void PhoneBook::bar(void) const {
	std::cout << "add member" << std::endl;
	return;
}

int PhoneBook::getNbInst(void) {
	return PhoneBook::_nbInst;
}

int PhoneBook::_nbInst = 0;
*/