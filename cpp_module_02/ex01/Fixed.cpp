#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(int const newValue)
{

	if (Fixed::verbose)
		std::cout << RED << "Int constructor called" << RESET << std::endl;
	this->value = (newValue << bits);
	return ;
}

Fixed::Fixed(float const newValue)
{

	if (Fixed::verbose)
		std::cout << RED << "Float constructor called" << RESET << std::endl;
	this->value = roundf((newValue * ( 1 << this->bits)));
	return ;
}

Fixed::~Fixed( void )
{
	if(Fixed::verbose)
		std::cout << RED << "destructor called" << RESET<< std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (this->value);
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if(Fixed::verbose)
		std::cout << RED << "Copy assignment operator called" << RESET<< std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return (*this);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value /( 1 << this->bits));
}

int Fixed::toInt( void ) const
{
		return (this->value >> this->bits);

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

std::ostream &operator<<(std::ostream &ofs, Fixed const &instance)
{
	ofs << instance.toFloat();
	return (ofs);
}
