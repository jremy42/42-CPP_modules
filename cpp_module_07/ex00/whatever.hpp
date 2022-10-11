#ifndef __WHATEVER_H__
#define __WHATEVER_H__

#include <iostream>

template< typename T >
void swap(T &t1, T&t2)
{
	T tmp;

	tmp = t2;

	t2 = t1;
	t1 = tmp;
}

template< typename T >
T& min(T &t1, T&t2)
{
	if (t1 < t2)
		return (t1);
	return (t2);
}

template< typename T >
T& max(T &t1, T&t2)
{
	if (t2 < t1)
		return (t1);
	return (t2);
}


#endif // __WHATEVER_H__