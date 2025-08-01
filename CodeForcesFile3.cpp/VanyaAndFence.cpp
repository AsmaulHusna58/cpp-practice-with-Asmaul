#include<bits/stdc++.h>
using namespace std;
int main(){
int n, h, a;
cin >> n >> h;
int sum =0;

while(n--){
    cin >> a;
     sum += a > h ? 2 : 1;
}
cout << sum << endl;


    return 0;
}