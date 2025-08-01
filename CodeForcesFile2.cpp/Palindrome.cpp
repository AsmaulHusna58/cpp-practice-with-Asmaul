#include <iostream>
using namespace std;
int main(){
   int N, i, j;
   cin >> N;
   int A[N], B[N];
   for(i=0; i<N; i++){
    cin >> A[i];
   }
  
for(i=0, j=N-1; j>=0; i++, j--){
 B[j] = A[i] ;
 
}
bool isPalindrome = true;
for(i=0; i<N; i++){
    if(A[i] != B[i]){
        isPalindrome = false;
        break;
    }
}

if(isPalindrome){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}

    return 0;
}