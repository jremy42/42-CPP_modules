#ifndef __A_H__
#define __A_H__
#include "Base.hpp"

class A : public Base
{
	public:
		A( void ) { std::cout << "Construcor A" << std::endl;};
};

#endif // __A_H__