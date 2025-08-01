#include <iostream>
using namespace std;
int main(){
    int nums[5];
    cout << "Enter the array element : ";
    for(int i=0; i<5; i++){
        cin >> nums[i];   
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index;
    int indexLargest;

    for(int i=0; i<5; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
             index = i;
        }
        if(nums[i]> largest){
            largest = nums[i];
            indexLargest = i;
        }
    }

    cout << "Smallest : " << smallest << endl;
    cout << "Largest : " << largest << endl;
    cout << "Smallest index : " << index  << endl;
    cout << "Largest index : " << indexLargest << endl;


    return 0;
}