#include<iostream>
using namespace std;

int main(){
    int num = 1;
    char ch = 'a';

    switch (ch)
    {
    case 'a':
             switch (num)
             {
             case  1:
                    cout << "Value of number is " << num << endl;
                    break;
             
             default:
                    cout << "Didn't match any of the following "<< endl;
                    break;
             }
             break;
    case 2:
        cout << "Case 2" << endl;
        break;
    
    default:
        break;
    }
}