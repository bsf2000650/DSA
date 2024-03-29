#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int findSumOfMaxiAndMini(int arr[], int k, int n){
    deque<int> mini;
    deque<int> maxi;

    for (int i = 0; i < k; i++)
    {
       while (!mini.empty() && arr[mini.back()] >= arr[i])
       {
             mini.pop_back();
       }
       while (!maxi.empty() && arr[maxi.back()] <= arr[i])
       {
            maxi.pop_back();
       }

       mini.push_back(i);
       maxi.push_back(i);
    }

    int ans = 0;
    for (int i = k; i < n; i++)
    {
        ans += arr[maxi.front()] + arr[mini.front()];

        // next window
        // removal

        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }
        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }

        // addition
        
       while (!mini.empty() && arr[mini.back()] >= arr[i])
       {
             mini.pop_back();
       }
       while (!maxi.empty() && arr[maxi.back()] <= arr[i])
       {
            maxi.pop_back();
       }

       mini.push_back(i);
       maxi.push_back(i);
        
    }
    // consider last window
    ans += arr[maxi.front()] + arr[mini.front()];

    return ans;
}

int main(){
    int arr[7] = {2,5,-1,7,-3,-1,-2};
    int k = 4;
    int ans = findSumOfMaxiAndMini(arr,7,k);
    cout << ans << endl;
}