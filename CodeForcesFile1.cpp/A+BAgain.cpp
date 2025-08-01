#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    int last_digit = n%10;
    int first_digit = n/10;
    int result;
    for(int i=0; i<n; i++){
       result = (first_digit + last_digit);
       
    }
    cout << result << endl;
    
}

    return 0;
}