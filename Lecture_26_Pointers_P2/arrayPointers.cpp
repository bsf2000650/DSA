#include<iostream>
using namespace std;

int main(){
    
    // int arr[10] = {1,2,3};
    // cout << endl << "1st Address of first memory block " << arr << endl;
    // cout << "2nd Address of first memory block " << &arr[0] << endl;
    // cout << "3rd Value of first memory block " << *arr << endl;
    // cout << "4th Value of first memory block " << arr[0] << endl;

    // cout << "5th " << *arr + 1 << endl;
    // cout << "6th " << *(arr+1) << endl;
    // cout << "7th " << *(arr) + 1 << endl;
    
    // cout << "8th " << arr[2] << endl;
    // cout << "9th " << *(arr+2) << endl;
    // int i = 2;
    // cout << i[arr] << endl;


    // int temp[10] = {1,2};

    // cout << sizeof(temp) << endl;
    // cout << "1st " << sizeof(*temp) << endl;
    // cout << "2nd " << sizeof(&temp) << endl;

    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(&ptr) << endl;

    int a[20] = {1,2,3,4};
    cout << " -> " << &a[0] << endl;
    cout << " -> " << &a << endl;
    cout << " -> " << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << " -> " << &p << endl;

    return 0;
}