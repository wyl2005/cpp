#include <iostream>
#include <string>

using namespace std;
struct free_throws
{
    std::string name;
    int made;
    int attempt;
    float percent;
};

const free_throws& clone_1(free_throws & ft)
{
    //free_throws *pt = new free_throws;
	free_throws *pt;
    cout << "pt = " << pt << endl;
	
	//error 
    *pt = ft;
    cout << "pt = " << pt << endl;
    return *pt;
}


int main()
{
    cout << "test" << endl;
    free_throws one = {"Allan", 13, 14};
    free_throws two = {"Mike", 12, 14};    
    cout << "test" << endl;
    const free_throws & three = clone_1(one);
    
    cout << "three = " << &three <<endl;
    return 0;
}
