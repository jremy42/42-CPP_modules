/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:38:10 by jremy             #+#    #+#             */
/*   Updated: 2022/05/06 10:47:09 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av )
{
	Harl harl;
	
	if (ac != 2)
	{
		std::cout << "Usage : [Level]" << std::endl;
		std::cout << "Level type : [DEBUG] [INFO] [WARNING] [ERROR]" << std::endl;
		return (1);
	}
	else
	{
		std::string buff(av[1]);
		harl.complain(buff);
	}
	return 0;
}