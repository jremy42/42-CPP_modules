/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:08:54 by jremy             #+#    #+#             */
/*   Updated: 2022/05/04 12:33:44 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "replace.hpp"

int main(int ac, char **av)
{
	Replace replace;
	
	if (ac != 4)
	{
		std::cerr << "Wrong Number of arg" << std::endl;
		return (1);
	}
	else
	{
		std::string av1 = av[1];
		std::string av2 = av[2];
		std::string av3 = av[3];

		if(av1 == "" || av2 == "" || av3 == "")
			return (std::cout << "Empty string"  << std::endl, 1);
		if (replace.setFile(av[1]) == false)
			return (1);
		replace.replaceFile(av[2], av[3]);
	}
	return 0;
}