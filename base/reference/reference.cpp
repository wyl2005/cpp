#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int rat = 101;
    int *pt = &rat;//NULL;//= &rat;
    int & refrat = *pt;
    cout << refrat << endl;

    int bound = 50;
    pt = &bound;

    cout << refrat << endl;
}

