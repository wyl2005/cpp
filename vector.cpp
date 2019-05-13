#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    int i;

    cout << "vec size =" << vec.size() << endl;    
    cout << "vec.capacity() = " << vec.capacity() << endl;

    for(i = 0; i < 5; i++)
        vec.push_back(i);

    cout << "extend vec size =" << vec.size() << endl;    
    cout << "vec.capacity() = " << vec.capacity() << endl;
   
    for(i = 0; i < 5; i++)
        cout << "vec["<<i<<"] = " << vec[i] << endl;

    vector<int>::iterator v = vec.begin();
    while (v != vec.end())
    {
        cout << "value of v =" << *v << endl;
        v++;
    } 
    return 0; 
}

