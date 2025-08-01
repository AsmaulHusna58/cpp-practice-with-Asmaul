#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int>& ans, int idx){
    if(index >= nums.size()){
        ans.push_back(nums);
        return ;
    }
    for(int j=index; j<nums.size(); j++){
        swap(nums[index], nums[j]);
        solve (nums, ans, index);

        //backtrack
        swap(nums[index], nums[j]);
    }

}
int main(){
    vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int> ans;
        int index =0;
        solve(nums, ans, index){
            return ans;
        }
    }
    


    return 0;
}