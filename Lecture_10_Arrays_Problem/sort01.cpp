#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort01(int arr[],int n){

    int left=0, right=n-1;
    while (left<right)
    {
        while (arr[left]==0 && left<right)
        {
            left++;
        }
        while (arr[right]==1 && left<right)
        {
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    
}

int main(){
   
   int arr[7] = {1,0,0,1,0,0,1};

    cout << "Before sort : " << endl;
    printArray(arr,7);

    cout << endl << endl << "After sort : " << endl;
    sort01(arr,7);
    printArray(arr,7);


    
    
    


}