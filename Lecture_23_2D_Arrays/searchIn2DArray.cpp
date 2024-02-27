#include<iostream>
using namespace std;

bool isElementPresent(int arr[][4], int key, int row, int col){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if(arr[row][col]==key)
                return 1;
        }
    }
    return 0;
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // taking input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << endl;
    if(isElementPresent(arr,5,3,4))
        cout << "Element is present " << endl;
    else
        cout << "Element is not present " << endl;


   
    
}