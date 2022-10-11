/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:40:44 by jremy             #+#    #+#             */
/*   Updated: 2022/04/28 18:55:15 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.class.hpp"

class PhoneBook{

	public:

		PhoneBook();
		~PhoneBook();
		void add_contact(void);
		void search_contact(void);
		void show_all_contact(void);

	private:
		Contact contacts[8];
		int 	nb_of_user;	
};

#endif
