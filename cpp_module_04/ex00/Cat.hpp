/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:33:20 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 16:59:50 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat ( void );
		Cat (Cat const &src);
		virtual ~Cat( void );
		Cat& operator=(Cat const &rhs);

		virtual void makeSound(void) const;
		
};


#endif