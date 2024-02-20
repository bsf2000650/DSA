#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int> &arr, int size, int key){
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

int binarySearch(vector<int> &arr,int s, int e, int key){
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(key==arr[mid]){
            return mid;
        } else if(key > arr[mid]){
            s = mid + 1;
        } else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
    
}

int findPosition(vector<int> &arr, int size, int key){
    int pivot = getPivot(arr,size,key);
    if(key>=arr[pivot] && key<=arr[size-1]){
        return binarySearch(arr,pivot,size-1,key);
    }else{
        return binarySearch(arr,0,pivot - 1, key);
    }
}

int main(){

    vector<int> arr = {1,3,5,7,8};

    int positionIndex = findPosition(arr,5,7);
    cout << "Position Index : " << positionIndex << endl;


}