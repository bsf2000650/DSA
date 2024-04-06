#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int data){
            this -> data = data;
            this -> right = NULL;
            this -> left = NULL;
        }
};

node* buildTree(node* root){

    cout << "Enter data -> ";
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
        return NULL;

    cout << endl << "Enter data for left " << data << " -> "  << endl;
    root->left = buildTree(root->left);
    cout << endl << "Enter data for right " << data << " -> "  << endl;
    root->right = buildTree(root->right);
    return root; 

}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                // queue still has some child
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    
}

void inOrder(node* root){
    if(root==NULL)
        return ;
    
    inOrder(root->left);
    cout << root->data << " " ;
    inOrder(root->right);
}

void preOrder(node* root){
    if(root==NULL)
        return ;
    
    cout << root->data << " " ;
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    if(root==NULL)
        return ;
    
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " " ;
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout << "Enter data for root -> ";
    int rootData;
    cin >> rootData;
    root = new node(rootData);

    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << endl << "Enter data for left node -> " << temp->data << " ";
        int leftData;
        cin >> leftData;
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << endl << "Enter data for right node -> " << temp->data << " ";
        int rightData;
        cin >> rightData;
        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
    
}

int main(){
    node* root = NULL;

    buildFromLevelOrder(root);
    cout << endl;
    levelOrderTraversal(root);

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 

    // data to enter
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //creating tree
    // root = buildTree(root);
    // cout << endl;
    // levelOrderTraversal(root);

    // cout << endl;
    // cout << "Inorder traversal -> ";
    // inOrder(root);

    // cout << endl;
    // cout << "Preorder traversal -> ";
    // preOrder(root);

    // cout << endl;
    // cout << "Postorder traversal -> ";
    // postOrder(root);


}