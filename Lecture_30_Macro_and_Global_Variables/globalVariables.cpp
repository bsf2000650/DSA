#include<iostream>
using namespace std;

int score = 15;

void a(int i){
    cout << "Score " << score <<" in a " << endl;
}

void b(int i){
    cout << "Score " << score <<" in b " << endl;
}

int main(){

    a(5);
    b(6);

    cout << "Score " << score << " in main " << endl;

}