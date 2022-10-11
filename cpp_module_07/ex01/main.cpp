#include <iostream>
#include "iter.hpp"

int main ( void )
{

	{
	std::cout << "INT " << std::endl;
	int tab[10] = {1, 2, 3, 4, 5 ,6 ,7 ,8 ,9 , 10};
	iter(tab, 10, print);
	std::cout << std::endl;
	}
	{
	std::cout << "CHAR" << std::endl;
	char tab[10] = {'a', 'b', 'c', 'd', 'e' ,'f' ,'g' ,'h' ,'i' , 'j'};
	iter(tab, 10, print);
	std::cout << std::endl;
	}
	{
	std::cout << "STRING" << std::endl;
	std::string tab[10] = {"bulbizare", "herbizare", "florizare", "carapuce", "carabafe", "tortank", "salameche", "reptincel" ,"dracaufeu" ,"chenipan"};
	iter(tab, 10, print);
	std::cout << std::endl;;
	}

	{
	std::cout << "FLOAT" << std::endl;
	float tab[10] = {1.1, 2.2, 3.3, 4.4, 5.5 ,6.6 ,7.7 ,8.8 ,9.9 , 10.10};
	iter(tab, 10, print);
	std::cout << std::endl;;
	}
}