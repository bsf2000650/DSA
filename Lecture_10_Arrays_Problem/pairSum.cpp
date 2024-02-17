#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> ans;


    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) { // Corrected the increment of j
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

     cout << "===============" << endl;

    // Printing the elements of the ans vector
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }


    // Sorting the ans vector
    sort(ans.begin(), ans.end());

     cout << "===============" << endl;

    // Printing the sorted elements of the ans vector
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return ans;
}

int main() {
    int s1 = 5, s2 = 0;
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,-3,3,3,-2};

    vector<vector<int>> arr3 = pairSum(arr2, s2);
    cout << "===============" << endl;
    for (int i = 0; i < arr3.size(); i++) {
        for (int j = 0; j < arr3[i].size(); j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    cout << "===============" << endl;
    
    return 0;
}
