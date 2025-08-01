#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> vec;
vec.push_back(25);
vec.push_back(35);
vec.push_back(45);

cout << "Print the front value: " << vec.front() << endl;
cout << "Print the back value: " << vec.back() << endl;


    cout << "Print the 1 index value: " << vec.at(1);





    return 0;
}