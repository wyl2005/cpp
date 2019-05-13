#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

#define PAUSE printf("Press Enter key to continue..."); fgetc(stdin);


class A 
{
private:
    int a = 5;
    vector<void(*)(int)> funcs;
public:
    void setA(int a_);
    void registerCallback(void(*p)(int));
};

void display(int a) 
{
    cout << "a=" << a << endl;
}

int main()
{
    A a1;
    a1.registerCallback(display);
    
    cout << "test\n" << endl;

    a1.setA(7);
   // system("pause");
    PAUSE
    printf("system(\"pause\") for linux!\n");
    return 0;
}

void A::setA(int a_)
{
    a = a_;
    for (int i = 0; i < funcs.size(); ++i) {
        funcs[i](a);
    }
}

void A::registerCallback(void(*p)(int))
{
    funcs.push_back(p);
}


