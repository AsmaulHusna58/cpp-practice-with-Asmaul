#include<bits/stdc++.h>
using namespace std;

void tower(int n, char beg, char aux, char end, int &count){
    if(n <= 0){
        cout << "ERROR" << endl;
    }else if(n == 1){
        cout << "move disk " << beg << " to " << end<< endl;
        count ++;
    }else{
        tower(n - 1, beg, end, aux, count);
        tower(1, beg, aux, end, count);
        tower(n-1, aux, beg, end, count);
    }
}

int main(){
int n;
cout << "Enter the number of disk: " << endl;
cin >> n;
char A, B, c;
int count =0; 
tower(n, 'A', 'B', 'C', count);
cout << "Counted step by recursion : " << count << endl;

int x = pow(2, n) - 1;
cout << "Counted step by formula: " << x << endl;


return 0;
}