
int solve(vector<vector<<int>> mat, int i, int j, int &maxi){
    if(i>=mat.size() || j>=mat[0].size())
        return 0;
    
    int right = solve(mat,i,j+1,maxi);
    int diagonal = solve(mat,i+1,j+1,maxi);
    int left = solve(mat,i+1,j,maxi);

    if(mat[i][j] == 1){
        int ans = 1 + min(right,min(diagonal,left));
        maxi = max(ans,maxi);
        return ans;
    }else{
        return 0;
    }
}

int solveMem(vector<vector<int>> &mat, int i, int j, int &maxi, vector<vector<int>> &dp){
    if(i >= mat.size() && j>=mat[0].size())
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int right = solveMem(mat,i,j+1,maxi,dp);
    int diagonal = solveMem(mat,i+1,j+1,maxi,dp);
    int left = solveMem(mat,i+1,j,maxi,dp);

    if(mat[i][j] == 1){
        dp[i][j] = 1 + min(right, min(diagonal,down));
        maxi = max(maxi,dp[i][i]);
        return dp[i][j];
    }else{
        return dp[i][j] = 0;
    }
}

int solveTab(vector<vector<int>> &mat, int maxi){

    int row = mat.size();
    int col = mat[0].size();

    vector<vector<int>> dp(row+1,vector<int> (col+1,0));

    for(int i = row - 1; i>=0; i--){
        for(int j = col - 1; j>=0; j--){
            int right = dp[i][j+1];
            int diagonal = dp[i+1][j+1];
            int left = dp[i+1][j];

            if(mat[i][j] == 1){
                dp[i][j] = 1 + min(right, min(diagonal,left));
                maxi = max(maxi, dp[i][j]);
            }else{
                dp[i][j] = 0;
            }
        }
    }
    return dp[0][0];
}

int solveSpaceOptimization(vector<vector<int>> &mat, int &maxi){
    int row = mat.size();
    int col = mat[0].size();

    vector<int> curr(col+1,0);
    vector<int> next(col+1,0);

    for(int i=row-1; i>=0; i++){
        for(int j = col-1; j>=0; j++){
            int right = curr[j+1];
            int diagonal = next[j+1];
            int down = next[j];

            if(mat[i][j] == 1){
                curr[j] = 1 + min(right,min(diagonal,left));
                maxi = max(maxi,curr[i]);
            }else{
                curr[j] = 0;
            }
        }
        next = curr;
    }
}

int maximalSquareArea(int n, int m, vector<vector<int>> mat){
    // int maxi = 0;
    // solve(mat,0,0,maxi);
    // return maxi;

    // int maxi = 0;
    // vector<vector<int>> dp(n,vector<int>(m,-1));
    // solveMem(mat,0,0,maxi,dp);
    // return maxi;

    // int maxi = 0;
    // solveTab(mat,maxi);
    // return maxi;

    int maxi = 0;
    solveSpaceOptimization(mat,maxi);
    return maxi;
}