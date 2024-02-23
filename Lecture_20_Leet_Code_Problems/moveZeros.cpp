#include<iostream>
using namespace std;

void moveZeros(int arr[], int size){
    int nonZero = 0;
    for (int zero = 0; zero <size; zero++)
    {
        if(arr[zero]!=0){
            swap(arr[zero],arr[nonZero]);
            nonZero++;
        }
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    int arr[7] = {0,1,0,0,2,3,0};

    cout << endl << "Before moving zeros -> ";
    printArray(arr,7);

    moveZeros(arr,7);

    cout << endl << "After moving zeros -> ";
    printArray(arr,7);

}