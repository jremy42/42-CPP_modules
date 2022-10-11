/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:35:17 by jremy             #+#    #+#             */
/*   Updated: 2022/05/03 10:37:49 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include <iomanip>
# include <string>
# include "Weapon.hpp"


class HumanA{

	public:

		HumanA(std::string name, Weapon &newWeapon);
		~HumanA( void );
		
		void attack( void ) const;

	private:
		std::string name;
		Weapon &weapon;
};

#endif
