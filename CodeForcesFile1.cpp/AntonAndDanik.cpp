#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
string s;
cin >> s;

int max = 0, min = 0;
for(int i=0; i<s.length(); i++){
    if(s[i] == 'A'){
        max++;
    }else{
        min ++;
    }
}

if(max>min){
    cout << "Anton" << endl;
}else if(max<min) {
    cout << "Danik" << endl;
}else if(max == min){
    cout << "Friendship" << endl;
}

    return 0;
}