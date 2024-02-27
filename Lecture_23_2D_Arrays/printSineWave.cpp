#include<iostream>
#include<vector>
using namespace std;

vector<int> printSineWave(vector<vector<int>> &arr, int nCols, int mRows){
    vector<int> ans;
    for (int col = 0; col < nCols; col++)
    {
        if (col&1)
        {
            for ( int row = mRows-1; row>=0; row--)
            {
                ans.push_back(arr[row][col]);
            }
            
        }
        else{
            for (int row = 0; row < mRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
            
        }
        
    }
    return ans;
    
}

int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = printSineWave(arr,3,3);
    cout << "Printing the Sive Wave " << endl;
    for (int i = 0; i < 9; i++)
    {
       cout << ans[i] << " "; 
    }
    cout << endl;
}