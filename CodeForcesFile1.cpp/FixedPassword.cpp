#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n =5;
    vector<int> inputs;
    vector<string> results;
    
    for(int i=0; i<n; i++){
    int X;
    cin >> X;
    inputs.push_back(X);
    }

    for(int i=0; i<n; i++){
        if(inputs[i] == 1999){
            results.push_back("Correct");
            break;
        }else{
            results.push_back("Wrong");
        }
    }

    for(string res : results){
        cout << res << endl;
    }
        
    

    return 0;
}