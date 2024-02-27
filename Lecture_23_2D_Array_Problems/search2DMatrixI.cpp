#include<iostream>
#include<vector>
using namespace std;

bool search2DMatrix(vector<vector<int>> &matrix, int target){
    int row =  matrix.size();
    int col = matrix[0].size();

    int s = 0;
    int e = row*col - 1;

    int mid = s + (e-s)/2;

    while (s<=e)
    {
        int element = matrix[mid/col][mid%col];
        if(target==element)
            return element;
        if (target < element)
        {
            e = mid - 1;
        }
        else if (target > element)
        {
            s = mid + 1;
        }
        
        mid = s+(e-s)/2;
    }
    return 0;
}

int main(){
    vector<vector<int>> arr =  {{1,2,3},{4,5,6},{6,7,8}};
    if(search2DMatrix(arr,6))
        cout << "Element found." << endl;
    else
        cout << "Element not found" << endl;
}