#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    string a;
    cin >> a;
    for(int i= a.size() - 1; i>=0; i--){
        if(a[i] == 'p'){
            cout << 'q'; 
        }
        if(a[i] == 'q'){
            cout << 'p';
        }
        if(a[i] == 'w'){
            cout << 'w';
        }
    }
    cout << endl;
}

    return 0;
}