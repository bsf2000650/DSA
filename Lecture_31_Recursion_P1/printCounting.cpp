#include<iostream>
using namespace std;

void printCounting(int n){
    if(n==0)
        return ;

    // Tail recursion
    // cout << n << " ";
    // printCounting(n-1);

    // Head recursion
    printCounting(n-1);
    cout << n << " ";
}

int main(){
    int n;

    cout << "Enter n -> ";
    cin >> n;

    printCounting(n);

}