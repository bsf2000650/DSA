#include<iostream>
using namespace std;

int arraySum(int *arr,int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main(){
    int n;
    cout << endl << "Enter n -> ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter elements for array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of array -> " << arraySum(arr,n) << endl;

    // while (true)
    // {
    //     int i = 5;
    // }

    // while (true)
    // {
    //     int* ptr = new int;
    // }

    int* i = new int;
    delete i;
    int* arr1 = new int[n];
    delete []arr1;
    
}