#include<bits/stdc++.h>
using namespace std;
int main(){
int n; 
cin >> n;
int A[n];
int temp;
for(int i=0; i<n; i++){
    cin >> A[i];
    if(temp == A[i]){
        cout <<A[i];
        break; 
    }
}


    return 0;
}
