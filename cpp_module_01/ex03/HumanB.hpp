/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:42:38 by jremy             #+#    #+#             */
/*   Updated: 2022/05/03 10:49:45 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include <iostream>
# include <iomanip>
# include <string>
# include "Weapon.hpp"


class HumanB{

	public:

		HumanB(std::string name);
		~HumanB();
		void attack( void ) const;
		void setWeapon(Weapon& weapon);

	private:
		std::string name;
		Weapon *weapon;
};

#endif