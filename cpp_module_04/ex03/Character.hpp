/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:32:33 by jremy             #+#    #+#             */
/*   Updated: 2022/05/20 11:41:55 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter 
{
	public:
		Character (Character const &src);
		Character (const std::string &name);
		virtual ~Character();
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		AMateria* getMateria(int idx) const;
		virtual std::string const &getName() const;
		int getNmateria( void ) const;
		Character& operator=(Character const &rhs);

		// gerer =

	private:
		AMateria* _inventory[4];
		int _Nmateria;
		std::string _name;
};
#endif