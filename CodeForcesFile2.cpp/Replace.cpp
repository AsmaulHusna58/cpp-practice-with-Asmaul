#include <iostream>
using namespace  std;
int main(){
     int n; 
     cin >> n;
     int i;
     int arr[n];
     for(int i=0; i<n; i++){
        cin >> arr[i];
     }

     for(int i=0; i<n; i++){
        if(i>0 == 1 || i<0 == 2 || i==0){
            cout << arr[i] << endl;
         } 

    
     }
     
    return 0;
}