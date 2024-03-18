#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

        void speak(){
            cout << "Barking" << endl;
        }
};

class Dog : public Animal{

};

int main(){
    Dog g;
    g.speak();
}