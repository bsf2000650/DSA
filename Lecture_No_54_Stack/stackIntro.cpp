#include<iostream>
#include<stack>
using namespace std;

// custom stack implementation

class Stack{
    public:
        int *arr;
        int size;
        int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(size-top>1){
            top++;
            arr[top] = data;
        }else{
            cout << "Stack overflow " << endl;
        }
    }

    void pop(){
        if(top >= 0)
            top--;
        else
            cout << "Stack underflow " << endl;
    }

    int peek(){
        if(top >= 0)
            return arr[top];
        else{
            cout << "Stack is empty " << endl;
        }
    }

    bool isEmpty(){
        if(top == -1)
            return true;
        else
            return false;
    }
};

int main(){

    Stack st(5);

    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty())
        cout << "Stack is empty " << endl;
    else
        cout << "Stack isn't empty " << endl;
        

    // stack<int> s;

    // s.push(2);
    // s.push(1);

    // cout << "Peek element -> " << s.top() << endl;

    // s.pop();

    // if(s.empty()){
    //     cout << "Stack is empty " << endl;
    // }else{
    //     cout << "Stack isn't empty " << endl;
    // }

    // cout << "Size of stack " << s.size() << endl;
}