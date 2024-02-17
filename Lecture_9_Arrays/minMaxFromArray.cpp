#include<iostream>
using namespace std;

int getMin(int numbers[],int size){
    int mini = INT32_MAX;
    for(int i=0;i<size;i++){
        mini = min(mini,numbers[i]);
        // if(numbers[i]<mini){
        //     mini = numbers[i];
        // }
    }
    return mini;
}

int getMax(int numbers[], int size){
    int maxi = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi,numbers[i]);
        // if(numbers[i]>maxi){
        //     maxi = numbers[i];
        // }
    }
    return maxi;
}

int main(){
    int numbers[100];
    int size;
    cout << "Size : " ;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    int min = getMin(numbers,size);

    cout << "Min : " << min << endl;

    int max = getMax(numbers,size);

    cout << "Max : " << max << endl;
    
}