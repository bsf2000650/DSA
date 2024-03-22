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

Node* uniqueSortedList(Node* head){
    if(head == NULL)
        return NULL;
    
    Node* curr = head;
    while (curr != NULL)
    {
        if((curr->next != NULL) && curr->data && curr->next->data){
            Node* next_next = curr->next->next;
            Node* nodeToDele = curr->next;
            delete(nodeToDele);
            curr->next = next_next;
        }else{ // not equal
            curr = curr -> next;
        }
    }

    return head;
    
}

int main(){

}
