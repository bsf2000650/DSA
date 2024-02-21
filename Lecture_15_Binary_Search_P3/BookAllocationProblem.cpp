#include<iostream>
#include<vector>
using namespace std;

int isPossible(vector<int> &arr, int size, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else {
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> &arr, int size, int m){
    int s = 0;
    int e = 0;
    for(int i=0; i<size; i++){
        e += arr[i];
    }
    int mid = s + (e-s)/2;
    int ans = 0;
    while (s<=e)
    {
        if(isPossible(arr,size,m,mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> books = {10,20,30,40};
    int ans = allocateBooks(books,4,2);
    cout << "Number of books to allocate : " << ans <<  endl;
}