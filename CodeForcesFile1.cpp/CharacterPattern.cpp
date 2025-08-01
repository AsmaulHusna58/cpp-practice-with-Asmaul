

#include<iostream>
using namespace std;
int  main(){
  int n;
  char ch =1;
  cout << "Enter n: ";
  cin >> n;

  for(int i=1; i<=n; i++){
    
    for(int j=1; j<=n; j++){
        cout << ch+64 << " ";
        ch++;
    }
    cout << endl;
  }
  return 0;

}