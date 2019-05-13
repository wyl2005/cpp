#include <iostream>
#include <fstream>
#include "json.hpp"
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
using json=nlohmann::json;

int main()
{
    json j = { "a", 6,"xin", 8};
    cout << j[0] << endl;

//    cin>>j;
//    cout << j;


    std::ifstream jsonFile ("./parameter_new.json", std::ifstream::binary);
    if (jsonFile)
    {
        std::stringstream buffer;
        buffer << jsonFile.rdbuf();
        std::string contents(buffer.str());
        
        cout << "test" << endl;
        json para; 
        try {
            para = json::parse(contents); 
		}
        catch(exception & e)
        {
            std::cout << "parse json file error" << endl;
            std::cout << e.what() << std::endl;
            return -1;
        }
        json temp = para["cut_parameter"];
		if (temp.find("28") != temp.end()) {
		  // there is an entry with key "cut_parameter"
		    printf("find cut_parameter \n");
		  
		} else {
			printf("Not  find cut_parameter \n");
			
		}
	
				std::string s1 , s2;
    	for (json::iterator it = temp.begin(); it != temp.end(); ++it) {
			std::cout << it.key() << " :: " << it.value() << "\n";
			stringstream stream, stream1;  
		    stream <<	it.key();
			stream >> s1;

			stream1 <<	it.value();
			stream1 >> s2;	
			printf("iterator key: %s, value: %s \n", s1.c_str() , s2.c_str());
		//	printf("iterator key: %s, value: %s \n", it.key() , it.value());
		}
	
	
		//printf("para.find("cut_parameter") \n", para.find("cut_parameter").size());
        cout << para["cut_parameter"]["0"]["speed"] << endl;
        cout << para["cut_parameter"]["0"]["power"] << endl;
		printf("curve 27:%d, %d\n",  (int)(para["curve_parameter"]["27"]["speed"]) ,  (int)(para["curve_parameter"]["27"]["power"])); 
		
    printf("curve 29:%d, %d\n",  (int)(para["curve_parameter"]["29"]["speed"]) ,  (int)(para["curve_parameter"]["29"]["power"])); 
		
        cout << para.size() << endl;

        cout << para["cut_parameter"].size() << endl;
        printf("int: %d \n", (int)(para["cut_parameter"]["0"]["speed"]));
        printf("para[\"curve_parameter\"].size(): %ld \n", para["curve_parameter"].size());
        printf("para[\"cut_parameter\"].size(): %ld \n", para["cut_parameter"].size());


        std::string str;

		str = std::to_string(28);
		printf("str: %s \n", str.c_str());
		 
        for (int i=0; i < para["cut_parameter"].size(); i++) {

   			str = std::to_string(i);
            printf("id %s: %d, %d\n", str.c_str() ,  (int)(para["cut_parameter"][str.c_str()]["speed"]) ,  (int)(para["cut_parameter"][str.c_str()]["power"])); 

        }
    } else {
        cout <<"No json file " << endl;
    }
    return 0;

}
