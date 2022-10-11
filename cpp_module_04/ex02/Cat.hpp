/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:33:20 by jremy             #+#    #+#             */
/*   Updated: 2022/05/18 14:32:13 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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