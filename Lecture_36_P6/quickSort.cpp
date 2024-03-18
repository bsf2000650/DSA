#include<iostream>
using namespace std;


void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}


int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;

    for (int i = s+1; i<=e; i++)
    {
        if (arr[i]<=pivot)
        {
            cnt++;
        }
    }

    // place pivot at right position

    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    int i=s, j=e;

    while (i<pivotIndex && j>pivotIndex)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        if (i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
    
}

void sort(int arr[], int s, int e){
    
    // base case
    if(s>=e)
        return ;
    
    // partition 
    int p = partition(arr,s,e);

    sort(arr,s,p-1);
    sort(arr,p+1,e); 

}

int main(){

    int arr[5] = {4, 2, 5, 1, 3};
    cout << endl << "Before Sorting -> ";
    print(arr,5);
    sort(arr,0,4);
    cout << endl << "After Sorting -> ";
    print(arr,5);
}