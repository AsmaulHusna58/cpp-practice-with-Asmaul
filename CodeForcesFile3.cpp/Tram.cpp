#include<bits/stdc++.h>
using namespace std;
int main(){
int n, a, b, s = 0, sum =0;
cin >> n;

while(n--){
    cin >> a >> b;
s = s-a+b;
if(s>sum){
    sum = s;
}
}
cout << sum << endl;

 return 0;
}