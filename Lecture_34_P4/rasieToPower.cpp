#include<iostream>
using namespace std;

int power1(int a, int b){

    if(b==0)
        return 1;
    
    if(b==1)
        return a;

    int ans = power1(a,b/2);

    if(b%2==0)
        return ans*ans;
    else
        return a*ans*ans;    

}

int main(){

    int a, b;
    cout << "Enter a -> ";
    cin >> a;
    cout << endl << "Enter b -> ";
    cin >> b;

    int power = power1(a,b);
    
    cout << "Power -> " << power << endl;

}