#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int  age;
        int height;
    public:
        int getAge(){
            return this->age;
        }
};

int main(){
    Student s1;
    cout << "Sb sai chal raha hai" << endl;
}