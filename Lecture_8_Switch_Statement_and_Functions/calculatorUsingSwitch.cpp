#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter a = ";
    cin >> a;
    cout << endl << "Enter b = ";
    cin >> b;

    char op;
    cout << endl << "Enter operator = " ;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << endl << "a + b = " << (a+b) << endl;
        break;
    case '-':
        cout  << "a - b = " << (a-b) << endl;
        break;
    case '*':
        cout << "a x b = " << (a*b) << endl;
        break;
    case '/':
        cout  << "a / b = " << (a/b) << endl;
        break;
    case '%':
        cout  << "a % b = " << (a%b) << endl;
        break;
    
    default:
        break;
    }
}