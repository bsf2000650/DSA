#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0)
        return a;
    if(b==0)
        return b;
    
    while (a!=b)
    {
        if(a>b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main(){
    int a,b;
    cout << endl << "Enter a : " ;
    cin >> a;
    cout << endl << "Enter b : " ;
    cin >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a,b)<< endl;
}