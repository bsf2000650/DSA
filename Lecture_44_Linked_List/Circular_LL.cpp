#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
            int value = this->data;
            if(this->next == NULL){
                delete next;
                this->next = NULL;
            }
            cout << "Memory is free for node with data " << value << endl;
        }
};

void insertNode(Node* &tail, int element, int d){

    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }else{
        // non-empty list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
        
    }
}

void deleteNode(Node* &tail, int d){
    
    // empty list
    if(tail == NULL){
        cout << "List is empty, plz check again"<< endl;
        return ;
    }else{
        // non-empty list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != d){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        
        // 1 node linked list
        if(curr==prev){
            tail = NULL;
        }
        
        // >=2 nodes linked list
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* tail){
    
    // list is empty
    if(tail==NULL)
        cout << "List is empty" << endl;
    Node* temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
    
}

bool isCircularList(Node* head){
    if(head==NULL)
        return true;

    Node* temp = head->next;
    
    while (temp!=NULL && temp!=head)
    {
        temp = temp->next;
    }

    if(temp==head){
        return true;
    }

    return false;
    
}

int main(){

    Node* tail = NULL;
    insertNode(tail,1,1);
    print(tail);
    // insertNode(tail,1,2);
    // print(tail);
    // insertNode(tail,2,4);
    // print(tail);
    // insertNode(tail,2,3);
    // print(tail);
    // insertNode(tail,4,5);
    // print(tail);
    // deleteNode(tail,1);
    // print(tail);
    if(isCircularList(tail))
        cout << "Circular Linked List " << endl;
    else
        cout << "Not Circular Linked List" << endl;

}