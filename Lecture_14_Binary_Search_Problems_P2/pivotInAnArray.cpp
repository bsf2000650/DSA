#include<iostream>
using namespace std;

int pivot(int arr[], int size){

    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}



int main(){
    int arr[5] = {7,8,10,1,3};
    int pivotIndex = pivot(arr,5);
    cout << "Pivot : " << pivotIndex << endl;
}