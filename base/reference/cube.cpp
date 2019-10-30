#include <iostream>

double cube(double a) {
    a *= a*a;
    return a;
}

double cuberef(const double & a) {
    //a *= a*a;
    return a *a *a;
}


int main() {
    using namespace std;

    double x = 3.0;

    cout << cube(x);
    cout << " cube x = " << x << endl;

    cout << cuberef(x);
    cout << " cuberef x = " << x << endl;
}
