#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
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

    reverseArray(evenArr,6);
    cout << endl;
    reverseArray(oddArr,5);

    cout << endl << "Rerversed Arrays " << endl;
    printArray(evenArr,6);
    cout << endl;
    printArray(oddArr,5);
}