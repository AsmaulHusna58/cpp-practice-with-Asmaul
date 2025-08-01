#include <iostream>
using namespace std;
int main(){
     int N;
     cin >> N;
     int A[N];
     int sum =0;
     string digit;
     cin >> digit;
     for(int i=0; i<N; i++){
       A[i] = digit[i] - '0';
       
     }

     for(int i=0; i<N; i++){
        sum += A[i];
     }
     cout << sum << endl;

    return 0;
}