#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int evenArr[6] = {1,2,3,4,5,6};
    int oddArr[5] = {1,2,3,4,5};

    cout << endl << "Unreversed Arrays " << endl;
    printArray(evenArr,6);
    cout << endl;
    printArray(oddArr,5);
    cout << endl;

    swapAlternate(evenArr,6);
    cout << endl;
    swapAlternate(oddArr,5);
    

    cout << endl << "Alternate Arrays " << endl;
    printArray(evenArr,6);
    cout << endl;
    printArray(oddArr,5);
}