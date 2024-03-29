#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    cout << "Front -> " << q.front() << endl;
    q.pop();
    q.push(2);
    cout << "Front -> " << q.front() << endl;
    q.pop();
    q.push(3);
    cout << "Front -> " << q.front() << endl;
    q.pop();
    q.push(4);
    cout << "Front -> " << q.front() << endl;



    if(q.empty())
         cout << "Queue isn't empty " << endl;
    else
        cout << "Queue is empty " << endl;
 
}