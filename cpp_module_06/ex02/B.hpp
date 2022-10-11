#ifndef __B_H__
#define __B_H__
#include "Base.hpp"

class B : public Base
{
	public:
		B( void ) { std::cout << "Construcor B" << std::endl;};
};

#endif // __B_H__