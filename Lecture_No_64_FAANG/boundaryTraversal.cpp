
void traverseLeft(Node* root, vector<int> &ans){
    // base case
    if((root == NULL) || (root->left == NULL && root->right == NULL))
        return ;
    
    ans.push_back(root->data);

    if(root->left)
        traverseLeft(root->left);
    else
        traverseLeft(root->right);
    

}

void traverseLeaf(Node* root, vector<int> &ans){
    // base case
    if(root == NULL)
        return ;
    
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
        return ;
    }

    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
}

void traverseRight(Node* root, vector<int> &ans){

    // base case
    if((root == NULL) || (root->left == NULL && root->right == NULL))
        return ;
    
    if(root->right)
        traverseRight(root->right, ans);
    else
        traverseRight(root->left, ans);
    
    ans.push_back(root->data);

}

vector<int> boundary(Node* root){

    vector<int> &ans;
    // base case
    if(root == NULL)
        return ans;
    
    ans.push_back(root->data);

    // traversing left part of tree
    traverseLeft(root->left,ans);

    // traversing leaf nodes of tree

    // left sub tree
    traverseLeaf(root->left, ans);

    // right sub tree
    traverseLeaf(root->right, ans);

    // traversing right part
    traverseRight(root->right, ans);

    return ans;

}