/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:03:50 by jremy             #+#    #+#             */
/*   Updated: 2022/05/24 16:06:05 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
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
#include <fstream>
class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form
{
	public :
		ShrubberyCreationForm( void );
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm (ShrubberyCreationForm const &src);	
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &rhs);
		virtual ~ShrubberyCreationForm( void );
		std::string const &getTarget( void) const; 
		void execute(Bureaucrat const &executor) const;
		static Form *clone(std::string const target);
		class ErrorOpen : public std::exception
		{
			virtual const char *what() const throw();
		};
	private :
		static std::string const _tree;
		const std::string _target;
};
#endif