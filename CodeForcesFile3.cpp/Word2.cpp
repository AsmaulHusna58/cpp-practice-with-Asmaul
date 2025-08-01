#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;

int M =0, m = 0;
for(int i=0; i<s.length(); i++){
    if(isupper(s[i])){
        M++;
    }
    if(islower(s[i])) {
        m++;
    }
 }

 if(M>m){
        cout << (char)toupper(s[i]);
    }else if(M==m){
        cout << (char)tolower(s[i]);
    }else{
        cout << (char)tolower(s[i]);
    }
    


    return 0;
}