#include<iostream>
#include<stack>
#include<queue>


using namespace std;

queue<int> modifyQueue(queue<int> q, int k){
    stack<int> s;
    for (int i = 0; i < q.empty(); i++)
    {
        int value  = q.front();
        q.pop();
        s.push(value);
    }

    while (!s.empty())
    {
        int value = s.top();
        s.pop();
        q.push(value);
    }

    int t = q.size() - k;

    while (t--)
    {
        int value = q.front();
        q.pop();
        q.push(value);
    }

    return q;  
    
}

int main(){

}