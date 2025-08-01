#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector <int> vec;

 cout << "Size: " << vec.size() << endl;

 vec.push_back(34);
 vec.push_back(35);

 cout << "After push back Size: " << vec.size() << endl;

 
 for(int i : vec){
    cout << "After push back the value is: " << i << " ";

 }
 cout << endl;

 vec.pop_back();
 
 cout << "After pop back: " << vec.size() << endl;

 for(int i : vec){
    cout << "After pop back the value is : " << i << " ";

 }


    return 0;
}