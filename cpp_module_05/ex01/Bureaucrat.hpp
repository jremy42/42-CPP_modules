/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:53:39 by jremy             #+#    #+#             */
/*   Updated: 2022/05/24 16:22:48 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
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
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public :
		Bureaucrat( void );
		Bureaucrat(std::string const &name, unsigned int grade);
		Bureaucrat (Bureaucrat const &src);	
		Bureaucrat& operator=(Bureaucrat const &rhs);
		~Bureaucrat( void );
		std::string const getName ( void ) const;
		unsigned int getGrad( void ) const;
		void promote( void );
		void destitute ( void );
		void signForm (Form &form);
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
		std::string const _name;
		unsigned int _grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);
#endif