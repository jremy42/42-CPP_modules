/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:40:33 by jremy             #+#    #+#             */
/*   Updated: 2022/05/02 15:15:05 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>
# include <iomanip>
# include <string>

class Contact{

	public:

		Contact();
		~Contact();
		void set_contact(int index);
		void display_all(void);
		void display_just_me(void);
	private:

	std::string fields[5];
	static std::string fields_name[5];

	 int index;
	 enum Field {
		 first_name,
		 last_name,
		 nick_name,
		 phone_number,
		 darkest_secret
	 };
};
#endif
