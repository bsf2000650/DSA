#include<iostream>
#include<vector>
using namespace std;

 vector<int> intersectionOfElements(vector<int> &arr1, int n, vector<int> &arr2, int m){

    int i=0, j=0;
    vector<int> ans;
    while (i<n && j<n)
    {
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if(arr1[i] < arr2[j]){
            i++;
        } else {
            j++;
        }
    }

    return ans;
    

 }


int main(){

   vector<int> arr1 = {1,2,2,3,3,4};
   vector<int> arr2 = {1,2,3,4};

    vector<int> arr3 = intersectionOfElements(arr1,6,arr2,5);

    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

}