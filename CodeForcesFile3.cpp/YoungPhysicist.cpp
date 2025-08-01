#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
int A[t*3];
int sum1 = 0, sum2 = 0, sum3 = 0;
for(int i=0; i<t*3; i++){
    cin >> A[i];
}

    for(int i=0; i<t*3; i+=3){
      sum1 = sum1 + A[0+i];
      sum2 = sum2 + A[1+i];
      sum3 = sum3 + A[2+i];
    }


 if(sum1 == 0 && sum2 == 0 && sum3 == 0){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

 return 0;
}