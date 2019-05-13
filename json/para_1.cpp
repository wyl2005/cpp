#include <iostream>
#include <fstream>
#include "json.hpp"
#include <sstream>

using namespace std;
using json=nlohmann::json;

int main()
{
    json j = { "a", 6,"xin", 8};
    cout << j[0] << endl;

//    cin>>j;
//    cout << j;


    std::ifstream jsonFile ("./para.json", std::ifstream::binary);
    if (jsonFile)
    {
        std::stringstream buffer;
        buffer << jsonFile.rdbuf();
        std::string contents(buffer.str());
        
        cout << contents << endl;
        auto para = json::parse(contents); 
    
        cout << para["parameter"][0]["speed"] << endl;
        cout << para["parameter"][0]["power"] << endl;
        cout << para.size() << endl;
        cout << para.type() << endl;
        cout << para.["paramter"].type() << endl;
        cout << para["parameter"].size() << endl;
    } else {
        cout <<"No json file " << endl;
    }
    return 0;

}
