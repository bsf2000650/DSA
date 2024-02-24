#include<iostream>
using namespace std;

int main(){
    char name[20];
    cout << endl << "Enter your name ";
    cin >> name;
    name[2] = '\0';
    cout << endl << "Your name is " << name << endl;
}