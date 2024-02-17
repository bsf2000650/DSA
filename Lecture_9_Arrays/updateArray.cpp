#include<iostream>
using namespace std;

void updateArray(int arr[], int size){
    cout << endl;
    arr[3] = 90;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[100] = {1,2,3,4,5};
    updateArray(arr,5);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}