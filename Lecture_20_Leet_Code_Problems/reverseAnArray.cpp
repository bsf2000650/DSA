#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size() - 1;
    while (s<=e)
    {
        swap(v[e],v[s]);
        s++;
        e--;
    }
    return v;
}

void printArray(vector<int> v){
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << endl << "Array before reversing : ";
    printArray(v);
    vector<int> ans = reverse(v);
    cout << endl;
    cout << "Array after reversing : ";
    printArray(ans);

}