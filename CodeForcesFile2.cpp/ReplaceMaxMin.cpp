#include <iostream>
using namespace std;
int main(){
int N;
cin >> N;
int A[N];
for(int i=0; i<N; i++){
    cin >> A[i];
}

int maxIndex = 0, minIndex = 0;

for(int i=0; i<N; i++){
    if(A[i] > A[maxIndex]){
        maxIndex = i;
    }
    if(A[i] < A[minIndex]){
        minIndex = i;
    }
}

swap(A[maxIndex], A[minIndex]);


    for(int i=0; i<N; i++){
        cout << A[i] << " ";
    } 
    return 0;
}