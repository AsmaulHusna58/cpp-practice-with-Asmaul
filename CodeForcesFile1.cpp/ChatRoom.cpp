#include<bits/stdc++.h>
using namespace std;
int main(){
string s, b = "hello";
cin >> s;
int j=0;
for(int i=0; i<s.size(); i++){
    if(s[i] == b[j]){
        j++;
    }
}
cout << (j == 5 ? "YES" : "NO");

    return 0;
}