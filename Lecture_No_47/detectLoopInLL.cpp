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

int main(){

}