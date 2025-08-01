#include <iostream>
using namespace std;
int changeX(int x){
    x = 2 * x;
    cout << "X : " << x << endl;
}

int main(){
   int x =5; 
   cout << "X : " << x << endl;
   changeX(x);
   cout << "X : " << x << endl;
   


   

    return 0;
}