#include<iostream>
using namespace std;

class A{
    public:
        int a;
        int b;

        void operator+ (A &obj){
            int value1 = this->a;
            int value2 = obj.a;
            cout << "Output " << value1 - value2 << endl;
        }

        void operator() (){
            cout << "Mein bracke hun " << this-a << endl;
        }
};

int main(){

    A obj1, obj2;

    obj1.a = 5;
    obj2.a = 3;

    obj1 + obj2;
    obj1();
}