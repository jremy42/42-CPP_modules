#include "Fixed.hpp"

int const Fixed::bits = 8;
bool	Fixed::verbose = false;

Fixed::Fixed(void): value(0)
{
	if (Fixed::verbose)
		std::cout << RED <<"Default construct called" << RESET << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{

	if (Fixed::verbose)
		std::cout << RED << "Copy constructor called" << RESET << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void )
{
	if(Fixed::verbose)
		std::cout << RED << "Destructor called" << RESET<< std::endl;
}

int Fixed::getRawBits( void ) const
{
	if(Fixed::verbose)
		std::cout << RED << "getRawBits member function called" << RESET << std::endl;
	return (this->value);
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if(Fixed::verbose)
		std::cout << RED << "Copy assignment operator called " << RESET<< std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	if(Fixed::verbose)
		std::cout << RED << "Set Raw" << RESET << std::endl;
	this->value = raw;
}

void Fixed::setVerbose(bool value)
{
	Fixed::verbose = value;
}