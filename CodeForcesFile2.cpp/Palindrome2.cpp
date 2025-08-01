#include <iostream>
using namespace std;
int main(){
int N;
cin >> N;
int num = N;
int reverse = 0;

while (num != 0){
    int digit = num % 10;
    reverse = reverse * 10 + digit;
    num = num / 10; 
}
    
cout << reverse << endl;

if(N == reverse){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}
    return 0;
}