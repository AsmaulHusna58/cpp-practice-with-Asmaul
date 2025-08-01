#include <iostream>
using namespace std;
int main(){
    int n, SumAll=0;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%3 == 0){
            SumAll += i;
        }
        
    }
    cout << "Sum : " << SumAll << endl;
    return 0;
}