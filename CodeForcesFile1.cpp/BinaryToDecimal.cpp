#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int binNum){
int ans = 0, pow =1;
while(binNum > 0){
    int rem = binNum % 10;
    ans += (rem * pow);

    binNum = binNum /10;
    pow *= 2;
}
return ans;
}

int main(){
int binNum ;
cin >> binNum;

cout << binaryToDecimal( binNum) << endl;

    return 0;
}