#include <iostream>

using namespace std;

class Base
{
public:
    void func(int a)
    {
        cout << "Base func(int a)" << endl;
    }   
};

class Drv: public Base
{
public:
    using Base::func; // 这句使基类中的func系列函数不会被隐藏（只能被隐藏同名同参数的一）
    void func(char *x)
    {
        cout << "Drv func(char *x)" <<endl;
    }
};

int main() {

    Drv dr;
    dr.func(1);
}
