#include "TemplateDemo.h"
#include <iostream>

using namespace std;

template<class T> A<T>::A(){}

template<class T> T  A<T>::add(T a, T b){
    return a+b;
}


int main() {
    A<float> a;

    cout << a.add(3, 3.2) <<endl;
    return 0;
}
