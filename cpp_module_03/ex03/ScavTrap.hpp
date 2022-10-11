/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:50:26 by jremy             #+#    #+#             */
/*   Updated: 2022/05/12 18:08:23 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap ( void );
		ScavTrap (ScavTrap const &src);
		ScavTrap (std::string newName);
		~ScavTrap( void );
		ScavTrap& operator=(ScavTrap const &rhs);
		virtual void attack(const std::string& target);
		void guardGate( void );
};


#endif