#include<iostream>
using namespace std;

    class Node {
        public:
        int data;
        Node* next;

        Node(int data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

Node* reverse(Node* head){

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    while (curr!=NULL)
    {
       next = curr->next;
       curr->next = prev;
       prev = curr;
       curr = next; 
    }
    
    Node* prev;
}

void insertAtTail(Node* &ansHead, Node* &ansTail, int carry){

    Node* temp = new Node(carry);

    if(ansHead == NULL){
        ansHead = temp;
        ansTail = temp; 
        return ;
    }else{
        ansTail->next = temp;
        ansTail = temp;
    }


}

Node* add(Node* first, Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        int val2 = 0;
        if(first != NULL)
            val1 = first->data;
        
        if(second != NULL)
            val2 = second->data;

        int sum = carry + val1 + val2;

        int digit = sum%10;

        insertAtTail(ansHead,ansTail,digit);

        carry = sum/10;

        if(first!=NULL)
            first = first->next;
        
        if(second!=NULL)
            second = second->next;
        
    }

    return ansHead;

    
}

Node* addTwoLists(Node* first, Node* second){

    first = reverse(first);
    second = reverse(second);

    Node* ans = add(first,second);

    ans = reverse(ans);

    return ans;
}

int main(){

}