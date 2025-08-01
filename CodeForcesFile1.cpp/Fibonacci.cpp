#include <iostream>
using namespace std;
int main(){
int N;
cin >> N;
long long fibo[51];
fibo[1]=0;
 fibo[2]= 1;


for(int i=3; i<=N; i++){
    
    fibo[i] = fibo[i-1] + fibo[i-2];
    
}

cout << fibo[N] << endl;

 return 0;
}