#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    string test = "123 welcom to, 898, test!";


    ifstream infile("para.json");    

    cout << infile.rdbuf();

    return 0;

}
