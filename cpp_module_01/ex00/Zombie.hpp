/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:05:21 by jremy             #+#    #+#             */
/*   Updated: 2022/05/02 13:12:50 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <iomanip>
# include <string>

class Zombie{

	public:

		Zombie(std::string zombieName);
		~Zombie();
		void annouce(void);
		std::string getName(void);
	private:
		std::string name;		 
};
Zombie*	newZombie(std::string name);
void randomChump(std::string name);
#endif
