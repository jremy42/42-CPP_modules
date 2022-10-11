/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:50:26 by jremy             #+#    #+#             */
/*   Updated: 2022/05/12 18:31:37 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap ( void );
		DiamondTrap (DiamondTrap const &src);
		DiamondTrap (std::string newName);
		~DiamondTrap( void );
		DiamondTrap& operator=(DiamondTrap const &rhs);
		virtual void attack(const std::string& target);
		void whoAmI( void );
	private :
		std::string name;
};


#endif