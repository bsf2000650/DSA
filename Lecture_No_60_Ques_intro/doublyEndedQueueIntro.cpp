#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> d;

    d.push_front(1);
    d.push_back(2);

    cout << "Front -> " << d.front() << endl;
    cout << "Rear -> " << d.back() << endl;

    d.pop_front();
    d.pop_back();

    cout << "Front -> " << d.front() << endl;
    cout << "Rear -> " << d.back() << endl;

    if(d.empty()){
        cout << "Queue is empty " << endl;
    }else{
        cout << "Queue is not empty " << endl;
    }
 
}