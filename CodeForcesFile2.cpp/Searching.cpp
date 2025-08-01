#include <iostream>
using namespace std;
int main(){
   int n;
   int position = -1;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }
   int target;
   cin >> target;
    
        for( int i=0; i<n; i++){
            if(arr[i] == target){
                position = i;
                break;
            }
            
           }
  cout << position << endl;
    
    return 0;
    }
   
   
