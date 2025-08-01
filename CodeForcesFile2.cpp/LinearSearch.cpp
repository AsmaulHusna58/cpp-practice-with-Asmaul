#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1; 
}

int main(){
    int arr[] = {2, 4, 7, 8, 1, 3, 5};
    int target = 20;
    int size = 7;
    cout << linearSearch(arr, size, target) << endl;

    return 0;
}