#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(int n, vector<int> &days, vector<int> &cost, int index){

    if(index >= n)
        return 0;
    
    // 1 day pass
    int option1 = cost[0] = solve(n,days,cost,index+1);

    // 7 day pass
    int i;
    for(int i = index && days[i] < days[index] + 7; i++);
    int option2 = cost[1] + solve(n,days,cost,i);

    // 30 day pass
    for(int i = index && days[i] < days[index] + 30; i++);
    int option3 = cost[2] + solve(n,days,cost,i);

    return min(option1,min(option2,option3));
}

int solveMem(int n, vector<int> &days, vector<int> &cost, int index, vector<int> &dp){

    if(index >= n)
        return 0;

    if(dp[index] != -1)
        return dp[index];
    
    // 1 day pass
    int option1 = cost[0] = solve(n,days,cost,index+1,dp);

    // 7 day pass
    int i;
    for(int i = index; i<n && days[i] < days[index] + 7; i++);
    int option2 = cost[1] + solve(n,days,cost,i,dp);

    // 30 day pass
    for(int i = index; i<n && days[i] < days[index] + 30; i++);
    int option3 = cost[2] + solve(n,days,cost,i,dp);

    dp[index] = min(option1,min(option2,option3));
    return dp[index];
}

int solveTab(int n, vector<int> &days, vector<int> &cost){
    vector<int> dp(n+1, INT_MAX);
    dp[n] = 0;
    for(int k = n-1; k>=0; k--){
        // 1 day pass
        int option1 = cost[0] - dp[k+1];

        int i;
        // 7 day pass
        for(i=k; i<n && days[i] < days[k] + 7; k++);

        int option2 = cost[1] + dp[i];

        // 30 day pass
        for(i=k; i<n && days[i] < days[k] + 30; k++);

        int option3 = cost[2] + dp[i];

        dp[k] = min(option1,min(option2,option3));
    }

    return dp[0];
}

int minimumCosts(int n, vector<int> days, vector<int> cost){
    // return solve(n,days,cost,0);
    vector<int> dp(n+1, -1);
    solveMem(n,days,cost,0,dp);
}