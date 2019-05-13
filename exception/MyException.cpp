#include <iostream>
#include <exception>

using namespace std;

struct MyException: public exception
{
    const char * what() const throw()
    {
        return "Test: c++ exception";
    }

};

int main()
{
    try {
        throw MyException();
    }
    catch(MyException &e)
    {
        std:cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }

}
