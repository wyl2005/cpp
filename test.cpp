#include <iostream>
#include <string>
#include <stdlib.h>

 
using namespace std;
 
class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // ���ǹ��캯������
      ~Line();  // ����������������
 
   private:
      double length;
};
 
// ��Ա�������壬�������캯��
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
double Line::getLength( void )
{
    return length;
}

void fun(void)
{
    Line line1;
    line1.setLength(9.0);
   cout << "Length of line1 : " << line1.getLength() <<endl;

}

void PrintValues(char* & ptr)
{

}

// �����������
int main( )
{
    fun();
	cout << "main begin " <<endl;
   Line line;

    string s;
    s = "123";
    int num = strtol(s.c_str(), NULL, 0);
    cout <<"num = " << num << endl;
  
   // ���ó���
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;


    char str_array[16];
    char * p = str_array; 
    PrintValues(p);
//    PrintValues(str_array); // error: invalid initialization of non-const reference of type ��const char*&�� from an rvalue of type ��const char*��
    return 0;
}
