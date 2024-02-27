#include<iostream>
using namespace std;

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int arr1[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr1[row][col] << " ";
        }
        cout << endl;
    }

    int arr2[3][4];

    // taking input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr2[row][col];
        }
    }

    // giving output
     for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr2[row][col] << " ";
        }
        cout << endl;
    }
    
     for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cout << arr2[col][row] << " ";
        }
        cout << endl;
    }
    
}