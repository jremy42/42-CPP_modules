/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:40:07 by jremy             #+#    #+#             */
/*   Updated: 2022/05/10 12:24:01 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP
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

class Fixed
{

	public:
		Fixed ( void );
		Fixed (Fixed const &src);
		Fixed (int const newValue);
		Fixed (float const newValue);
		~Fixed( void );
		int getRawBits( void ) const;
		void setRawBits(int const raw);
		Fixed& operator=(Fixed const &rhs);
		bool operator<(Fixed const &rhs) const;
		bool operator>(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;

		Fixed operator+(Fixed const &rhs);
		Fixed operator-(Fixed const &rhs);
		Fixed operator*(Fixed const &rhs);
		Fixed operator/(Fixed const &rhs);
		Fixed& operator++( void );
		Fixed operator++ ( int );
		Fixed& operator--( void );
		Fixed operator-- ( int );
		static Fixed &min(Fixed &lhs, Fixed &rhs);
		static const Fixed &min(Fixed const &lhs, Fixed const &rhs);
		static Fixed &max(Fixed &lhs, Fixed &rhs);
		static const Fixed &max(Fixed const &lhs, Fixed const &rhs);
		static void setVerbose(bool value );
		float toFloat( void ) const;
		int toInt( void ) const;
				
	private:
		int value;
		static int const bits;
		static bool verbose;
};

std::ostream &operator<<(std::ostream & fs, Fixed const &instance);

#endif