/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:01:43 by jremy             #+#    #+#             */
/*   Updated: 2022/05/02 16:19:32 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int nb, std::string name)
{
	if (nb <= 0)
		return (NULL);
	Zombie *newHorde = new Zombie[nb];
	for (int i = 0; i < nb; i++)
		newHorde[i].setName(name);
	return (newHorde);
}