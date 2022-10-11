/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:40:07 by jremy             #+#    #+#             */
/*   Updated: 2022/05/06 11:11:12 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_H
# define HARL_H
# include <iostream>

class Harl{

	public:
		Harl( void );
		~Harl( void );
		void complain(std::string level);
				
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void defaultMessage( void );
		void filter(int level);
		static std::string cmp[4]; 
};

#endif