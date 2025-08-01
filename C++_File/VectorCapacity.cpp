#include <iostream>
#include <vector>
using namespace std;
int main(){
vector <int> vec ;
vec.push_back(45);
vec.push_back(36);
vec.push_back(84);

cout << "Size: " << vec.size() << endl;
cout << "Capacity: " << vec.capacity() << endl;

    return 0;
}