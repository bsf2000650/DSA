#include<iostream>
using namespace std;

// int update(int n){
//     n++;
// }

// int& func(int n){
//     int num = n;
//     int& ans = num;
//     return ans;
// }

// int* func(int n){
//     int* ptr = &n;
//     return ptr;
// }

int update(int& n){
    n++;
    return n;
}

int main(){

    // int i = 5;
    // cout << i << endl;
    // int& j = i;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    int n = 5;
    cout << "Before " << n << endl;
    cout << "After " <<  update(n) << endl;

    return  0;
}