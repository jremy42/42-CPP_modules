/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:53:39 by jremy             #+#    #+#             */
/*   Updated: 2022/05/20 11:44:23 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure( void );
		Cure(std::string const & type);
		Cure (Cure const &src);
		virtual ~Cure( void );
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
		Cure& operator=(Cure const &rhs);
		std::string getType( void ) const;
};

#endif