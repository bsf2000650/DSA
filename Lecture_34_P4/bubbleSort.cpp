#include<iostream>
using namespace std;

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortArray(int arr[],int size){

    if(size == 0 || size == 1)
        return ;

    for (int i = 0; i < size-1; i++)
    {
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }

    sortArray(arr,size-1);
    
}

int main(){
    int arr[5] = {5,4,3,2,1};
    cout << endl << "Unsorted Array -> ";
    print(arr,5);
    
    sortArray(arr,5);
    cout << endl << "Sorted Array -> ";
    print(arr, 5);
    cout << endl;
}