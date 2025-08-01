#include<bits/stdc++.h>
using namespace std;
int mian(){
int n;
cin >> n;
while(n--){
    string s1, s2;
    cin >> s1 >> s2;
   string res = swap(s1, s2);
    cout << res << endl;
}
}