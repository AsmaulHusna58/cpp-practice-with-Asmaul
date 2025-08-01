#include<bits/stdc++.h>
using namespace std;

int recBSc(vector<int> arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end - st)/2;

        if(tar> arr[mid]){
            return recBSc(arr, tar, mid+1, end);
        }else if(tar < arr[mid]){
            return recBSc(arr, tar, st, mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 9;
    cout << recBSc(arr, tar, 0, arr.size()-1) << endl;

    return 0;
}