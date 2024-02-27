#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m){
    int res = 1;
    while (n>0)
    {
        if(n&1)
            res = (1LL* (res)*(x)%m)%m;
        x = (1LL * (x)%m * (x)%m) % m;
        n = n >> 1;
    }
    return res;
}

int main(){
    cout << endl;
    cout << "Result : " << modularExponentiation(3,1,2)<< endl;
    cout << "Result : " << modularExponentiation(4,3,10)<< endl;
}
