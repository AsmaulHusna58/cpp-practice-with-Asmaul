#include<iostream>
using namespace std;
int main(){
  int n,  evenSum=0;
  cout << "Enter n: ";
  cin>> n;

  for(int i=1; i<=n; i++ ){
    if(n%i == 0){
        evenSum+=i;
    }
  }

  cout << "Sum of the even numbers: " << evenSum << endl;
  return 0;

}