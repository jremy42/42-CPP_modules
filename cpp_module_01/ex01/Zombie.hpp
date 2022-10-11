/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:05:21 by jremy             #+#    #+#             */
/*   Updated: 2022/05/02 16:19:42 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <iomanip>
# include <string>

class Zombie{

	public:

		Zombie();
		~Zombie();
		void annouce(void);
		std::string getName(void);
		void	setName(std::string zombieName);
	private:
		std::string name;		 
};

Zombie *zombieHorde(int nb, std::string name);
#endif
