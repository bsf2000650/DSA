
int solve(int index, int buy, vector<int> &prices, vector<vector<int>> &dp){
    if(index == prices.size())
        return 0;
    
    if(dp[index][buy] != -1)
        return dp[index][buy];
    
    int profit = 0;
    if(buy){
        int buyStock = -prices[index] + solve(index+1,0,prices, dp);
        int sellStock = 0 + solve(index+1,1,prices, dp);
        profit = max(buyStock,sellStock);
    }else{
        int buyStock = prices[index] + solve(index+1,1,prices, dp);
        int sellStock = 0 + solve(index+1,0,prices, dp);
        profit = max(buyStock,sellStock);
    }
    return dp[index][buy] = profit;
}

int solveTab(vector<int> &prices){

    int n = prices.size();
    vector<vector<int > > dp(n+1, vector<int>(n,0));

    for(int index = n-1; index >= 0; index--){
        for(int buy = 0; buy <= 1; buy++){
            int profit = 0;
            if(buy){
                int buyStock = -prices[index] + dp[index+1][0];
                int sellStock = 0 + dp[index+1][1];
                profit = max(buyStock,sellStock);
            }else{
                int buyStock = prices[index] + dp[index+1][1];
                int sellStock = 0 + dp[index][0];
                profit = max(buyStock,sellStock);
            }
            dp[index][buy] = profit;
        }
    }
    return dp[0][1];
}

int spaceOptimization(vector<int> &prices){

    int n = prices.size();
    // vector<vector<int > > dp(n+1, vector<int>(n,0));
    vector<int> curr(2,0);
    vector<int> next(2,0);

    for(int index = n-1; index >= 0; index--){
        for(int buy = 0; buy <= 1; buy++){
            int profit = 0;
            if(buy){
                int buyStock = -prices[index] + next[0];
                int sellStock = 0 + next[1];
                profit = max(buyStock,sellStock);
            }else{
                int buyStock = prices[index] + next[1];
                int sellStock = 0 + next[0];
                profit = max(buyStock,sellStock);
            }
            curr[buy] = profit;
        }
        next = curr;
    }
    return next[1];
}

int maxProfit(vector<int> &prices){
    // int n = prices.size();
    // vector<vector<int> > dp(n, vector<int> (2,-1));
    // return solve(0, 1, prices,dp);

    return solveTab(prices);
}