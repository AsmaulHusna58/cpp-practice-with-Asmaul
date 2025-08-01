#include <iostream>
using namespace std;
int main(){
int N;
cin >> N;
long long A[N];
for(int i=0; i<N; i++){
    cin >> A[i];
}

int max = INT_MIN;
for(int i=0; i<N; i++){
    if(max < A[i]){
        max = A[i];
    }
}
cout << max << endl;

    return 0;
}