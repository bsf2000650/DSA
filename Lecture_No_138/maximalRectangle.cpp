#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

vector<int> nextSmaller(vector<int> arr) {
        stack<int> s;
        s.push(-1);

        int n = arr.size();
        vector<int> ans(n);

        for(int i=n-1; i>=0 ; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            if(s.top() == -1)
                ans[i] = n;
            else
                ans[i] = s.top();
            //ans is stack ka top  
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmaller(vector<int> arr) {
        stack<int> s;
        s.push(-1);

        int n = arr.size();
        vector<int> ans(n);

        for(int i=0; i<n; i++) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }
    

int largestArea(vector<int> arr){

    vector<int> prev = prevSmaller(arr);
    vector<int> next = nextSmaller(arr);

    int maxArea = __INT_MAX__;

    for(int i=0; i<arr.size(); i++){
        int length = arr[i];
        int breadth = next[i] - prev[i] - 1;
        int newArea = length*breadth;
        maxArea = max(maxArea,newArea);
    }
    return maxArea;
}

int maximalRectangle(vector<vector<char > > &matrix){
    int maxi = __INT_MAX__;

    vector<int> histogram(matrix[0].size(), 0);

    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix.size();j++){
            if(matrix[i][j] == '1')
                histogram[j]++;
            else
                histogram[j] = 0;
        }
        maxi = max(maxi,largestArea(histogram));
    }
    return maxi;
}

int main(){

}