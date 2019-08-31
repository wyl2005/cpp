#include <iostream>

using namespace std;

int main()
{
    int i =1024;
    int j =2024;
    cout << &i <<endl;
    cout << &j <<endl;

    auto fun = [=, &i] {
        cout << &i << endl;
        cout << &j << endl;
    };
    
    fun();

}
