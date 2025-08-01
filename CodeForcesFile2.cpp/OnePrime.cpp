#include <iostream>
using namespace std;
int main(){
int X;
cin >> X;
bool isPrime = true;
for(int i=2; i<= (X-1); i++){
    if(X%i == 0){
        isPrime = false;
        break;
    }
}

if(isPrime == true){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}

    return 0;
}