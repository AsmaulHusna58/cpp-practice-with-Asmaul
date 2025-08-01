#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "Size:" << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "vector index of 2 : " << vec.at(2) << endl;
    cout << "Vector of index of 2: " << vec[2] << endl;
    cout << "Value of front : " << vec.front() << endl;
    cout << "Value of end : " << vec.back() << endl;

    return 0;
}