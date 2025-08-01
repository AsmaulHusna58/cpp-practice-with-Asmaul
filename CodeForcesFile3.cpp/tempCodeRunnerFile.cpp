#include <iostream>
using namespace std;
int main(){
int N;
cin >> N;
int arr[51];
arr[1]=0;
 arr[2]= 1;
int i;

for(i=2; i<N; i++){
    arr[i] = arr[N-1] + arr[N-2];
}

cout << arr[i] << endl;

 return 0;
}