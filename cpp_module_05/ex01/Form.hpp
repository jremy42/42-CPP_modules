/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:03:50 by jremy             #+#    #+#             */
/*   Updated: 2022/05/23 15:25:26 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
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
#define DEBUG 0
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :
		Form( void );
		Form(std::string const &name, unsigned int SignedGrade, unsigned int ExeGrade);
		Form (Form const &src);	
		Form& operator=(Form const &rhs);
		~Form( void );
		std::string const &getName ( void ) const;
		unsigned int getSignedGrade( void ) const;
		unsigned int getExeGrade( void ) const;
		bool getSigned( void ) const;
		void beSigned(Bureaucrat const &bureaucrat);
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char * what() const throw();
		};
	private :
		const std::string _name;
		bool _signed;
		unsigned int _SignedGrade;
		unsigned int _ExeGrade;
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);
#endif