#ifndef __SPAN_H__
#define __SPAN_H__

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    public:
        Span( void );
        Span(unsigned int const &n);
        ~Span( void );
        Span& operator=(Span const &cpy);
        void addNumber(int const &newNumber);
        void addRangeNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
        unsigned int shortestSpan( void );
        unsigned int longestSpan( void );
        std::vector<int> getTab( void);
        class sizeToBig : public std::exception
        {
            virtual const char* what() const throw() { return ("Can't add, Max size is reached");};
        };
        class notEnough : public std::exception
        {
            virtual const char* what() const throw() { return ("Can't find, not enough value");};
        };

    private:
        unsigned int _size;
        std::vector<int> _tab;
};
#endif // __SPAN_H__