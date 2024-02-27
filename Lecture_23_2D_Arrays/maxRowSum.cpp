#include<iostream>
using namespace std;

int maxRowSum(int arr[][3], int row, int col){
    int rowIndex = 0;
    int maxi = INT32_MIN;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum +=  arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    return rowIndex;
}

int main(){
    int arr[3][3];

    // taking input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << endl;
    cout << "Maximum sum row index -> " << maxRowSum(arr,3,3);
    
}