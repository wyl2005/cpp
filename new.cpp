#include <iostream>

using namespace std;

class Box
{
    public:
        Box() {
            cout <<"construct" << endl;
        }
        ~Box() {
            cout <<"destruct" <<endl;
        }
};

int main()
{
    Box * pBoxArray = new Box[4];

    delete [] pBoxArray;
    return 0;
}
