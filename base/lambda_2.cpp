#include <iostream>

using namespace std;


int main()
{
    int x = 10;
    
    auto add_x = [x](int a) mutable { x *= 2; return a + x; };  // 复制捕捉x
    
    cout << add_x(10) << endl; // 输出 30

    cout << "origin x=" << x << endl;
    return 0;

}
