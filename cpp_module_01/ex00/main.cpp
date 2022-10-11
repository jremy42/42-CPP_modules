/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:22:47 by jremy             #+#    #+#             */
/*   Updated: 2022/05/02 15:55:35 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (){


	std::cout << "Classic test" << std::endl;
	{
		Zombie rob("Rob1");
		rob.annouce();
	}

		std::cout << "Test whith func NewZombie" << std::endl;
	{
		Zombie *cranb = newZombie("Rob2");
		cranb->annouce();
		delete cranb;
	}

		std::cout << "Test with func randomChump" << std::endl;
	{
		randomChump("Rob3");
	}		
};