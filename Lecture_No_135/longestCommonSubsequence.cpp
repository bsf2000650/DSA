
int solve(string &text1, string &text2, int i, int j){
    if(i == a.length())
        return 0;
    if(j == a.length())
        return 0;
    
    int ans = 0;

    if(a[i] == b[j])
        ans =  1 + solve(text1, text2, i+1, j+1);
    else
        ans = max(solve(a,b,i+1,j),solve(a,b,i,j+1));
    
    return ans;
}

int solveMem(string &text1, string &text2, int i, int j, vector<vector<int > > &dp){
    if(i == a.length())
        return 0;
    if(j == a.length())
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int ans = 0;

    if(a[i] == b[j])
        ans =  1 + solve(text1, text2, i+1, j+1, dp);
    else
        ans = max(solve(a,b,i+1,j, dp),solve(a,b,i,j+1, dp));
    
    return dp[i][j] = ans;
}

int solveTab(string &a, string &b){

    vector<vector<int > > dp(text1.length()+1, vector<int>(text2.length()+1,0));

    for(int i=a.lengt()-1; i>=0; i--){
        for(int j=b.length()-1; j>=; j--){
            int ans = 0;

            if(a[i] == b[j])
                ans =  1 + dp[i+1][j+1];
            else
                ans = max(dp[i+1][j],dp[i][j+1]);
            
            dp[i][j] = ans;
        }
    }
    return dp[0][0];
}

int spaceOptimization(string &a, string &b){

    // vector<vector<int > > dp(text1.length()+1, vector<int>(text2.length()+1,0));
    vector<int> next(a.length()+1, 0);
    vector<int> curr(b.length()+1, 0);

    for(int i=a.lengt()-1; i>=0; i--){
        for(int j=b.length()-1; j>=; j--){
            int ans = 0;

            if(a[i] == b[j])
                ans =  1 + next[i+1];
            else
                ans = max(next[j], curr[j+1]);
            
            curr[j] = ans;
        }
        curr = next;
    }
    return next[0];
}

int longestCommonSubsequence(strint text1, string text2){
    // return solve(text1, text2, 0, 0);
    // vector<vector<int > > dp(text1.length(), vector<int>(text2.length(),-1));
    // return solveMem(text1, text2, 0, 0, dp)

    solveTab(text1, text2);
}