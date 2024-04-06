
void inorder(TreeNode<int>* root, vector<int> &inorderVal){
    if(root == NULL)
        return ;
    
    inorder(root->left,inorderVal);
    inorderVal.push_back(root->data);
    inorder(root->right,inorderVal);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> inorderVal;
    inorder(root,inorderVal);

    int n = inorderVal.size() - 1;

    TreeNode<int> *newRoot = new TreeNode<int>(inorderVal[0]);
    TreeNode<int> *curr = newRoot;

    for (int i = 0; i < n; i++)
    {
        TreeNode<int> temp = new TreeNode<int>(inorderVal[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }

    curr->left = NULL;
    curr->right = NULL;
    
    return newRoot;
}
