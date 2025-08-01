#include<bits/stdc++.h>
using namespace std;
int main(){
int n, k, a;
cin >>n >> k >> a;

//int result = (n*k)/a;
if((n*k)/a > 2147483647){
    cout << "long long " << endl;
}else if((n*k)/a <=  2147483647){
    cout << "int" << endl;
}

    return 0;
}