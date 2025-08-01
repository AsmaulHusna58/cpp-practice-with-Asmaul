#include<bits/stdc++.h>
using namespace std;

void TowerofHanoi(int n, char a, char b, char c){
    if(n==1){
        cout << a << " " << c << endl;
        return;
    }else{
        TowerofHanoi(n-1, a , c, b);
        cout << a << " " << c << endl;
        TowerofHanoi(n-1, b, a, c);
    }
}

int main(){
int n;
TowerofHanoi(3, 'A', 'B', 'C');


    return 0;
}