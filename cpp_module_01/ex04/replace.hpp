/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:05:32 by jremy             #+#    #+#             */
/*   Updated: 2022/05/03 15:05:43 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H
# include <iostream>
# include <fstream>
# include <string>

class Replace{

	public:
		Replace( void );
		~Replace( void );
		bool setFile(std::string filename);
		bool replaceFile(std::string toSearch, std::string toReplace);
		void writeInFile(std::string contentFile);

		
	private:
		std::ifstream myFile;
		std::string fileName;
};

#endif