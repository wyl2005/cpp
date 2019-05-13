#include <iostream>

using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "division by zero!!";
    }
    return (a/b); 
}

int main()
{
    int x  = 50;
    int y  = 0;
    
    try {
        double z = division(x,y);
        cout << z << endl;
    } catch (...) {
        cout << "error!!!" << endl;
    } 
    return 0;
}
