/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:40:07 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 17:31:50 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ClapTrap_HPP
#define ClapTrap_HPP
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"   

#include <iostream>

class ClapTrap
{

	public:
		ClapTrap ( void );
		ClapTrap (ClapTrap const &src);
		ClapTrap (std::string newName);
		~ClapTrap( void );
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getAttackDamage( void ) const;
		int getEnergyPoints( void ) const;
		int getHitPoints( void ) const;
		std::string getName( void ) const;
		ClapTrap& operator=(ClapTrap const &rhs);	
				
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
		int maxHitPoints;
};


#endif