#include<iostream>
using namespace std;

bool isSortedArray(int arr[], int size){
    if(size == 0 || size == 1)
        return true;
    else{
        bool remianingPart = isSortedArray(arr+1,size-1);
        return remianingPart;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    bool isSorted = isSortedArray(arr,5);
    if(isSorted)
        cout << "Array is sorted " << endl;
    else 
        cout << "Array is not sorted " << endl;
}