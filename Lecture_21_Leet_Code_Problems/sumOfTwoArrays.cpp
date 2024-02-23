#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> &ans){
    int size = ans.size();
    int s = 0;
    int e  = size - 1;
    while (s<e)
    {
        swap(ans[s++],ans[e--]);
    }
    return ans;
}

void printArray(vector<int> arr){
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

vector<int> sumOfArrays(vector<int> &arr1, int n, vector<int> &arr2, int m){
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while (i>=0 && j>=0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;
    
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i>=0)
    {
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j>=0)
    {
        int sum = arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    // third case
     while (carry!=0)
    {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    return reverse(ans);
    
    
}

int main(){
    vector<int> arr1 = {4,5,1};
    vector<int> arr2 = {3,4,5};
    vector<int> sumArray;

    sumArray = sumOfArrays(arr1,3,arr2,3);

    cout << endl;
    printArray(sumArray);
}