#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& stack, int num){
    if(stack.empty()){
        stack.push(num);
        return ;
    }

    int element = stack.top();
    stack.pop();

    insertAtBottom(stack,element);

    stack.push(element);

}

void reverseStack(stack<int>& stack){
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack,num);
}