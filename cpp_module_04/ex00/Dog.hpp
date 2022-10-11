/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:33:20 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 16:59:56 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog ( void );
		Dog (Dog const &src);
		virtual ~Dog( void );
		Dog& operator=(Dog const &rhs);

		virtual void makeSound(void) const;
		
};

#endif