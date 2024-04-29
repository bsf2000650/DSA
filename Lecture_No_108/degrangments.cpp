#define MOD 1000000007;

long long int solveMem(int n, vector<long long int> &dp){
    // base case
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    
    if(dp[n] != -1)
        return dp[n];
    
    dp[n] = ((n-1)%MOD * (countDegrangments(n-1,dp)%MOD) + (countDegrangments(n-2,dp)%MOD))%MOD;

    return dp[n];
}

long long int solveTab(int n){
    

    long long int prev1 = 0;
    long long int prev2 = 1;

    for(int i = 3; i <= n; i++)
    {
        long long int first = prev2 % MOD;
        long long int second = prev1 % MOD;
        long long int sum = (first+second) % MOD;

        long long int ans = ((i-1)*sum)%MOD;
        prev1 = prev2;
        prev2 = ans;
    }

    return prev1;
}

long long int countDegrangments(int n){
    // if(n==1)
    //     return 0;
    // if(n==2)
    //     return 1;
    
    // int ans = ((n-1)%MOD * (countDegrangments(n-1)%MOD) + (countDegrangments(n-2)%MOD))%MOD;

    // return ans;

    // vector<long long int> dp(n+1,-1);
    // return solveMem(n,dp);

    return solveTab(n);
}