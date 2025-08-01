#include <bits/stdc++.h>
using namespace std;
int main(){
int A, B;
cin >> A >> B;
string S;
cin >> S;
 
for(int i=0; i<A+B+1; i++){
    if(S[A] != '-' && (S[i] <= '0' || S[i] >='9')){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

    return 0;
}