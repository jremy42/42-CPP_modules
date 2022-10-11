#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->maxHitPoints = 100;
	std::cout << BLUE << "Fragtrap : Default constructor called" << RESET<< std::endl;

}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{
	std::cout << BLUE << "Fragtrap : Copy constructor called" << RESET<< std::endl;
	*this=src;
}

FragTrap::FragTrap(std::string newName): ClapTrap(newName)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->maxHitPoints = 100;
	std::cout << BLUE << "Fragtrap : Name constructor called" << RESET<< std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << BLUE << "Fragtrap : Destructor called" << RESET<< std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);	
	return (*this);
}

void FragTrap::setAttackDamage()
{
	this->attackDamage = 30;
	return;
}

void FragTrap::highFivesGuys( void )
{
	std::string buffer;

	std::cout << "FragTrap:" << this->name << " give me a high five please !🖐  [y/n]"<< std::endl;
	std::getline(std::cin, buffer);
	if (std::cin.eof() == 1)
	{
		std::cout << "FragTrap : Don't use ctrl d"<< std::endl;
		return;
	}
	while (buffer != "y" && buffer != "n")
	{
		std::cout << "FragTrap:" << this->name << " give me a high five please !🖐  [y/n]"<< std::endl;
		std::getline(std::cin, buffer);
		if (std::cin.eof() == 1)
		{
			std::cout << "FragTrap : Don't use ctrl d"<< std::endl;
			return;
		}
	}
	if (buffer == "y")
		std::cout << "👏" << std::endl;
	else
		std::cout << "😥" << std::endl;
}