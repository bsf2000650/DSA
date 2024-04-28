#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solveRec(vector<int> &coins, int target){
    // base case
    if(target==0)
        return 0;
    
    if(target==1)
        return 1;
    
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solveRec(coins, target-coins[i]);
        if(ans != INT_MAX)
            mini = min(mini,1+ans);
    }

    return mini;
}

int solveMem(vector<int> &coins, int target, vector<int> &dp){
    // base case
    if(target==0)
        return 0;
    
    if(target < 0)
        return INT_MAX;

    if(dp[target] != -1)
        return dp[target];

    int mini = INT_MAX;

    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solveRec(coins, target-coins[i]);
        if(ans != INT_MAX)
            mini = min(mini, 1+ans);
    }
    dp[target] = mini;
    return mini;  
}

int solveTab(vector<int> &coins, int target){

    vector<int> dp(target+1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= target; i++)
    {
        for (int j = 0; i < coins.size(); j++)
        {
            if(i-coins[j] >= 0 && dp[i-coins[j]] != INT_MAX)
                dp[i] = min(dp[i], 1+dp[i-coins[j]]);
        }
    }

    if(dp[target] == INT_MAX)
        return -1;
    
    return dp[target];
}



int minimumAddedCoins(vector<int>& coins, int target) {
    // int ans = solveRec(coins,target);
    // if(ans==INT_MAX)
    //     return -1;

    // vector<int> dp(target+1, -1);
    // int ans = solveMem(coins,target,dp);
    // if(ans == INT_MAX)
    //     return -1;
    // else
    //     return ans;

    return solveTab(coins,target);

}

int main(){
    int n  = 3;
    vector<int> coins(n);
    for(int i = 0; i<n; i++){
        coins[i] = i+1;
    }
    cout << minimumAddedCoins(coins,5) << endl;
}