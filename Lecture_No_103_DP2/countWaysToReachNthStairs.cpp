// #define MOD 100000007
// int solve(long long nStairs, int i){
//     if(i == nStairs)
//         return 1;
    
//     if(i > nStairs)
//         return 0;
    
//     return (solve(nStairs,i+1) + solve(nStairs,i+2)) % MOD;
// }

// int countDistinctWays(long long nStairs){
//     int ans = solve(nStairs, 0);
//     return ans;
// }

int solve(vector<int> &cost, int n, vector<int> &dp){
    if(n==0)
        return cost[0];
    if(n==1)
        return cost[1];
    
    // step 3
    if(dp[n] != 1)
        return dp[n];
    
    dp[n] = cost[n] +  min(solve(cost,n-1,dp)+solve(cost,n-2,dp));

    return dp[n];
}

int solve3(vector<int> &cost, int n){
    // step1: creation of dp array
    vector<int> dp(n+1);

    // step2: base case analyse
    dp[0] = 0;
    dp[1] = 0;

    // step3: 
    for(int i = 2; i<n; i++){
        dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
    }

    return min(dp[i-1],dp[i-2]);
}

int solve4(vector<int> &cost, int n){
    int prev1 = cost[0];
    int prev2 = cost[1];

    for(int i = 0; i<n; i++){
        int curr = cost[i] + min(prev1,prev2);
        prev1 = prev2;
        prev2 = curr
    }

    return min(prev1,prev2);
}

int minCostClimbingStairs(vector<int>& cost) {
    // int n = cost.size();
    // // step 1
    // vector<int> dp(n+1, -1);
    // int ans = min(solve(cost,n-1,dp) + solve(cost,n-2,dp));
    // return ans;

    int n = cost.size();
    return solve3(cost,n);
}

