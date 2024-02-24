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

void reverse(char name[], int length){
    int s = 0;
    int e = length - 1;
    while (s<=e)
    {
        swap(name[s++],name[e--]);
    }
    
}

int main(){
    char name[20];
    cout << endl << "Enter your name ";
    cin >> name;
    cout << endl << "Your name is " << name << endl;
    int length = getLength(name);
    reverse(name,length);
    cout << "Reverser name : " << name << endl;
}