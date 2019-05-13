#include <iostream>


using namespace std;

class Shape {
    public:
        void setHeight(int h) {
            high = h;
        }

        void setWidth(int w) {
            width = w;
        }

    protected:
        int high;
        int width; 
};


int main(void) {
    Shape test;

    cout << "sizeof sharp class : %d " << sizeof(test) << endl;

    return 0;

}
