#include <iostream>
using namespace std;
int main(){
   int n;
   char ch=1;
   cout << "Enter n:";
   cin >> n;

   for(int i=0; i<n; i++){
    for(int j=i+1; j>0; j--){
        cout << (char)(ch+645) << " ";
        ch++;
    }
    cout << "\n";
   }
    return 0;
}