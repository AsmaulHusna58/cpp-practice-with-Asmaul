#include<bits/stdc++.h>
using namespace std;
int main(){
char s[1000];
cin >> s;
int count = 0, min = 0;

for(int i=0; i<strlen(s); i++){
    if(s[i] < 'a'){
        count ++;
    }else{
       min++;
    }
}
if(count > min){
    cout << strupr(s);
}else{
    cout << strlwr(s);
}

 return 0;
}