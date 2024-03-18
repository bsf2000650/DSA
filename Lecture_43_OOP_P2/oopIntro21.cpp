#include<iostream>
using namespace std;

class Human{
    public:

        int age;
        int weight;
        int height;

        int getAge(){
            return this->age;
        }

        void setWeight(int w){
            this->weight = w;
        }
};

class Male: public Human{
    public:
        string color;

        void sleep(){
            cout << "Male Sleeping" << endl;
        }
};

int main(){
    Male m1;
    cout << "Age -> " << m1.age << endl;
    cout << "Weight -> " << m1.weight << endl;
    cout << "Height -> " << m1.height << endl;

    m1.setWeight(50);
    cout << "Weight -> " << m1.weight << endl;

    cout << "Color -> " << m1.color << endl;
     m1.sleep();

}