
#include <iostream>
using namespace std;
int main(){
    int n; 
    char ch =1;
    cout << "Enter n: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << i+64 << " ";
            ch++;
        }
        cout << endl;
    }
    return 0; 
}