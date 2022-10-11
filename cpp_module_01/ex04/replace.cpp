/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:11:57 by jremy             #+#    #+#             */
/*   Updated: 2022/05/04 12:33:16 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <sstream>

Replace::Replace( void )
{	
}

Replace::~Replace( void )
{
}

bool Replace::setFile(std::string fileName)
{
	if (this->myFile.is_open())
		this->myFile.close();
	if (fileName.length() == 0)
	{
		std::cerr << "fileName can't be empty" << std::endl;
		return (false);
	}
	this->myFile.open(fileName.c_str());
	if (!this->myFile.is_open())
		return (std::cout << "open error" << std::endl, false);
	this->fileName = fileName;
	return (true);
}

void Replace::writeInFile(std::string contentFile)
{
	std::string outFileName = this->fileName;
	outFileName += ".replace";	
	std::ofstream outfile (outFileName.c_str());
	std::cout << "Writing in a newfile:" << outFileName << std::endl;
	outfile << contentFile;
	outfile.close();
	this->myFile.close();

}

bool Replace::replaceFile(std::string toSearch, std::string toReplace)
{
	std::stringstream buff;
	std::string contentFile;
	
	if (toSearch.length() == 0)
	{
		std::cerr << "toSearch can't be empty" << std::endl;
		return (false);
	}
	if (toReplace.length() == 0)
	{
		std::cerr << "toReplace can't be empty" << std::endl;
		return (false);
	}
	buff << this->myFile.rdbuf();
	contentFile += buff.str();
	for (size_t pos = 0; pos < contentFile.length(); pos++)
	{
		if(contentFile.compare(pos, toSearch.length(), toSearch) == 0)
			{
				contentFile.erase(pos, toSearch.length());
				contentFile.insert(pos, toReplace);  
			}
	}
	writeInFile(contentFile);
	return (true);
}