/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:03:50 by jremy             #+#    #+#             */
/*   Updated: 2022/05/24 16:02:32 by jremy            ###   ########.fr       */
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
		virtual ~Form( void );
		std::string const &getName ( void ) const;
		unsigned int getSignedGrade( void ) const;
		unsigned int getExeGrade( void ) const;
		bool getSigned( void ) const;
		void beSigned(Bureaucrat const &bureaucrat);
		void checkExe(Bureaucrat const &Bureaucrat) const;
		std::string getType( void ) const;
		virtual void execute(Bureaucrat const &executor) const = 0;
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
		class IsSigned : public std::exception
		{
			public :
				virtual const char * what() const throw();
		};
	protected :
		const std::string _name;
		bool _signed;
		unsigned int _SignedGrade;
		unsigned int _ExeGrade;
		std::string _type;
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);
#endif