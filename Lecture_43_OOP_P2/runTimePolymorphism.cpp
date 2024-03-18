#include<iostream>
using namespace std;

class Human{
    public:
        void speak(){
            cout << "Speaking " << endl;
        }
};

class Animal {
    public:
        void speak(){
            cout << "Barking " << endl;
        }
};

int main(){

    Human h1;
    h1.speak();

    Animal a1;
    a1.speak();

}