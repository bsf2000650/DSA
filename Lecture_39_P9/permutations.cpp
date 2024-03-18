#include<iostream>
#include<vector>
using namespace std;

void printVector(const vector<vector<int>>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec[i].size(); ++j) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

void solve(vector<int> nums, int index, vector<vector<int>>& ans){
    //base case
    if(index >= nums.size()){
        ans.push_back(nums);
        return ;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums,index+1,ans);
        // backtracking
        swap(nums[index],nums[j]);
    }
    
}

vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>> ans;
    int index = 0;
    solve(nums,index,ans);
    return ans;
}

int main(){

    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = permute(nums);

    printVector(ans);

}