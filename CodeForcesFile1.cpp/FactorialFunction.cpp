#include <iostream>
using namespace std;
 int factN(int n){

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
 }

 int main(){
  cout << "Factorial of 5 : " <<  factN(5)<< endl;
  cout << "Factorial of 10 : " <<  factN(10)<< endl;

    return 0;
 }