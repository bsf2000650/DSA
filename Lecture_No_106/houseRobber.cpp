
long long int solve(vector<int>& &nums){

    int n = nums.size();
    int prev1 = 0;
    int prev2 = nums[0];

    for (int i = 0; i < n; i++)
    {
        int incl = prev1 + nums[i];
        int excl = prev2 + 0;

        int ans = max(incl,excl);
        prev1 = prev2;
        prev2 = curr;
    }
    
    return prev1;
    
}

long long int houseRobber(vector<int>& valueInHouse){

    int n = valueInHouse.size();
    if(n==1)
        return valueInHouse[0];
    
    vector<int> first, second;

    for (int i = 0; i < n; i++)
    {
        if(i != n-1)
            first.push_back(valueInHouse[i]);
        if(i != 0)
            second.push_back(valueInHouse[i]);
    }
    
    return max(solve(first),solve(second));
}