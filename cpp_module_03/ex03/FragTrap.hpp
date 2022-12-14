#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap ( void );
		FragTrap (FragTrap const &src);
		FragTrap (std::string newName);
		~FragTrap( void );
		FragTrap& operator=(FragTrap const &rhs);
		void highFivesGuys(void);
		void setAttackDamage(void);
};


#endif