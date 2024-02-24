#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i]!=0; i++)
    {
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << endl << "Enter your name ";
    cin >> name;
    cout << endl << "Your name is " << name << endl;
    cout << "Length of your name : " << getLength(name);
}