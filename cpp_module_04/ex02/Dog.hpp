/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:33:20 by jremy             #+#    #+#             */
/*   Updated: 2022/05/18 14:32:13 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog ( void );
		Dog (Dog const &src);
		virtual ~Dog( void );
		Dog& operator=(Dog const &rhs);
		virtual Brain* getBrain( void ) const;
		virtual void makeSound(void) const;
	private:
		Brain *_brain;	
};

#endif