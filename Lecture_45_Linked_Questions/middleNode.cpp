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

Node* getMiddle(Node* head){
    if(head == NULL || head->next == NULL)
        return head;

    if(head->next->next)
        return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int getLength(Node* head){
    int len = 0;
    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}

Node* middleNode(Node *head){
    int len = getLength(head);
    int ans = len/2;

    Node* temp = head;
    int cnt = 0;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }

    return temp;
    
}

int main(){

}