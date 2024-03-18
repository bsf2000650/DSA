#include<iostream>
using namespace std;

int getSum(int arr[],int size){

    int sum = 0;

    if(size == 0) 
        return 0;

    if(size==1)
        return arr[0];
    
    int remianingPart = getSum(arr+1,size-1);
    sum = arr[0] + remianingPart;

    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = getSum(arr,5);
    cout << "Sum -> " << sum << endl;
}