#include<iostream>
using namespace std;

class A{
    public:
        void saySlam(){
            cout << "Assalam - o - Alaikum Asad" << endl;
        }

        int saySlam(string name){
            cout << "Assalam - o - Alaikum " << name << endl;
            return 1;
        }

        void saySlam(char name, int n){
             cout << "Assalam - o - Alaikum " << name << endl;
        }
};

int main(){
    A obj;
    obj.saySlam();
    obj.saySlam("Asad");
    obj.saySlam('A',5);
}