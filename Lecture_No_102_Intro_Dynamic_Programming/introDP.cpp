#include<iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int> &dp){
    // base case
    if(n <= 1)
        return n;
    
    // step 3
    if(dp[n] != -1)
        return dp[n];
    
    // step 2
    dp[n] = fib(n-1,dp) + fib(n-2,dp);
    return dp[n];
}

int main(){

    int n;
    cin >> n;

    // step 1
    vector<int> dp(n+1);
    // for (int i = 0; i <= n; i++)
    // {
    //     dp[i] = -1;
    // }

    // cout << fib(n,dp) << endl;

    // dp[0] = 0;
    // dp[1] = 1;

    // for (int i = 2; i <= n; i++)
    //     dp[i] = dp[i-1] + dp[i-2];
    
    // cout << dp[n] << endl;

    int prev1 = 0;
    int prev2 = 1;

    if(n == 0)
        return prev1;

    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;
        // shift logic
        prev1 = prev2;
        prev2 = curr;
    }
    
    cout << prev2 << endl;
    return 0;
}