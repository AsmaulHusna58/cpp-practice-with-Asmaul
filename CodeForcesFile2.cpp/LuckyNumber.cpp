#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int last_digit = N % 10;
int first_digit = N / 10;
if((last_digit != 0 && first_digit % last_digit == 0) || (first_digit != 0 && last_digit % first_digit == 0)){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}

    return 0;
}