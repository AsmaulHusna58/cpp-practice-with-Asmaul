#include<iostream>
using namespace std;
int main()
{
    int n, i=1, oddSum=0;
    cout << "Enter the number of n: ";
    cin >> n;

    while (i<=n){

        if(n%i !=0){
            oddSum +=i;
        }
        i++;
    }

    cout<< "Sum of the all odd numbers:"<< oddSum << endl;
    cout << "\n\n";
    return 0;



}