#include<iostream>
using namespace std;

int uniqueElement(int arr[],int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    // int oddArr[5] = {4,2,1,3,1};
    // int oddArr[7] = {2,2,3,4,5,6,7};
    int oddArr[7] = {6,3,1,5,4,3,2};

    // printArray(oddArr,7);

    // cout << endl;
    // int uniqueElem =  uniqueElement(oddArr,7);
    // cout << "Unique element : " << uniqueElem << endl;

    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        ans = ans ^ oddArr[i];
        cout << ans << " ";
    }

    cout << endl;

    cout << "ans = " << ans << endl;
     
     cout << endl;

     for (int i = 1; i < 7; i++)
     {
        ans = ans ^ i;
        cout << ans << " ";
     }
    cout << endl;

    cout << "ans = " << ans << endl;
     
     cout << endl;
     
     
    

    
}