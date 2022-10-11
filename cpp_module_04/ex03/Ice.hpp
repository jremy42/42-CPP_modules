/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:49:21 by jremy             #+#    #+#             */
/*   Updated: 2022/05/20 11:50:35 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice( void );
		Ice(std::string const & type);
		Ice (Ice const &src);
		virtual ~Ice( void );
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
		Ice& operator=(Ice const &rhs);
		std::string getType( void ) const;

};

#endif
