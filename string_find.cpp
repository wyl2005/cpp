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
     
    idx=a.find("mn");//��a�в���b.
    if(idx == string::npos )//�����ڡ�
        cout << "not found\n";
    else//���ڡ�
        cout <<"mn found\n"; 
    idx=a.find("abc");//��a�в���c��
    if(idx == string::npos )//�����ڡ�
        cout << "not found\n";
    else//���ڡ�
        cout <<"found\n"; 
    printf("sizeof: %ld", strlen("123"));

    return 0;
}
