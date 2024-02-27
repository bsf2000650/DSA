#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int size){
    for (int i = 1; i < size; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main(){
    vector<int> arr = {10,9,8,6,5,1};
    bubbleSort(arr,6);
    for (int i = 0; i < 6; i++)
    {
       cout << arr[i] << " " ;
    }
    cout << endl;
     
}