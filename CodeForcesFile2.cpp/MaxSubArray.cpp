#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout<<"YES"<<endl;
#define no 
int main (){
  int T;
  cin >> T;

  while(T--){
ll N;
  cin >> N;
  vector<int> A(N);
  for(int i=0; i<N; i++){
    cin >> A[i];
  }
     
  for(int i=0; i<N; i++){
    int max=INT_MIN;
    for(int j=i; j<N; j++){
    if(max < A[j]){
      max = A[j];
    }
    cout << max << " ";
  }
  
  }
  cout << endl;
}
    return 0;
}

  
    