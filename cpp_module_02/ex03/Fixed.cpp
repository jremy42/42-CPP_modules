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
		std::cout << RED << "construct by copie called" << RESET << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const newValue)
{

	if (Fixed::verbose)
		std::cout << RED << "construct with int called" << RESET << std::endl;
	this->value = (newValue << bits);
	return ;
}

Fixed::Fixed(float const newValue)
{

	if (Fixed::verbose)
		std::cout << RED << "construct with float called" << RESET << std::endl;
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
	if(Fixed::verbose)
		std::cout << RED << "get Raw Bits" << RESET << std::endl;
	return (this->value);
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
	if(Fixed::verbose)
		std::cout << RED << "Surchage operator" << RESET<< std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return (*this);
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return(this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return(this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return(this->getRawBits() != rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return(this->getRawBits() == rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs)
{
	Fixed result;
	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	Fixed result;
	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	Fixed result(this->toFloat() * rhs.toFloat());
	return (result);
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	if (rhs.value == 0)
		return (*this);
	Fixed result(this->toFloat() / rhs.toFloat());
	return (result);
}

Fixed& Fixed::operator++( void )
{
	this->value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	this->value += 1;
	return (old);
}

Fixed& Fixed::operator--( void )
{
	this->value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	this->value -= 1;
	return (old);
}

Fixed& Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if(lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

const Fixed& Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if(lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed& Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if(lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

const Fixed& Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if(lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
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

//https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B
