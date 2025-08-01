#include <iostream>
using namespace std;
int main(){
     int N;
     cin >> N;
     int A[N];
     for(int i=0; i<N; i++){
        cin >> A[i];
     }
     int minValue = INT_MAX;
     int minIndex = -1;

     for(int i=0; i<N; i++){
        if(A[i] < minValue){
            minValue = A[i];
            minIndex = i+1;
        }
     }
    cout << minValue << " " << minIndex << endl;
    return 0;
}