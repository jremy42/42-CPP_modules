#include "Ice.hpp"


Ice::Ice(void): AMateria("ice") 
{
	DEBUG && std::cout << BLUE << "Ice Default constructor called" << RESET<< std::endl;
}

Ice::Ice(Ice const &src)
{
	DEBUG && std::cout << BLUE << "Ice Copy constructor called" << RESET<< std::endl;
	*this=src;
}

Ice::~Ice( void )
{
		DEBUG && std::cout << BLUE << "Ice Destructor called" << RESET<< std::endl;
}

std::string Ice::getType( void ) const
{
	return (this->_type);
}

Ice& Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

Ice* Ice::clone( void ) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	//(void)target;
}