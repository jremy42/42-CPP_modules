#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	public :
		Point ( void );
		Point (const float newX, const float newY);
		Point (Point const &src);
		~Point( void );
		Point& operator=(Point const &rhs);		
		float	getX(void) const;
		float	getY(void) const;
	
	private :
		Fixed const x;
		Fixed const y;
};
#endif