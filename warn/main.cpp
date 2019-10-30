
#include <iostream>
using namespace std;

int main(){
    volatile int i = 0x10000000; //OK
    //int i = 0x10000000; // NG

    int c = 0;
    do{
        c++;
        i += i;
        //i *= 2;
        //i <<= 1;  //-O3 OK
        cout << i << endl;
    }while (i > 0);

    cout << c << endl;
    return 0;
}

