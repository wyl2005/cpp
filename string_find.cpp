#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    string a="abcdefghigklmn";
    string b="def";
    string c="123";
    string::size_type idx;
     
    idx=a.find("mn");//在a中查找b.
    if(idx == string::npos )//不存在。
        cout << "not found\n";
    else//存在。
        cout <<"mn found\n"; 
    idx=a.find("abc");//在a中查找c。
    if(idx == string::npos )//不存在。
        cout << "not found\n";
    else//存在。
        cout <<"found\n"; 
    printf("sizeof: %ld", strlen("123"));

    return 0;
}
