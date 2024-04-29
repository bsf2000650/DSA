#define MOD 100000007
#include<limits.h>
#include<vector>

int add(int a, int b){
    return (a%MOD + b%MOD) % MOD;
}

int multiply(int a, int b){
    return ((a%MOD)*1LL * (b%MOD)) % MOD;
}

int solve(int n, int k){
    // base case
    if(n==1)
        return k;
    
    if(n==2)
        return add(k,multiply(k,k-1));
    
    int ans = add(multiply(solve(n-2,k),k-1),multiply(solve(n-1,k),k-1));
    return ans;
}

int solveMem(int n, int k, vector<int> &dp){
    if(n==1)
        return k;
    
    if(n==2)
        return add(k,multiply(k,k-1));

    if(dp[n] != -1)
        return dp[n];
    
    dp[n] = add(multiply(solve(n-2,k),k-1),multiply(solve(n-1,k),k-1));

    return dp[n];
}

int solveTab(int n, int k){

    vector<int> dp(n+1,0);
    dp[1] = k;
    dp[2] = add(k, multiply(k,k-1));

    for (int i = 3; i <= n; i++)
    {
        dp[i] = add(multiply(dp[i-2],k-2),multiply(dp[i-1],k-1));
    }

    return dp[n];
}

int spaceOptimization(int n, int k){

    int prev1 = k;
    int prev2 = add(k,multiply(k,k-1));

    for (int i = 3; i <= n; i++)
    {
        int ans = add(multiply(prev1,k-1),multiply(prev2,k-1));
        prev1 = prev2;
        prev2 = ans;
    }

    return prev1;
}

int numberOfWays(int n, int k){
    // return solve(n,k);
    vector<int> &dp(n);
    return solveMem(n,k,dp);
}