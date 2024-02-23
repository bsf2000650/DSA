#include<iostream>
#include<vector>
using namespace std;
 
bool sortedAndRotated(vector<int> &arr, int size){
    int count = 0;
    int n = size;
    for (int i = 1; i < size; i++)
    {
        if (arr[i-1]>arr[i])
        {
            count++;
        }
    }
    if(arr[n-1]>arr[0])
        count++;
    
    return count <=1;
    
}

int main(){
    vector<int> arr = {7,2,3,4,5,10,9};

    if(sortedAndRotated(arr,7))
        cout << "Array is sorted and rotated ";
    else
        cout << "Array is not sorted and rotated ";

}