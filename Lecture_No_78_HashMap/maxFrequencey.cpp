#include <bits/stdc++.h> 
int maxFrequency(vector<int> A)
{
    unordered_map<int,int> m;
    int maxFreq = 0;
    int maxAns = 0;
    for (int i = 0; i < A.size(); i++)
    {
        count[A[i]]++;
        maxFreq = max(maxFreq,count[A[i]]);
    }

    for (int i = 0; i < A.size(); i++)
    {
        if(maxFreq == count[A[i]]){
            maxAns = A[i];
            break;
        }
    }

    return maxAns;
}