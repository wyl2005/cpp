#include <iostream>
#include "json.hpp"

using namespace std;
using json=nlohmann::json;

int main()
{
    json j = { "a", 6,"xin", 8};
    cout << j[0] << endl;

//    cin>>j;
//    cout << j;

    
    return 0;

}
