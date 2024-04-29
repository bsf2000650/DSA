#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &nums, int tar){
    // base case
    if(tar < 0 )
        return 0;
    
    if(tar == 0)
        return 1;
    
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans += solve(nums,tar-nums[i]);
    }

    return ans;
}

int solveMem(vector<int> &nums, int tar, vector<int> &dp){
    // base case
    if(tar < 0)
        return 0;
    
    if(tar == 0)
        return 0;

    if(dp[tar] != -1)
        return dp[tar];
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans += solveMem(nums,tar-nums[i],dp);
    }
    dp[tar] = ans;
    return dp[tar];
}

int solveTab(vector<int> &nums, int tar){
    vector<int> dp(tar+1,-1);
    dp[0] = 1;

    for (int i = 0; i <= tar; i++)
    {
        for (int j = 1; i <= nums.size(); j++)
        {
            if(i-nums[j] >= 0)
                dp[i] += dp[i-nums[j]];
        }
        
    }
    return dp[tar];
}

int findWays(vector<int> &nums, int tar){
    // return solve(nums,tar);
    // vector<int> dp(tar+1,-1);
    // return solveMem(nums,tar,dp);

    return solveTab(nums,tar);
}

int main(){

}