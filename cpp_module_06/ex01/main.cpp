#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main ( void )
{

	Data d1;
	d1.data = 42;
	std::cout << "adresse d'origine:" << &d1 << " value :" << d1.data << std::endl;
	uintptr_t  uptr = serialize(&d1);
	std::cout << "addresse en uintptr:" <<  uptr << std::endl;
	Data *ptr_d;
	
	ptr_d = deserialize(uptr);
	std::cout << "addresse ptr_d:" << ptr_d << " value :" << ptr_d->data << std::endl;
	return (0);
}