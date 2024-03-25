#include<iostream>
#include<vector>
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

// bool checkPalindrome(vector<int> arr){
//     int s = 0;
//     int e = arr.size()-1;

//     while (s<=e)
//     {
//         if(arr[s]!=arr[e])
//             return false;
        
//         s++;
//         e--;
//     }
//     return true;
    
// }

// bool isPalindrome(Node* head){

//     vector<int> arr;
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         arr.push_back(temp->data);
//         temp = temp->next;
//     }

//     return checkPalindrome(arr);
    
// }

Node* getMid(Node* head){

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast -> next -> next;
        slow = slow->next;
    }
    return slow;
    
}

Node* reverse(Node* head){

    Node* prev = NULL;
    Node* next = NULL;
    Node* curr = head;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;

}

bool isPalindrome(Node* head){
    if(head->next == NULL)
        return head;
    
    Node* middle = getMid(head);

    Node* temp = middle->next;
    middle->next = reverse(temp);

    Node* head1 = head;
    Node* head2 = middle->next;

    while (head2 != NULL)
    {
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    temp = temp->next;
    middle->next = reverse(temp);
    
    return true;


}