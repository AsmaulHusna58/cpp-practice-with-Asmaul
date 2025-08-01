#include <iostream>
using namespace std;
int main(){
  int N;
  cin >> N;
  int A[N];
  for(int i=0; i<N; i++){
    cin >> A[i];
  }
   int counter =1;
  while(counter<N){
    for(int i=0; i< N-1; i++){
        if(A[i] > A[i+1]){
            int temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
        
    }
    counter ++;
  }
    


for(int i=0; i<N; i++){
    cout << A[i] << " ";
}
cout << endl;

    return 0;
}