
Node* lca(Node* root, int n1, int n2){
    // base case
    if(root == NULL)
        return NULL;
    
    if(root->data == n1 || root->data == n2)
        return root;
    
    Node* leftAns = (root->left, n1,n2);
    Node* rightAns = (root->right, n1, n2);

    if(leftAns != NULL && rightAns != NULL)
        return root;
    else if(leftAns != NULL && rightAns == NULL)
        return leftAns;
    else if(leftAns == NULL && rightAns != NULL)
        return rightAns;
    else
        return;
}