/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:22:47 by jremy             #+#    #+#             */
/*   Updated: 2022/05/06 13:04:04 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void printAllZombie(int nb, Zombie *newHorde)
{
	if (!newHorde)
		return ;
	for (int i = 0; i < nb; i++)
		newHorde[i].annouce();
}
int main (){

	int nb;

	std::cout << "Choose a number of Rob Zombies between [0] - [100000]" << std::endl;
	std::cin >> nb;
	{
		Zombie *newHorde = zombieHorde(nb, "Rob");
		printAllZombie(nb, newHorde);
		delete [] newHorde;
	}  	
};