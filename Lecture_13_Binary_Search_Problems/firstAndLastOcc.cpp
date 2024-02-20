#include<iostream>
#include<vector>

using namespace std;

int firstOcc(vector<int> &arr, int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = 0;

    while (start<=end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1; 
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(vector<int> &arr, int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = 0;

    while (start<=end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
            
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
   return ans;
}


int main(){
     vector<int> even = {1,3,3,3,5};

     pair<int,int> ans;
     ans.first = firstOcc(even,5,3);
     ans.second = lastOcc(even,5,3);

    cout << "First occurence is at index : " << ans.first << endl;
    cout << "Last occurence is at index : " << ans.second << endl;

    int totalOcc = (ans.second - ans.first) + 1;

    cout << "Total Occurence : " << totalOcc << endl;
}