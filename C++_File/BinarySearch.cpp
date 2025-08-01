#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr2, int tar2){
    int st = 0, end = arr2.size() - 1; 

    while(st <= end){
        int mid = (st + end)/2;

        if(tar2 > arr2[mid]){
            st = mid + 1;
        }else if(tar2 < arr2[mid]){
            end = mid -1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){

    //vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    //int tar1 = 20;
    //cout << binarySearch(arr1, tar1) << endl;

    vector<int> arr2 = {-1, 0, 4, 5, 9, 12};
    int tar2 = 0;
    cout << binarySearch(arr2, tar2) << endl;

    return 0;
}