#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> vec = {1, 2, 3, 4, 5};

vec.erase(vec.begin());
vec.erase(vec.begin() + 2);

for(int val : vec){
    cout << val << " " ;

}
cout << endl;

vector<int> val(3, 10);
for(int vall : val){
    cout << vall << " ";
}
cout << endl;

vector<int> vec2(vec);
for(int val : vec2){
    cout << val << " ";
}
cout << endl;

    return 0;
}