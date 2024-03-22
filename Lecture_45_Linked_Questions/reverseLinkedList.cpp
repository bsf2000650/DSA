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

// Recursive Solution

Node* solve(Node* head, Node* curr, Node* prev){
    // base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr->next;
    solve(head,forward,curr);
    curr->next = prev;
}

Node* reverseLinkedList(Node* head){

    Node* prev = NULL;
    Node* curr = head;
    solve(head,prev,curr);
    return head;

}

// Node* revserseLinkedList(Node* head){
//     if(head == NULL || head->next==NULL)
//         return;
    
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = NULL;

//     while (curr!=NULL)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }

int main(){

}