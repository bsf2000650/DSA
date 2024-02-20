#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr, int size){

    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    vector<int> arr = {1,3,4,5,3};
    cout << "Peak index : " << peakIndexInMountainArray(arr,5) << endl;
}