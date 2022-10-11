#ifndef __ITER_H__
#define __ITER_H__

#include "iostream"

template<typename T>
void iter(T *tab, size_t size, void(f)(T &tab) )
{
	for (size_t i = 0; i < size; i++)
		f(*(tab + i));
}

template<typename T>
void print(T content)
{
	std::cout << "[" << content << "] ";
}

#endif // __ITER_H__