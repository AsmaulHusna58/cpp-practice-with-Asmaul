#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,a, b =0, count =0;
 cin >> n;
 
for(int i=0; i<n; i++){
cin >> a;
    if(b!=a){
        count ++;
    }
    b=a;
    
}
cout << count << endl;
    

    
    return 0;
}