#include<bits/stdc++.h>
using namespace std;
int main(){
long long k, n, w;
cin >> k >> n >> w;
long long sum = 0;
for(int i=1; i<=w; i++){
    sum += (i*k);
}
sum -= n;
if(sum > 0){
 cout << sum << endl;
} else{
    cout << "0" << endl;
}

    return 0;
}