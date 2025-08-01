#include <bits/stdc++.h>
using namespace std;
int main(){

int T;
cin >> T;
while (T--){
int N;
cin >> N;
vector <long long> A(N);
for(int i=0; i<N; i++){
    cin >> A[i];
}


long long min_sum = LLONG_MAX;

for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
       min_sum = min(min_sum, A[i] + A[j] + j - i);
    }
}
cout << min_sum << endl;


}

    return 0;
}