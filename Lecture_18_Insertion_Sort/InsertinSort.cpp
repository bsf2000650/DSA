#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        for (; j>=0;j--)
        {
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[6] = {6,5,3,4,1,2};
    insertionSort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}