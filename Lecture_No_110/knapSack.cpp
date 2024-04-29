#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &weight, vector<int> &value,int index, int capacity){
    // base case
    // if only 1 item to steal, then just compare its weight with the knapsack capacity

    if(index == 0){
        if(weight[0] <= capacity)
            return value[0];
        else
            return 0;
    }

    int include = 0;
    if(weight[index] <= capacity){
        include = value[index] + solve(weight,value,index-1,capacity - weight[index]);
    }

    int exlude = 0 + solve(weight,value,index-1,capacity);
    int ans = max(exlude,include);
    return ans;
}

int solveMem(vector<int> &weight, vector<int> &value,int index, int capacity, vector<vector<int > > &dp){
    // base case
    if(index == 0){
        if(weight[0] <= capacity)
            return value[0];
        else
            return 0;
    }

    if(dp[index][capacity] != -1)
        return dp[index][capacity];

    int include = 0;
    if(weight[index] <= capacity)
        include = value[index] + solveMem(weight,value, index-1, capacity-weight[index], dp);
    
    int exclude = 0 + solveMem(weight,value,index-1,capacity,dp);

    dp[index][capacity] = max(exclude,include);
    return dp[index][capacity];
}

int solveTab(vector<int> &weight, vector<int> &value,int n, int capacity){
    // step 1:
    vector<vector<int > > dp(n,vector<int>(capacity+1,0));

    // step 2: analyse base case
    for (int w = weight[0]; w <= capacity; w++)
    {
        if(weight[0] <= capacity)
            dp[0][w] = value[0];
        else
            dp[0][w] = 0;
    }

    for (int index = 1; index < n; index++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            int include = 0;
            if(weight[index] <= w)
                include = value[index] + dp[index][w-weight[index]];
            
            int exclude = 0 + dp[index-1][w];
            dp[index][w] = max(exclude,include);
        }
    }
    return dp[n-1][capacity];
    
}

int spaceOptimization(vector<int> &weight, vector<int> &value,int n, int capacity, ){
    // step 1:
    vector<int> prev(capacity+1,0);
    vector<int> curr(capacity+1,0);

    // step 2
    for(int w = weight[0]; w<=capacity,w++){
        if(weight[0] <= capacity)
            prev[w] = value[0];
        else    
            prev[w] = 0;
    }

    // step 3: take care of remaining recursive calls
    for (int index = 1; index < n; index++)
    {
        for (int w = 0; w<=capacity; w++)
        {
            int include = 0;
            if(weight[index] <= 0)
                include = value[index] + prev[w - weight[index]];
            
            int exclude = 0 + prev[w];
            curr[w] = max(exclude,include);
        }
        prev = curr;
    }
    return prev[capacity];
}

int knapsack(vector<int> weight, vector<int> value,int n, int maxWeight){
    // return solve(weight, value, n, maxWeight);
    // vector<vector<int > > dp(n,vector<int> (maxWeight+1,-1));
    // return solveMem(weight,value,n-1,maxWeight,dp);

    // return solveTab(weight,value,n,maxWeight);

    return spaceOptimization(weight,value,n,maxWeight);
}