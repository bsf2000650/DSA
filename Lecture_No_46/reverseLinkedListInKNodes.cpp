#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            this->next = NULL;
        }
};

Node* kReverse(Node* head, int k){
    // base case
    if(head == NULL)
        return head;
    


    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count  = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next != NULL)
        head->next = kReverse(next,k);

    return prev;
    
}

int main(){

}