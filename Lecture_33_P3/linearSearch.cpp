#include<iostream>
using namespace std;

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key){
    print(arr,size);
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    else{
        bool remainingPart = linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}


int main(){
    int arr[5] = {1,2,3,4,5};
    bool found = linearSearch(arr,5,3);
    if(found)
        cout << "Element found " << endl;
    else 
        cout << "Element not found " << endl;
}