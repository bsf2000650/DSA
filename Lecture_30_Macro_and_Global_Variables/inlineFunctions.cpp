#include<iostream>
using namespace std;

inline int getMax(int a, int b){
    return (a>b) ? a : b;
}

int main(){
    int a = 1;
    int b = 2;

    cout << endl ;
    cout << getMax(a,b) << endl;

    a = a+3;
    b = b-1;

    
    cout << endl ;
    cout << getMax(a,b) << endl;
}