#include<iostream>
#include<map>
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

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insertion at head
    if(position == 1){
        insertAtHead(head,d);
        return ;
    }

    // insertion at specific position
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    // insertion at tail
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert; 
}

void deleteNode(int position, Node* &head){

    // delete first node
    if(position == 1){
        Node* temp = head;
        head = head->next;

        // memory free for start node
        temp->next = NULL;
        delete temp;
    }else{

        // deleting any middle node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
    }
}

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp-> data << " ";
        temp = temp->next;
    }

    cout << endl;
    
}

bool detectLoop(Node* head){
    if(head==NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while (temp != NULL)
    {
        if(visited[temp]==true)
            return true;
        
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
    
}

Node* floydLoopDetection(Node* head){

    if(head == NULL)
        return NULL;
    
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
            fast = fast -> next;
        
        slow = slow->next;

        if(slow == fast)
            return slow;
    }

    return NULL;

}

Node* getStartingNode(Node* head){
    if(head == NULL)
        return NULL;
    
    Node* intersection = floydLoopDetection(head);
    Node* slow = head;

    while (slow != intersection)
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head == NULL)
        return;
    
    Node* startingOfLoop = getStartingNode(head);
    Node* temp = startingOfLoop;

    while (temp->next != startingOfLoop)
    {
        temp = temp->next;
    }

    temp->next = NULL;
    
}

int main(){
    Node* node1 = new Node(1);

    // insertion at Head
    Node* head = node1;
    // insertAtHead(head,9);
    // print(head);
    // insertAtHead(head,8);
    // print(head);

    // insertion at Tail
    Node* tail = node1;
    insertAtTail(tail,2);
    print(head);
    insertAtTail(tail,3);
    print(head);
    insertAtTail(tail,4);
    print(head);

    tail->next = head->next;

    // insertion at Position
    // insertAtPosition(tail,head,4,4);
    // print(head);

    // insertAtPosition(tail,head,5,5);
    // print(head);

    // insertAtPosition(tail,head,6,6);
    // print(head);

    // deleteNode(6,head);
    // print(head);


    // cout <<"node1->data -> "<< node1->data << endl;
    // cout <<"node1->next -> "<< node1->next << endl;

    if(floydLoopDetection(tail) != NULL)
        cout << "Loop detected";
    else
        cout << "Loop not detected";

        
    Node* startingNode = getStartingNode(head);
    cout << "Loop is starting at node with value -> " << startingNode -> data << endl;

    removeLoop(head);
    print(head);

}