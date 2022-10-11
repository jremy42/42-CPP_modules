#ifndef __EASYFIND_H__
#define __EASYFIND_H__
#include <iostream>
#include <algorithm>

class notFind : public std::exception
{
    virtual const char* what() const throw() { return (" Not find");};
};

template<typename T>
typename T::iterator easyfind(T &container, int tofind)
{
    typename T::iterator it = find(container.begin(), container.end(), tofind);
    if(it == container.end())
        throw notFind();
    return it;
};

#endif // __EASYFIND_H__