#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n; 
    cin >> n;
    int A[n], cnt[10000]={};
    int f = 0;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }

        for(int i=0; i<n; i++){
            cnt[A[i]] ++;
            if(cnt[0] >=3 && cnt[1] >=1 && cnt[2] >=2 && cnt[5] >=1 && cnt[3] >=1){
                f = 1;
                cout << i+1 << endl;
                break;
            }
        }
        if(!f){
            cout << 0 << endl;
        }
        
    }

}