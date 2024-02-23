#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int> &arr, int size, int k){
    vector<int> temp(size);
    for (int i = 0; i < size; i++)
    {
        temp[(i+k)%size] = arr[i];
    }
    arr=temp;
}
    

void printArray(vector<int> arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};

    cout << endl << "Before rotating -> ";
    printArray(arr,7);

    rotateArray(arr,7,3);

    cout << endl << "After rotating -> ";
    printArray(arr,7);

}