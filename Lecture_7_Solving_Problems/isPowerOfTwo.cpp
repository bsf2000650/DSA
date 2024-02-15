#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int ans = 1;
    for(int i = 0; i<=30; i++){
        // int ans = pow(2,i);
        if(ans == n){
            cout << "True" << endl;
        }
        if(ans < INT32_MAX/2)
            ans = ans * 2;
    }
}