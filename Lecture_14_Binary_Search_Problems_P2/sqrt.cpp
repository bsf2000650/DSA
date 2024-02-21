#include<iostream>
using namespace std;

long long int sqrt(int num){
    int s = 0;
    int e = num;
    long long int mid = s+(e-s)/2;
    long long int ans = 0;
    while (s<=e)
    {
        if(mid*mid == num){
            return mid;
        }
        if(num > mid*mid){
            ans = mid;
            s = mid + 1;
        } else if(num < mid*mid){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
    
}

double sqrtWithPrecision(int tempSol, int precision, int num){
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor/10;
        for (double j = ans; j*j<num; j = j+factor)
        {
            ans = j;
        }
    }
    return ans;
    
}

int main(){

    int num;
    cout << "Enter number : ";
    cin >> num;
    int tempSol = sqrt(num);
    double sqrtNum = sqrtWithPrecision(tempSol,3,num);
    cout << endl << "Sqrt number : " << sqrtNum << endl;

}