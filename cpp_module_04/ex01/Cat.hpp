/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:33:20 by jremy             #+#    #+#             */
/*   Updated: 2022/05/18 12:34:17 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat ( void );
		Cat (Cat const &src);
		virtual ~Cat( void );
		Cat& operator=(Cat const &rhs);
		virtual Brain* getBrain( void ) const;
		virtual void makeSound(void) const;
	private:
		Brain *_brain;
		
};


#endif