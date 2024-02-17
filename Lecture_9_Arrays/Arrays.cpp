#include<iostream>
using namespace std;

void printingArray(int arr[], int size){
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int first[3] = {1,2,3};
    for (int i = 0; i < 3; i++)
    {
        cout << first[i] << " ";
    }
    cout << endl;

    int second[15] = {2,3};
    for (int i = 0; i < 15; i++)
    {
        cout << second[i] << " ";
    }
    cout << endl;

    int third[10] = {};
    for (int i = 0; i < 10; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;

    int fourth[10] = {};
    for (int i = 0; i < 10; i++)
    {
        cout << fourth[i] << " ";
    }
    cout << endl;

    int fifth[] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        cout << fifth[i] << " ";
    }
    cout << endl;

    int sixth[] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 40; i++)
    {
        cout << sixth[i] << " ";
    }
    cout << endl;

    int seven[] = {1,2,3,4,5,6,7,8,9,10};
    printingArray(seven,10);

    int sizeOfSeven = sizeof(seven)/sizeof(int);
    cout << endl << "Size of seventh array : " << sizeOfSeven << endl;

    char ch[5] = {'a','b','c','d','e'};

    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }

    cout << endl;

    double firstDoubleArr[10] = {};
    float firstFloarArr[10] = {};
    bool fisrtBoolArr[10] = {};
    

    
}