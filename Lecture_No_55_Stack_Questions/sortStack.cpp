#include<iostream>
#include<stack>
using namespace std;

void insertStack(stack<int> &stack, int num){

    if((stack.empty()) || (stack.top() < num)){
        stack.push(num);
        return ;
    }

    int n = stack.top();
    stack.pop();

    insertStack(stack,num);

    stack.push(n);
}

void sortStack(stack<int> &stack){
    
    if(stack.empty())
        return ;

    int num = stack.top();
    stack.pop();

    sortStack(stack);

    insertStack(stack, num);

}