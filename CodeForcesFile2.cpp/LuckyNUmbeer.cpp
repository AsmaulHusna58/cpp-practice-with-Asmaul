#include<iostream>
using namespace std;
int main(){
int A, B;
cin >> A >> B;

for(int i=A; i<=B; i++){
    if(i==4 && i==7){
        cout << i << " ";
    }else{
        cout << "-1" << endl;
    }
}

    return 0;
}
