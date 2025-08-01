#include <iostream>
using namespace std;
 
int SumOfDigit (int num){
    int digitsum =0;
    while (num>0){
        int lastDigit = num % 10;
        num /= 10;
        digitsum += lastDigit;
    }
    return digitsum;
}

    int main(){
        cout << "Sum of digit : "<< SumOfDigit(145) << endl;
        return 0;
    }
