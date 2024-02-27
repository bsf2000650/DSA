#include<iostream>
#include<vector>
using namespace std;

bool search2DMatrix(vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int rowIndex = 0;
    int colIndex = col - 1;
    while (rowIndex < row && colIndex>=0)
    {
        int element = matrix[rowIndex][colIndex]; 
        if(target == element)
            return 1;
        if (target > element)
        {
            rowIndex++;
        }else if(target < element)
            colIndex--;
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22}};
    if (search2DMatrix(matrix,12))
    {
        cout << "Element found";
    }else{
        cout << "Element not found";
    }
    
}