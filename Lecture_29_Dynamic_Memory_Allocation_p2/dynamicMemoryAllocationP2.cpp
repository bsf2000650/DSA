#include<iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << endl << "Enter number of col : ";
    cin >> col;

    // Creating 2D array
    int** arr = new int*[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // Taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    // Printing Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    // Realising memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    
    delete []arr;

}