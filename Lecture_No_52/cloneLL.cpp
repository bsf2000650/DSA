#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

class Node {

    public:
        int data;
        Node* next;
        Node* arb;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->arb = arb;
    }
};

// void insertAtTail(Node* &head, Node* &tail, int data){

//     Node* newNode = new Node(data);
//     if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }else{
//         tail -> next = newNode;
//         tail = newNode;
//     }
// }

// Node* copyList(Node* head){

//     // 1. create a copy of existing list

//     Node* cloneHead = NULL;
//     Node* cloneTail = NULL;

//     Node* temp = head;
//     while (temp != NULL)
//     {
//         insertAtTail(cloneHead,cloneTail,temp->data);
//         temp = temp -> next;
//     }

//     unordered_map<Node*, Node*> oldToNewNode;

//     Node* originalNode = head;
//     Node* cloneNode = cloneHead;

//     while (originalNode !=NULL && cloneNode != NULL)
//     {
//         oldToNewNode[originalNode] = cloneNode;
//         originalNode = originalNode->next;
//         cloneNode = cloneNode->next;
//     }

//     originalNode = head;
//     cloneNode = cloneHead;

//     while (originalNode != NULL)
//     {
//         cloneNode->arb = oldToNewNode[originalNode->arb];
//         originalNode = originalNode -> next;
//         cloneNode = cloneNode->next;
//     }
    
//     return cloneHead;
// }

void insertAtTail(Node* &head, Node* &tail, int data){

    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }

}

Node* copyList(Node* head){
    
    // step1: create a new list

    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;

    while (temp!=NULL)
    {
        insertAtTail(cloneHead,cloneTail,temp->data);
        temp = temp -> next;
    }
    
    // step2: cloneNodes add in between original list
    
    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while (originalNode != NULL && cloneHead != NULL)
    {
        Node* next = originalNode -> next;
        originalNode -> next = cloneNode;
        originalNode = next;

        next = cloneNode -> next;
        cloneNode -> next = originalNode;
        cloneNode = next;
    }

    // step3: copying random pointers
    temp = head;

    while (temp != NULL)
    {
        if(temp->next != NULL)
            temp->next->arb = temp->next ? temp->arb->next : temp->arb;
        
        temp = temp -> next;
    }
    
    // step4: revert changes done in step2

    originalNode = head;
    cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;

        if(originalNode != NULL)
            cloneNode -> next = originalNode -> next;
        
        cloneNode = cloneNode -> next;
    }

    // step5: return ans;

    return cloneHead;
}

int main(){

}