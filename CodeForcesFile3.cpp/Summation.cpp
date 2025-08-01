#include <iostream>
#include <cmath>
using namespace std;
int main(){
     int N;
     cin >> N;
     long long sum=0;
     
     int A[N];
     for(int i=0; i<N; i++){
        cin >> A[i];
     }

     for (int i=0; i<N; i++){
       sum += A[i];  
       
     }
     cout << abs(sum);

    return 0;
}