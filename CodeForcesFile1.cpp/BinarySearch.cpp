#include<bits/stdc++.h>
using namespace std;
int main(){
int N, Q, X;
cin >> N >> Q;
vector<int> A(N);
for(int i=0; i<N; i++){
    cin >> A[i];
}

sort(A.begin(), A.end());

while(Q--){
  cin >> X;
  int st =0, end = A.size() -1;
  int f =1;
  while(st <= end){
    int mid = (st + end)/2;
    if(X == A[mid]){
          cout << "found" << endl;
          f=0;
          break;
      }else if(X > A[mid]){
        st = mid + 1;
      }
    else if(X < A[mid]){
      end = mid -1;
      
    }
  }
  if(f){
    cout << "not found" << endl;
  }
}
  
}


 