#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){
    if(s>e)
        return false;
    
    int mid = s+(e-s)/2;

    if(arr[mid]==key)
        return true;

    if(arr[mid]<key)
        binarySearch(arr,s,mid-1,key);
    else if(key>arr[mid])
        binarySearch(arr,mid+1,e,key);
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    bool found = binarySearch(arr,0,4,55);
    if(found)
        cout << "Element found " << endl;
    else 
        cout << "Element not found " << endl;
}