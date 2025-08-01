#include <iostream>
using namespace std;
int main(){
int N; 
cin >> N;
int A[N];
for(int i=0; i<N; i++){
    cin >> A[i];
}

int evenCount = 0;
int oddCount = 0;
int positiveCount =0;
int negativeCount = 0;

for(int i=0; i<N; i++){
    if((A[i]%2==0 || A[i]==0)){
        evenCount++;
    } else {
        oddCount++;
    } 

     if (A[i]>0){
        positiveCount++;
    }  else if(A[i]<0){
        negativeCount++;
        
    }
}
        cout << "Even: " << evenCount << endl;
        cout << "Odd: " << oddCount << endl;
        cout << "Positive: " << positiveCount << endl;
        cout << "Negative: " << negativeCount << endl;

    return 0;
}
