#include <map>
#include <string>
#include <iostream>


using namespace std;

int main() {
    map<int, string> mapStu;

    mapStu.insert(pair<int, string>(1, "one"));
    mapStu.insert(pair<int, string>(2, "two"));
    mapStu.insert(pair<int, string>(3, "three"));


    map<int, string>::iterator iter;

    for(iter = mapStu.begin(); iter != mapStu.end(); iter++)
        cout << iter->first<< '=' <<iter->second <<endl;

    return 0;
}
