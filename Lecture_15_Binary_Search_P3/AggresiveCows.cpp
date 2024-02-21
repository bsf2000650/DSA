#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int isPossible(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if(stalls[i] - lastPos >= mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(),stalls.end());
    int s = 0;
    int maxi = 0;
    int ans = 0;
    for (int i = 0; i < stalls.size(); i++)
    {
         maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
     int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(isPossible(stalls,k,mid)){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> stalls = {4,2,1,3,6};
    int minimumDistance = aggressiveCows(stalls,2);
    cout << "Minimum Distance between cows : " << minimumDistance << endl;
}