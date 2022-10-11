#include "span.hpp"
#include <iostream>

int main()
{
{
    std::cout << "---Basic test---" << std::endl;
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}
{
    Span sp = Span(15000);
    std::vector<int> vect;
    for (int i = 0; i < 15000; i++)
		vect.push_back(i);
    sp.addRangeNumber(vect.begin(), vect.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
std::cout << "---Error test---" << std::endl;
try {
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
sp.addNumber(11);
}catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

try { 
    Span sp = Span(0);
    std::cout << sp.shortestSpan() << std::endl;
}catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

try { 
    Span sp = Span(0);
    std::vector<int> vect;
    std::cout << sp.longestSpan() << std::endl;
}catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	{
	std::cout << "---Neg test---" << std::endl;
	Span sp = Span(5);
	sp.addNumber(-6);
	sp.addNumber(-3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	}
	{
	std::cout << "---Neg test 2---" << std::endl;
	Span sp = Span(5);
	sp.addNumber(-6);
	sp.addNumber(-3);
	sp.addNumber(-17);
	sp.addNumber(-9);
	sp.addNumber(-11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	}
	

	return 0;
}