
int solve(vector<int> &nums, int n){
    // base case
    if(n<0)
        return 0;
    
    if(n==1)
        return nums[0];
    
    int incl = solve(nums, n-2) + nums[n];
    int excl = solve(nums,n-1) + 0;

    return max(incl,excl);
}

int solveMem(vector<int> &nums, vector<int> &dp, int n){
    if(n==0)
        return 0;
    
    if(n==1)
        return nums[0];
    
    if(dp[n] != -1)
        return dp[n]; 

    int incl = solve(nums, n-2) + nums[n];
    int excl = solve(nums, n-1) + 0;

    dp[n] = max(incl,excl);
    return dp[n];
}

int solveTab(vector<int> &nums){
    // int n = nums.size();
    // vector<int> dp(n,0);

    // dp[0] = 0;

    // for (int i = 1; i < n; i++)
    // {
    //     int incl = dp[i-2] + nums[i];
    //     int excl = dp[i-1] + 0;
    //     dp[i] = max(incl,excl);
    // }

    // return dp[n-1];

    int n = nums.size();

    int prev1 = 0;
    int prev2 = nums[0];

    for(int i = 1; i < n; i++)
    {
        int incl = prev1 + nums[0];
        int excl = prev2 + 0;
        int ans = max(incl,excl);

        prev1 = prev2;
        prev1 = ans;
    }

    return prev1;
}

int maxNonAdjacentSum(vector<int> &nums){
    // int n = nums.size();
    // int ans = solve(nums, n);
    // return ans;

    // int n = nums.size();
    // vector<int> dp(n, -1);
    // return solveMem(nums,dp,n);

    int n = nums.size();
    return solveTab(nums);
}