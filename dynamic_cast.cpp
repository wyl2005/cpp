#include<iostream>  
  
using namespace std;  
class Base  
{  
public:  
  Base(){};  
  virtual void Show(){cout<<"This is Base calss";}  
};  
class Derived:public Base  
{  
public:  
  Derived(){};  
  void Show(){cout<<"This is Derived class";}  
};  
int main()  
{  
    //这是第一种情况  
    Base* base = new Derived;  
    if(Derived *der= dynamic_cast<Derived*>(base))  
    {  
        cout<<"first case OK"<<endl;  
        der->Show();  
        cout<<endl;  
    }  
    //这是第二种情况  
    Base * base1 = new Base;  
    if(Derived *der1 = dynamic_cast<Derived*>(base1))  
    {  
        cout<<"Second case OK"<<endl;  
        der1->Show();  
    }  
    else  
    {  
        cout<<"Second case Fail"<<endl;  
    }  
    delete(base);  
    delete(base1);  
  
    return 0;  
}  

