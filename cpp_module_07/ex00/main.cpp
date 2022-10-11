#include <iostream>
#include "whatever.hpp"

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

long e = 1;
long f = 1;
std::cout << "adresse e :" << &e << std::endl;
std::cout << "adresse f :" << &f << std::endl;
long *tmp = &(::min( e, f));
std::cout << "adresse tmp :" << tmp << std::endl;
long *tmp2 = &(::max( e, f));
std::cout << "adresse tmp2 :" << tmp2 << std::endl;

return 0;
}
