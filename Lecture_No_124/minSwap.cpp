#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &nums1[], vector<int> &nums2[],int index, bool swapped){
    // base case
    if(index == nums1.size())
        return 0;
    
    int ans = __INT_MAX__;

    int prev1 = nums1[index-1];
    int prev2 = nums2[index-1];

    // catch
    if(swapped)
        swap(prev1, prev2);
    
    // noswap
    if(nums1[index] > prev1 && nums2[index] > prev2)
        ans = solve(nums1,nums2,index+1,0);
    
    // swap
    if(nums1[index] > prev2 && nums2[index] > prev1)
        ans = min(ans,1+solve(nums1, nums2,index+1,1));

    return ans;
}

int solve(vector<int> &nums1[], vector<int> &nums2[],int index, bool swapped, vector<vector<int>> &dp){
    // base case
    if(index == nums1.size())
        return 0;
        
    if(dp[index][swapped] != -1)
        return dp[index][swapped];
    
    int ans = __INT_MAX__;

    int prev1 = nums1[index-1];
    int prev2 = nums2[index-1];

    // catch
    if(swapped)
        swap(prev1, prev2);
    
    // noswap
    if(nums1[index] > prev1 && nums2[index] > prev2)
        ans = solve(nums1,nums2,index+1,0,dp);
    
    // swap
    if(nums1[index] > prev2 && nums2[index] > prev1)
        ans = min(ans,1+solve(nums1, nums2,index+1,1,dp));

    return dp[index][swapped] = ans;
}

int solveTab(vector<int> &nums1, vector<int> &nums2){

    int n = nums1.size();
    vector<vector<int>> dp(n+1, vector<int> (2,0));

    for(int index = n-1; index >= 0; index--){
        for(int swapped = 1; swapped >= 0; swapped--){
            int ans = __INT_MAX__;

            int prev1 = nums1[index-1];
            int prev2 = nums2[index-1];

            // catch
            if(swapped)
                swap(prev1, prev2);
            
            // noswap
            if(nums1[index] > prev1 && nums2[index] > prev2)
                ans = dp[index+1][0];
            
            // swap
            if(nums1[index] > prev2 && nums2[index] > prev1)
                ans = min(ans, 1 + dp[index+1][1]);
            }

            dp[index][swapped] = ans;
    }
    return dp[1][0];
}

int spaceOptimization(vector<int> &nums1, vector<int> &nums2){

    int n = nums1.size();

    int swap = 0;
    int noSwap = 0;
    int currSwap = 0;
    int currNoSwap = 0;

    for(int index = n-1; index >= 0; index--){
        for(int swapped = 1; swapped >= 0; swapped--){

            int ans = __INT_MAX__;
            int prev1 = nums1[index-1];
            int prev2 = nums2[index-1];

            // catch
            if(swapped){
                int temp = prev1;
                prev1 = prev2;
                prev2 = temp;
            }
            
            // noswap
            if(nums1[index] > prev1 && nums2[index] > prev2)
                ans = noSwap;
            
            // swap
            if(nums1[index] > prev2 && nums2[index] > prev1)
                ans = min(ans, 1 + swap);

            if(swapped)
                currSwap = ans;
            else
                currNoSwap;
            
            swap = currSwap;
            noSwap = currNoSwap;

            }      
    }
    return min(swap,noSwap);
}

int minSwap(vector<int> nums1[], vector<int> nums2[]){

    nums1.insert(nums1.begin(),-1);
    nums2.insert(nums2.begin(),-1);

    int n = nums1.size();
    vector<vector<int>> dp(n,vector<int> (2,-1));

    bool swapped = 0;
    // return solve(nums1,nums2,0,swapped);
    // return solveMem(nums1,nums2,1,swapped,dp);

    // return solveTab(nums1, nums2);
    return spaceOptimization(nums1, nums2);

}

int main(){

}