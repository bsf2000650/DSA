#include<iostream>
using namespace std;

int main(){

    // -------------- +ve / -ve number checking ---------

    // int a;
    // cout << "Enter value of a ";
    // cin>>a;
    // if(a>0){
    //     cout<<"a is +ve "<<endl;
    // } else {
    //     cout << "a is -ve" << endl;
    // }

    // ----------- Greater number checking --------------

    // int a,b;
    // cout << "Enter value of a and b";
    // cin >> a >> b;
    // if(a>b){
    //     cout << "a is greater than b ";
    // }else {
    //     cout << "b is greater than a";
    // }

    // ----------- cin.get() -------------------------

    // int a;
    // a = cin.get();
    // cout << "a = " << a << endl;

    // ----------- +ve /-ve/ 0 checking if/else ----------------

    // int a;

    // cout << "Enter value of a : " ;
    // cin >> a;
    // if(a>0){
    //     cout << "a is +ve "<< endl;
    // } else {
    //     if(a<0){
    //         cout << "a is -ve " << endl;
    //     }else  {
    //         cout << "a is 0 " << endl;
    //     }
    // }

    // ------------ if/else if --------------

    // int a;

    // cout << "Enter value of a : " ;
    // cin >> a;

    // if(a>0){
    //     cout << "a is +ve ";
    // } else if(a<0){
    //     cout << "a is -ve";
    // } else {
    //     cout << "a is 0";
    // }

    // -------- Output Questions ----------------
    //                     1
    // int a=9;
    // if(a==9){
    //     cout << "Niney" << endl;
    // }
    // // if(a>0){
    // //     cout << "+ve" << endl;
    // // }
    // else if(a>0){
    //     cout << "+ve " << endl;
    // }
    // else {
    //     cout << "-ve" << endl;
    // }

    //                     2

    // int a = 1;
    // int b = a+2;

    // if((a=3)==b){
    //     cout << a;
    // } else {
    //     cout << a+1;
    // }

    //                     3 

    // int a = 24;

    // if(a>20){
    //     cout << "Love " ;
    // }else if(a==24){
    //     cout << "Lovely" ;
    // } else {
    //     cout << "Babbar " ;
    // }
    // cout << a << endl;

    //                      4                       

    // ------------ Checking character is uppercase/lowercase/number--------
    char a;

    cout << "Enter the character : ";
    cin >> a;

    if (a>='a' && a <='z' )
    {
        cout << a << " is lowercase character " << endl;
    } else if(a>='A' && a<='Z'){
        cout << a << " is uppercase character " << endl;
    } else if(a>='0' && a<='9'){
        cout << a << " is a number " << endl;
    } else {
        cout << "Wrong input" << endl;
    }
    

}