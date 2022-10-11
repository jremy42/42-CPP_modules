#include <iostream>
#include "Easyfind.tpp"
#include <vector>
#include <set>

int main( void )
{
    //srand(time(NULL));
    //std::cout << "test with set" << std::endl;

    std::cout << "test with vector" << std::endl;
    try
    {
        std::vector<int> vect;
        for (int i = 0; i < 10 ; i++)
        {
            std::cout << "add : [" << i << "] ";
            vect.push_back(i);
        }
        std::vector<int>::iterator it;
        std::cout << std::endl;
        it = easyfind(vect, 9);
        std::cout << "iterator : [" << *it << "]" << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "test with vector error" << std::endl;
    try
    {
        std::vector<int> vect;
        for (int i = 0; i < 10 ; i++)
        {
            std::cout << "add : [" << i << "] ";
            vect.push_back(i);
        }
        std::vector<int>::iterator it;
        std::cout << std::endl;
        it = easyfind(vect, 10);
        std::cout << "iterator : [" << *it << "]" << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

     std::cout << "test with set" << std::endl;
    try
    {
        std::set<int> s;
        for (int i = 0; i < 10 ; i++)
        {
            std::cout << "add : [" << i << "] ";
            s.insert(i);
        }
        std::set<int>::iterator it;
        std::cout << std::endl;
        it = easyfind(s, 9);
        std::cout << "iterator : [" << *it << "]" << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "test with set error" << std::endl;
    try
    {
        std::set<int> s;
        for (int i = 0; i < 10 ; i++)
        {
            std::cout << "add : [" << i << "] ";
            s.insert(i);
        }
        std::set<int>::iterator it;
        std::cout << std::endl;
        it = easyfind(s, 10);
        std::cout << "iterator : [" << *it << "]" << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
     
    //std::cout << "test with list" << std::endl;

}