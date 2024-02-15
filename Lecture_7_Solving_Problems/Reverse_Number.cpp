#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : " ;
    cin >> n;
    int ans = 0, i = 0;
    while (n!=0)
    {
        int digit = n % 10;
        if ((ans > INT32_MAX/10) || (ans < INT32_MIN/10))
        {
            return 0;
        }
        ans = ( ans*10 ) + digit;
        n = n / 10;
    }
    cout << "Answer : " << ans << endl;
}