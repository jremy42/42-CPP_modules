/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:37:11 by jremy             #+#    #+#             */
/*   Updated: 2022/05/23 16:37:34 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::_tree = "                          .         ;\n            .              .              ;%     ;;\n              ,           ,                :;%  %;   \n               :         ;                   :;%;'     .,\n      ,.        %;     %;            ;        %;'    ,;\n        ;       ;%;  %%;        ,     %;    ;%;    ,%'\n         %;       %;%;      ,  ;       %;  ;%;   ,%;'\n           ;%;      %;        ;%;        % ;%;  ,%;'\n           `%;.     ;%;     %;'         `;%%;.%;'\n            `:;%.    ;%%. %@;        %; ;@%;%'\n               `:%;.  :;bd%;          %;@%;'\n                 `@%:.  :;%.         ;@@%;'\n                   `@%.  `;@%.      ;@@%;\n                     `@%%. `@%%    ;@@%;\n                       ;@%. :@%%  %@@%;\n                         %@bd%%%bd%%:;\n                           #@%%%%%:;;\n                           %@@%%%::;\n                           %@@@%(o);  . '\n                           %@@@o%;:(.,'\n                       `.. %@@@o%::;\n                          `)@@@o%::;\n                           %@@(o)::;\n                          .%@@@@%::;\n                          ;%@@@@%::;.\n                         ;%@@@@%%:;;;.\n                     ...;%@@@@@%%:;;;;,..\n " ;

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	DEBUG && std::cout << GREEN << "ShrubberyCreationForm Default constructor called" << RESET<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	DEBUG && std::cout << GREEN << "ShrubberyCreationForm Name constructor called" << RESET<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
		DEBUG && std::cout << GREEN << "ShrubberyCreationForm Destructor called" << RESET<< std::endl;
}

std::string const &ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		const std::string* namePtr = (std::string*)&this->_target;
		namePtr = &rhs._target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->checkExe(executor);
	std::string outFileName = this->_target;
	outFileName += "_shrubbery";	
	std::ofstream outfile (outFileName.c_str());
	if (!outfile.is_open())
		throw ShrubberyCreationForm::ErrorOpen();
	outfile << this->_tree;
	outfile.close();
}

const char * ShrubberyCreationForm::ErrorOpen::what() const throw()
{
	return ("Open Error\n");
}
