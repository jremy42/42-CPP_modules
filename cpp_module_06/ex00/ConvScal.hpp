#ifndef __CONVSCAL_H__
#define __CONVSCAL_H__
#include <iostream>
#include <limits.h>
#include <limits>
#include <errno.h>
#include <cstdlib>
# include <iomanip>

class ConvScal
{
	public:
		ConvScal(std::string &newVal);
		ConvScal(ConvScal &src);
		ConvScal& operator=(ConvScal const &rhs);
		~ConvScal();
		void convertChar(std::string &newVal);
		void convertInt(std::string &newVal);
		void convertFloat(std::string &newVal);
		void convertDouble(std::string &newVal);
		void checkOverflow(std::string &newVal);
		bool isInt(std::string &newVal);
		bool isChar(std::string &newVal);
		bool isDouble(std::string &newVal);
		bool isFloat(std::string &newVal);
		void print( void );
		void printChar( void );
		void printInt( void );
		void printFloat(void );
		void printDouble( void );
		bool isException( std::string &newValue );
		typedef enum e_type {
			DEFAULT,
			CHAR,
			INT,
			FLOAT,
			DOUBLE
		} type;
		char getCval( void ) const;
		int getiVal( void ) const;
		float getfVal( void ) const;
		double getdVal( void ) const;
		type getType( void ) const;
		class uknowType : public std::exception
		{
			public :
				virtual const char * what() const throw();
		};	

	private:
		char	_cVal;
		int		_iVal;
		float	_fVal;
		double	_dVal;
		int		_precision;
		bool	_pinf;
		bool	_minf;
		bool	_nan;
		bool	_error;
		bool	_charOver;
		bool	_intOver;
		bool	_floatOver;
		type	_type;
		ConvScal( void );
};

#endif // __CONVSCAL_H__