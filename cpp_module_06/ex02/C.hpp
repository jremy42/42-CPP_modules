#ifndef __C_H__
#define __C_H__
#include "Base.hpp"

class C : public Base
{
	public:
		C( void ) { std::cout << "Construcor C" << std::endl;};
};
#endif // __C_H__