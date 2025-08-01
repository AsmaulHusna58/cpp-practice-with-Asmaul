#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while (t--){
    int num[3];
  for(int i=0; i<3; i++){
    cin >> num[i];
  }

    sort(num, num+3);
    cout<< num[1] << endl;
}

    return 0;
}