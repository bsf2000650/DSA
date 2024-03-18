#include<iostream>
using namespace std;

int nWaysToClimbStairs(int n){
    if(n<0)
        return 0;
    
    if(n==1)
        return 1;
    
    int ans = nWaysToClimbStairs(n-1) + nWaysToClimbStairs(n-2);
    return ans;
}

int main(){

    int n = 8;
    cout << "Ways " << nWaysToClimbStairs(n) << endl;
}