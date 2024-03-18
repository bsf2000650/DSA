#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

        void bark(){
            cout << "Barking" << endl;
        }
};

class Human{
    public:
        string color;

        void speak(){
            cout << "Speaking " << endl;
        }
};

class Hybrid : public Animal, public Human {

};

int main(){
   
    Hybrid obj1, obj2;
    obj1.speak();
    obj2.bark();

}