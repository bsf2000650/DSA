#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int key;
    cout << "Enter the key to search for : ";
    cin >> key;
    if(linearSearch(arr,10,key)){
        cout << endl << "Key found";
    } else{
        cout << endl << "Key not found";
    }
}