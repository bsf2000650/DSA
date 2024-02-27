#include<iostream>
using namespace std;

void rowWiseSum(int arr[][3], int row, int col){
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum +=  arr[row][col];
        }
        cout << sum << endl;
    }
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
    rowWiseSum(arr,3,3);
    
}