#include <iostream>
using namespace std;

class Box
{
public:
    Box(int a, int b):m_area(a), m_len(b)
    {
        cout << "Box construct!"<< m_area<<m_len <<endl;
    }
    ~Box()
    {
        cout << "~Box deconstruct!" <<endl;
    }
private:
    int m_area;
    int m_len;
};

int main()
{
    int aa(10);
    Box b1(88, 99); 


    cout << aa << endl;

    {
        //Box b1(88, 99); 
        cout << "test" <<endl;
    }
    cout << "main end" <<endl;
}
