
int solve(int index, int operationNo, int k, vector<int> &prices){
    if(index == prices.size())
        return 0;
    
    if(operationNo == 2*k)
        return 0;

    int profit = 0;

    if(operationNo % 2 == 0){
        int buyStock = -prices[index] + solve(index+1,operationNo+1,k,prices);
        int skip = 0 + solve(index+1, operationNo, k, prices);
        profit = max(buyStock,skip);
    }else{
        int sellStock = prices[index] + solve(index+1,operationNo+1,k,prices);
        int skip = 0 + solve(index+1, operationNo, k, prices);
        profit = max(sellStock, skip);
    }

    return profit;
}

int solveMem(int index, int operationNo, int k, vector<int> &prices, vector<vector<int > > &dp){
    if(index == prices.size())
        return 0;
    
    if(operationNo == 2*k)
        return 0;
    
    if(dp[index][operationNo] != -1)
        return dp[index][operationNo];

    int profit = 0;

    if(operationNo % 2 == 0){
        int buyStock = -prices[index] + solve(index+1,operationNo+1,k,prices,dp);
        int skip = 0 + solve(index+1, operationNo, k, prices,dp);
        profit = max(buyStock,skip);
    }else{
        int sellStock = prices[index] + solve(index+1,operationNo+1,k,prices,dp);
        int skip = 0 + solve(index+1, operationNo, k, prices,dp);
        profit = max(sellStock, skip);
    }

    return dp[index][operationNo] =  profit;
}

int solveTab(int k, vecto<int> &prices){
    
    int n = prices.size();
    vector<vector<int > > dp(n+1,vectro<int>(2*k+1,0));
    
    for(int index = n-1; index >= 0; index--){
        for(int operationNo=0; operationNo < 2*k; operationNo++){
            int profit = 0;

            if(operationNo % 2 == 0){
                int buyStock = -prices[index] + dp[index+1][operationNo+1];
                int skip = 0 + dp[index][operationNo];
                profit = max(buyStock,skip);
            }else{
                int sellStock = prices[index] + dp[index+1][operationNo+1];
                int skip = 0 + dp[index][operationNo];
                profit = max(sellStock, skip);
            }
        }
    }

    return dp[0][0];
}

int solveSpaceOptimization(int k, vecto<int> &prices){

    int n = prices.size();
    // vector<vector<int > > dp(n+1,vectro<int>(2*k+1,0));
    vector<int> curr(2*k+1, 0);
    vector<int> next(2*k+1, 0);

    
    for(int index = n-1; index >= 0; index--){
        for(int operationNo=0; operationNo < 2*k; operationNo++){
            int profit = 0;

            if(operationNo % 2 == 0){
                int buyStock = -prices[index] + next[0];
                int skip = 0 + next[1];
                profit = max(buyStock,skip);
            }else{
                int sellStock = prices[index] + next[operationNo+1];
                int skip = 0 + next[operationNo];
                profit = max(sellStock, skip);
            }

            curr[operationNo] = profit;
        }
        next = curr;
    }

    return next[0];
}

int maxProfit(int k, vector<int> &prices){
    // solve(0,0,k,prices);

    // int n = prices.size();
    // vector<vector<int > > dp(n, vector<int>(n,-1));
    // solveMem(0,0,k,prices,dp);

    // solveTab(k,prices);

    solveSpaceOptimization(k, prices);
}