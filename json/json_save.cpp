#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

int main()
{
    json myjs = {
    {"pi", 3.14},
    {"happy", true},
    {"name", "Niel"},
    {"anser", {{"everythin", 14}}},
    {"list", {1, 0, 2}},
    
    };
    myjs["userip"] = "192.168.1.1";
    
    cout << myjs << endl;

    std::ofstream myfile("myjson.json");
    myfile << myjs << std::endl;
   
    return 0; 

}
