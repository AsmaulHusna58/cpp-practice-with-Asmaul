#include <iostream>
using namespace std;
int main(){
     int N;
     cin >> N;
     int A[N];
     for(int i=0; i<N; i++){
        cin >> A[i];
     }

     int count_min_odd =0;
     int min_odd = A[0];

     for(int i=0; i<N; i++){
        if( A[i]<min_odd){
            min_odd = A[i];
            
        }
     }
     
     for(int i=0; i<N; i++){
            if(A[i] == min_odd){
                count_min_odd++;
            }
        
     }
     

     if(count_min_odd %2 != 0){
        cout << "Lucky" << endl;
     }else{
        cout << "Unlucky" << endl;
     }

    return 0;
}