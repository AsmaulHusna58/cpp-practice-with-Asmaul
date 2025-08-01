#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
  string s;
  for(int i=0; i<10; i++){
    cin >> s[i];
  }  

  int count =0;

  string st = "codeforces";
  for(int i=0; i<10; i++){
    if(s[i] != st[i]){
        count++;
    }
  }
  cout << count << endl;
}

    return 0;
}