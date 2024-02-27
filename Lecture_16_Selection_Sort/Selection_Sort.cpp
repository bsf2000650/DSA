#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr, int size){
    for(int i = 0; i<size-1;i++){
        int minIndex = i;
        for(int j = i+1; j<size; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    vector<int> arr = {10,9,8,6,5,1};
    selectionSort(arr,6);
    for (int i = 0; i < 6; i++)
    {
       cout << arr[i] << " " ;
    }
    cout << endl;
     
}