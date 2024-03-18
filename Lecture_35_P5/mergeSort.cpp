#include<iostream>
using namespace std;


void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}


void merge(int arr[], int s, int e){

    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid+1;
    
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    // merge sorted arrays

    int index1 = 0;
    int index2 = 0;

    mainIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
            arr[mainIndex++] = first[index1++];
        else
            arr[mainIndex++] = second[index2++]; 
    }

    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }
    
    
    
}

void mergeSort(int arr[], int s, int e){
    if(s>=e)
        return ;

    int mid = (s+e)/2;
    
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){

    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    cout << endl << "Before Sorting -> ";
    print(arr,10);
    mergeSort(arr,0,9);
    cout << endl << "After Sorting -> ";
    print(arr,10);
}